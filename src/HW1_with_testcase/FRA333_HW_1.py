#!/usr/bin/python3
from this import d, s
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
        # Defult transformation matrix is y = y+1
        self.tranformationMatrix = np.array([[1, 0, 0],
                                             [0, 1, 1],
                                             [0, 0, 1]])
    
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
                
        return self.curPos
    
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
        Tranformation_matrix = np.dot(Rotate_Z_matrix,Translate_matrix)
        return Tranformation_matrix
    
    def doTranfromation(self):
        self.curPos = np.matmul(self.tranformationMatrix,self.curPos)   
    
    def test(self):
        print(f'self.curPos(old) =\n  {self.curPos}\n')
        self.curPos = np.matmul(self.hTranformation2D([0],[0,1]),self.curPos)
        print(f'self.curPos(New) =\n  {self.curPos}\n')
        
        print('-------*1*---------')
        print(f'self.curPos(old) =\n  {self.curPos}\n')
        self.curPos = np.matmul(self.hTranformation2D([-90],[0,0]),self.curPos)
        self.curPos = np.matmul(self.hTranformation2D([-90],[0,0]),self.curPos)
        self.curPos = np.matmul(self.hTranformation2D([-90],[0,0]),self.curPos)
        self.curPos = np.matmul(self.hTranformation2D([0],[0,1]),self.curPos)
        print(f'self.curPos(New) =\n  {self.curPos}\n')
        print('-------*1*---------')
        
        print('-------*2*---------')
        print(f'self.curPos(old) =\n  {self.curPos}\n')
        self.curPos = np.matmul(self.hTranformation2D([-90],[0,0]),self.curPos)
        print(f'self.curPos(New) =\n  {self.curPos}\n')
        print('-------*2*---------')
        
        print('-------*3*---------')
        print(f'self.curPos(old) =\n  {self.curPos}\n')
        self.curPos = np.matmul(self.hTranformation2D([0],[0,1]),self.curPos)
        print(f'self.curPos(New) =\n  {self.curPos}\n')
        print('-------*3*---------')

mytest = MyBeeBot(np.array([[0,0]]))
W = np.array([[5, 2], [5, 4]])
# print(mytest.matrix([0,30,0],[0,0,0]))
mytest.test()