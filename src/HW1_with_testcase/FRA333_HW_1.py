#!/usr/bin/python3
from trackbeebot import BeeBot
import matplotlib.pyplot as plt 
from matplotlib.patches import Polygon
import numpy as np
import math
import json

class MyBeeBot(BeeBot):
    def __init__(self,a_i):
        super().__init__(a_i)
    # a_i is initial position
    # c is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
    # o is obstacle
        self.curPos = np.vstack((np.array(a_i).transpose(),[1]))
    
    def trackBeeBot(self, com, W):
    # a_i is initial position
    # com is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
    # W is wall
        for c in com :
            if c == '0':
                break
            elif c == '1':
                self.curPos = np.matmul(self.hTranformation2D([0],[0,1]),self.curPos)
            elif c == '2':
                self.curPos = np.matmul(self.hTranformation2D([0],[0,-1]),self.curPos)
            elif c == '3':
                self.curPos = np.matmul(self.hTranformation2D([90],[0,0]),self.curPos)
            elif c == '4':
                self.curPos = np.matmul(self.hTranformation2D([-90],[0,0]),self.curPos)
            else:
                print('Command Error')
                break
            if self.checkCollision(W):
                print('Collision')
                break
      

    def checkCollision(self, W):
        if self.curPos[0] > W[0] or self.curPos[0] < 0 or self.curPos[1] > W[1] or self.curPos[1] < 0:
            return True
        else:
            return False
    
    def sinCos(self,angle):
        r = np.radians(angle)
        return np.cos(r), np.sin(r)
    
    def hTranformation2D(self,rotation, translation):
        # rotation is a 1x1 vector repesent as [theta] 
        # theta is the rotation angle around z-axis
        # translation is a 2x1 vector repesent as [x,y]
        zC, zS = self.sinCos(rotation[0])
        dX = translation[0]
        dY = translation[1]
        Translate_matrix = np.array([[1, 0, dX],
                                    [0, 1, dY],
                                    [0, 0, 1]])
        Rotate_Z_matrix = np.array([[zC, -zS, 0],
                                    [zS, zC, 0],
                                    [0, 0, 1]])
        Translate_matrix_minus = np.array([[1, 0, -dX],
                                            [0, 1, -dY],
                                            [0, 0, 1]])
        # print(np.array([[zC, -zS, dX],
        #                 [zS, zC, dY],
        #                 [0, 0, 1]]))
        print(np.dot(Translate_matrix,np.dot(Rotate_Z_matrix,Translate_matrix_minus)))
        return np.dot(Translate_matrix_minus,np.dot(Rotate_Z_matrix,Translate_matrix))
    
    def matrix(self,rotation, translation):
        xC, xS = self.sinCos(rotation[0])
        yC, yS = self.sinCos(rotation[1])
        zC, zS = self.sinCos(rotation[2])
        dX = translation[0]
        dY = translation[1]
        dZ = translation[2]
        Translate_matrix = np.array([[1, 0, 0, dX],
                                    [0, 1, 0, dY],
                                    [0, 0, 1, dZ],
                                    [0, 0, 0, 1]])
        Rotate_X_matrix = np.array([[1, 0, 0, 0],
                                    [0, xC, -xS, 0],
                                    [0, xS, xC, 0],
                                    [0, 0, 0, 1]])
        Rotate_Y_matrix = np.array([[yC, 0, yS, 0],
                                    [0, 1, 0, 0],
                                    [-yS, 0, yC, 0],
                                    [0, 0, 0, 1]])
        Rotate_Z_matrix = np.array([[zC, -zS, 0, 0],
                                    [zS, zC, 0, 0],
                                    [0, 0, 1, 0],
                                    [0, 0, 0, 1]])
        return np.dot(Rotate_Z_matrix,np.dot(Rotate_Y_matrix,np.dot(Rotate_X_matrix,Translate_matrix)))
    
    def test(self):
        tr = self.hTranformation2D([90],[1,1])
        # dX = 1
        # dY = 2
        # zC, zS = self.sinCos(-90)
        # R = np.array([[zC, -zS, 0],
        #             [zS, zC, 0],
        #             [0, 0, 1]])
        # T = np.array([[dX],
        #             [dY],
        #             [0]])
        # print('-------3---------')
        # RP = np.matmul(R,self.curPos)
        # print(RP)
        # print('-------4---------')
        # print(f'{RP} \n   +  \n{T}  \n = \n{np.sum([RP,T],axis=0)}')
        # print('-------5---------')
        # RT = np.matmul(R,T)
        # print(f'{RP} \n   +  \n{RT}  \n = \n{np.sum([RP,RT],axis=0)}')
        print('-------6---------')
        self.curPos = np.matmul(tr,self.curPos)
        print(self.curPos)
    

mytest = MyBeeBot(np.array([[0,0]]))
W = np.array([[5, 2], [5, 4]])
# print(mytest.matrix([0,30,0],[0,0,0]))
mytest.test()