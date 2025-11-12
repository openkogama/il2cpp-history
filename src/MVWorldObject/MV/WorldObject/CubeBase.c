
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_Equals
               (CubeBase *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__MV__WorldObject__CubeBase->_1).naturalAligment;
    if ((bVar1 <= (obj->klass->_1).naturalAligment) &&
       ((obj->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__MV__WorldObject__CubeBase)) {
      if (obj != (Object *)0x0) {
        pBVar2 = (this->fields).byteCorners;
        if ((pBVar2 == (Byte__Array *)0x0) || (obj[1].monitor == (MonitorData *)0x0)) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        if ((int)pBVar2->max_length == *(int *)(obj[1].monitor + 0x18)) {
          pBVar5 = (this->fields).faceMaterials;
          if ((pBVar5 == (Byte__Array *)0x0) || (obj[2].klass == (Object__Class *)0x0))
          goto code_?;
          if ((int)pBVar5->max_length == *(int *)&((obj[2].klass)->_0).namespaze) {
            pBVar6 = (Byte__Array *)0x0;
            pBVar7 = pBVar6;
            pBVar5 = pBVar6;
            while (uVar8 = (uint)pBVar5, (int)uVar8 < (int)pBVar2->max_length) {
              pBVar9 = pBVar5;
              if (((uint)pBVar2->max_length <= uVar8) || (*(uint *)(obj[1].monitor + 0x18) <= uVar8)
                 ) goto code_?;
              if (pBVar7->vector[(longlong)pBVar2] != pBVar7->vector[(longlong)obj[1].monitor]) {
                return 0;
              }
              pBVar7 = (Byte__Array *)((longlong)&pBVar7->klass + 1);
              pBVar5 = (Byte__Array *)(ulonglong)(uVar8 + 1);
            }
            pBVar9 = (this->fields).faceMaterials;
            pBVar5 = pBVar6;
            while( true ) {
              uVar8 = (uint)pBVar6;
              if ((int)pBVar9->max_length <= (int)uVar8) {
                return 1;
              }
              pBVar7 = pBVar6;
              if (((uint)pBVar9->max_length <= uVar8) ||
                 (*(uint *)&((obj[2].klass)->_0).namespaze <= uVar8)) break;
              if (pBVar9->vector[(longlong)pBVar5] != pBVar5->vector[(longlong)obj[2].klass]) {
                return 0;
              }
              pBVar6 = (Byte__Array *)(ulonglong)(uVar8 + 1);
              pBVar5 = (Byte__Array *)((longlong)&pBVar5->klass + 1);
            }
code_?:
            FUN_?(pBVar6,pBVar5,pBVar7,pBVar9,unaff_RDI);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}


/* Boolean Equals(CubeBase) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_Equals_1
               (CubeBase *this,CubeBase *cube,MethodInfo *method)

{
  if (cube != (CubeBase *)0x0) {
    pBVar1 = (this->fields).byteCorners;
    if ((pBVar1 == (Byte__Array *)0x0) ||
       (pBVar2 = (cube->fields).byteCorners, pBVar2 == (Byte__Array *)0x0)) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((int)pBVar1->max_length == (int)pBVar2->max_length) {
      pBVar2 = (this->fields).faceMaterials;
      if ((pBVar2 == (Byte__Array *)0x0) ||
         (pBVar5 = (cube->fields).faceMaterials, pBVar5 == (Byte__Array *)0x0))
      goto code_?;
      if ((int)pBVar2->max_length == (int)pBVar5->max_length) {
        pBVar2 = (cube->fields).byteCorners;
        uVar6 = 0;
        uVar7 = uVar6;
        uVar8 = uVar6;
        while (uVar9 = (uint)uVar8, (int)uVar9 < (int)pBVar1->max_length) {
          if (((uint)pBVar1->max_length <= uVar9) || ((uint)pBVar2->max_length <= uVar9))
          goto code_?;
          if (pBVar1->vector[uVar7] != pBVar2->vector[uVar7]) {
            return 0;
          }
          uVar7 = uVar7 + 1;
          uVar8 = (ulonglong)(uVar9 + 1);
        }
        pBVar1 = (this->fields).faceMaterials;
        pBVar2 = (cube->fields).faceMaterials;
        uVar8 = uVar6;
        while( true ) {
          uVar9 = (uint)uVar6;
          if ((int)pBVar1->max_length <= (int)uVar9) {
            return 1;
          }
          uVar7 = uVar6;
          if (((uint)pBVar1->max_length <= uVar9) || ((uint)pBVar2->max_length <= uVar9)) break;
          if (pBVar1->vector[uVar8] != pBVar2->vector[uVar8]) {
            return 0;
          }
          uVar6 = (ulonglong)(uVar9 + 1);
          uVar8 = uVar8 + 1;
        }
code_?:
        FUN_?(uVar6,uVar8,uVar7);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
  }
  return 0;
}


/* Face FaceFlagToFace(FaceFlags) */

Face__Enum
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
          (FaceFlags__Enum faceFlag,MethodInfo *method)

{
  bVar1 = (byte)faceFlag;
  FVar2 = faceFlag & 0xff;
  if (bVar1 < 9) {
    if (FVar2 != FaceFlags__Enum_Top) {
      if (FVar2 == FaceFlags__Enum_Bottom) {
        return Face__Enum_Bottom;
      }
      if (FVar2 != (FaceFlags__Enum_Bottom|FaceFlags__Enum_Top)) {
        if (FVar2 == FaceFlags__Enum_Front) {
          return Face__Enum_Front;
        }
        if (bVar1 == 8) {
          return Face__Enum_Back;
        }
      }
    }
  }
  else {
    if (bVar1 == 0x10) {
      return Face__Enum_Left;
    }
    if (bVar1 == 0x20) {
      return Face__Enum_Right;
    }
  }
  return Face__Enum_Top;
}


/* FaceFlags FaceToFaceFlag(Face) */

FaceFlags__Enum
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceToFaceFlag
          (Face__Enum face,MethodInfo *method)

{
  if (face < (Face__Enum_Left|Face__Enum_Front)) {
    iVar1 = (int3)(face >> 8);
    iVar2 = (int7)iVar1;
    switch(face) {
    case Face__Enum_Top:
      return (FaceFlags__Enum)CONCAT71((int7)iVar1,1);
    case Face__Enum_Bottom:
      return (FaceFlags__Enum)CONCAT71((int7)iVar1,2);
    case Face__Enum_Front:
      return (FaceFlags__Enum)CONCAT71(iVar2,4);
    case Face__Enum_Back:
      return (FaceFlags__Enum)CONCAT71(iVar2,8);
    case Face__Enum_Left:
      return (FaceFlags__Enum)CONCAT71(iVar2,0x10);
    case Face__Enum_Right:
      return (FaceFlags__Enum)CONCAT71(iVar2,0x20);
    }
  }
  return in_EAX & 0xffffff00;
}


/* Void GetCorners(CubeBase, Vector3[] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
               (CubeBase *cube,Vector3__Array **corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar1 = 0;
    lVar2 = 0;
    lVar3 = 0;
    while ((pBVar4 = (cube->fields).byteCorners, pBVar4 != (Byte__Array *)0x0 &&
           (pVVar5 = *corners, pVVar5 != (Vector3__Array *)0x0))) {
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (((uint)pVVar5->max_length <= uVar1) || ((uint)pBVar4->max_length <= uVar1)) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
        FUN_?();
      }
      pVVar7 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
      if (pVVar7 == (Vector3__Array *)0x0) break;
      bVar8 = pBVar4->vector[lVar2];
      if ((uint)pVVar7->max_length <= (uint)bVar8) goto code_?;
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 1;
      fVar9 = pVVar7->vector[bVar8].z;
      *(undefined8 *)((longlong)&pVVar5->vector[0].x + lVar3) =
           *(undefined8 *)(pVVar7->vector + bVar8);
      *(float *)((longlong)&pVVar5->vector[0].z + lVar3) = fVar9;
      lVar3 = lVar3 + 0xc;
      if (0x5f < lVar3) {
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void GetFace(Vector3[] ByRef, Vector3[] ByRef, Face) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
               (Vector3__Array **corners,Vector3__Array **faceVertices,Face__Enum face,
               MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((int)pVVar1->max_length == 0) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((int)pVVar2->max_length == 0) goto code_?;
    fVar3 = pVVar1->vector[0].y;
    pVVar2->vector[0].x = pVVar1->vector[0].x;
    pVVar2->vector[0].y = fVar3;
    pVVar2->vector[0].z = pVVar1->vector[0].z;
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 2) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length < 2) goto code_?;
    fVar3 = pVVar1->vector[1].y;
    pVVar2->vector[1].x = pVVar1->vector[1].x;
    pVVar2->vector[1].y = fVar3;
    pVVar2->vector[1].z = pVVar1->vector[1].z;
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 3) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length < 3) goto code_?;
    fVar3 = pVVar1->vector[2].y;
    pVVar2->vector[2].x = pVVar1->vector[2].x;
    pVVar2->vector[2].y = fVar3;
    fVar3 = pVVar1->vector[2].z;
    goto code_?;
  case Face__Enum_Bottom:
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if (4 < (uint)pVVar1->max_length) {
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if ((int)pVVar2->max_length != 0) {
        fVar3 = pVVar1->vector[4].y;
        pVVar2->vector[0].x = pVVar1->vector[4].x;
        pVVar2->vector[0].y = fVar3;
        pVVar2->vector[0].z = pVVar1->vector[4].z;
        pVVar1 = *corners;
        pVVar2 = *faceVertices;
        if (pVVar1 == (Vector3__Array *)0x0) break;
        if (5 < (uint)pVVar1->max_length) {
          if (pVVar2 == (Vector3__Array *)0x0) break;
          if (1 < (uint)pVVar2->max_length) {
            fVar3 = pVVar1->vector[5].y;
            pVVar2->vector[1].x = pVVar1->vector[5].x;
            pVVar2->vector[1].y = fVar3;
            pVVar2->vector[1].z = pVVar1->vector[5].z;
            pVVar1 = *corners;
            pVVar2 = *faceVertices;
            if (pVVar1 == (Vector3__Array *)0x0) break;
            if (6 < (uint)pVVar1->max_length) {
              if (pVVar2 == (Vector3__Array *)0x0) break;
              if (2 < (uint)pVVar2->max_length) {
                fVar3 = pVVar1->vector[6].y;
                pVVar2->vector[2].x = pVVar1->vector[6].x;
                pVVar2->vector[2].y = fVar3;
                pVVar2->vector[2].z = pVVar1->vector[6].z;
                pVVar1 = *corners;
                pVVar2 = *faceVertices;
                if (pVVar1 == (Vector3__Array *)0x0) break;
                if (7 < (uint)pVVar1->max_length) {
                  if (pVVar2 == (Vector3__Array *)0x0) break;
                  if (3 < (uint)pVVar2->max_length) {
                    fVar3 = pVVar1->vector[7].y;
                    pVVar2->vector[3].x = pVVar1->vector[7].x;
                    pVVar2->vector[3].y = fVar3;
                    pVVar2->vector[3].z = pVVar1->vector[7].z;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto code_?;
  case Face__Enum_Front:
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (7 < (uint)pVVar1->max_length) {
        if (pVVar2 == (Vector3__Array *)0x0) break;
        if ((int)pVVar2->max_length != 0) {
          fVar3 = pVVar1->vector[7].y;
          pVVar2->vector[0].x = pVVar1->vector[7].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = pVVar1->vector[7].z;
          pVVar1 = *corners;
          pVVar2 = *faceVertices;
          if (pVVar1 == (Vector3__Array *)0x0) break;
          if (6 < (uint)pVVar1->max_length) {
            if (pVVar2 == (Vector3__Array *)0x0) break;
            if (1 < (uint)pVVar2->max_length) {
              fVar3 = pVVar1->vector[6].y;
              pVVar2->vector[1].x = pVVar1->vector[6].x;
              pVVar2->vector[1].y = fVar3;
              pVVar2->vector[1].z = pVVar1->vector[6].z;
              pVVar1 = *corners;
              pVVar2 = *faceVertices;
              if (pVVar1 == (Vector3__Array *)0x0) break;
              if (1 < (uint)pVVar1->max_length) {
                if (pVVar2 == (Vector3__Array *)0x0) break;
                if (2 < (uint)pVVar2->max_length) {
                  fVar3 = pVVar1->vector[1].y;
                  pVVar2->vector[2].x = pVVar1->vector[1].x;
                  pVVar2->vector[2].y = fVar3;
                  pVVar2->vector[2].z = pVVar1->vector[1].z;
                  pVVar1 = *corners;
                  pVVar2 = *faceVertices;
                  if (pVVar1 == (Vector3__Array *)0x0) break;
                  if ((int)pVVar1->max_length != 0) {
                    if (pVVar2 == (Vector3__Array *)0x0) break;
                    if (3 < (uint)pVVar2->max_length) {
                      fVar3 = pVVar1->vector[0].y;
                      pVVar2->vector[3].x = pVVar1->vector[0].x;
                      pVVar2->vector[3].y = fVar3;
                      pVVar2->vector[3].z = pVVar1->vector[0].z;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    break;
  case Face__Enum_Back:
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (5 < (uint)pVVar1->max_length) {
        if (pVVar2 == (Vector3__Array *)0x0) break;
        if ((int)pVVar2->max_length != 0) {
          fVar3 = pVVar1->vector[5].y;
          pVVar2->vector[0].x = pVVar1->vector[5].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = pVVar1->vector[5].z;
          pVVar1 = *corners;
          pVVar2 = *faceVertices;
          if (pVVar1 == (Vector3__Array *)0x0) break;
          if (4 < (uint)pVVar1->max_length) {
            if (pVVar2 == (Vector3__Array *)0x0) break;
            if (1 < (uint)pVVar2->max_length) {
              fVar3 = pVVar1->vector[4].y;
              pVVar2->vector[1].x = pVVar1->vector[4].x;
              pVVar2->vector[1].y = fVar3;
              pVVar2->vector[1].z = pVVar1->vector[4].z;
              pVVar1 = *corners;
              pVVar2 = *faceVertices;
              if (pVVar1 == (Vector3__Array *)0x0) break;
              if (3 < (uint)pVVar1->max_length) {
                if (pVVar2 == (Vector3__Array *)0x0) break;
                if (2 < (uint)pVVar2->max_length) {
                  fVar3 = pVVar1->vector[3].y;
                  pVVar2->vector[2].x = pVVar1->vector[3].x;
                  pVVar2->vector[2].y = fVar3;
                  pVVar2->vector[2].z = pVVar1->vector[3].z;
                  pVVar1 = *corners;
                  pVVar2 = *faceVertices;
                  if (pVVar1 == (Vector3__Array *)0x0) break;
                  if (2 < (uint)pVVar1->max_length) {
                    if (pVVar2 == (Vector3__Array *)0x0) break;
                    if (3 < (uint)pVVar2->max_length) {
                      fVar3 = pVVar1->vector[2].y;
                      pVVar2->vector[3].x = pVVar1->vector[2].x;
                      pVVar2->vector[3].y = fVar3;
                      pVVar2->vector[3].z = pVVar1->vector[2].z;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    break;
  case Face__Enum_Left:
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 5) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((int)pVVar2->max_length == 0) goto code_?;
    fVar3 = pVVar1->vector[4].y;
    pVVar2->vector[0].x = pVVar1->vector[4].x;
    pVVar2->vector[0].y = fVar3;
    pVVar2->vector[0].z = pVVar1->vector[4].z;
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length < 8) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length < 2) goto code_?;
    fVar3 = pVVar1->vector[7].y;
    pVVar2->vector[1].x = pVVar1->vector[7].x;
    pVVar2->vector[1].y = fVar3;
    pVVar2->vector[1].z = pVVar1->vector[7].z;
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((int)pVVar1->max_length == 0) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length < 3) goto code_?;
    fVar3 = pVVar1->vector[0].y;
    pVVar2->vector[2].x = pVVar1->vector[0].x;
    pVVar2->vector[2].y = fVar3;
    fVar3 = pVVar1->vector[0].z;
code_?:
    pVVar2->vector[2].z = fVar3;
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (3 < (uint)pVVar1->max_length) {
        if (pVVar2 == (Vector3__Array *)0x0) break;
        if (3 < (uint)pVVar2->max_length) {
          fVar3 = pVVar1->vector[3].y;
          pVVar2->vector[3].x = pVVar1->vector[3].x;
          pVVar2->vector[3].y = fVar3;
          pVVar2->vector[3].z = pVVar1->vector[3].z;
code_?:
          return;
        }
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    break;
  case Face__Enum_Right:
    pVVar1 = *corners;
    pVVar2 = *faceVertices;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if (6 < (uint)pVVar1->max_length) {
        if (pVVar2 == (Vector3__Array *)0x0) break;
        if ((int)pVVar2->max_length != 0) {
          fVar3 = pVVar1->vector[6].y;
          pVVar2->vector[0].x = pVVar1->vector[6].x;
          pVVar2->vector[0].y = fVar3;
          pVVar2->vector[0].z = pVVar1->vector[6].z;
          pVVar1 = *corners;
          pVVar2 = *faceVertices;
          if (pVVar1 == (Vector3__Array *)0x0) break;
          if (5 < (uint)pVVar1->max_length) {
            if (pVVar2 == (Vector3__Array *)0x0) break;
            if (1 < (uint)pVVar2->max_length) {
              fVar3 = pVVar1->vector[5].y;
              pVVar2->vector[1].x = pVVar1->vector[5].x;
              pVVar2->vector[1].y = fVar3;
              pVVar2->vector[1].z = pVVar1->vector[5].z;
              pVVar1 = *corners;
              pVVar2 = *faceVertices;
              if (pVVar1 == (Vector3__Array *)0x0) break;
              if (2 < (uint)pVVar1->max_length) {
                if (pVVar2 == (Vector3__Array *)0x0) break;
                if (2 < (uint)pVVar2->max_length) {
                  fVar3 = pVVar1->vector[2].y;
                  pVVar2->vector[2].x = pVVar1->vector[2].x;
                  pVVar2->vector[2].y = fVar3;
                  pVVar2->vector[2].z = pVVar1->vector[2].z;
                  pVVar1 = *corners;
                  pVVar2 = *faceVertices;
                  if (pVVar1 == (Vector3__Array *)0x0) break;
                  if (1 < (uint)pVVar1->max_length) {
                    if (pVVar2 == (Vector3__Array *)0x0) break;
                    if (3 < (uint)pVVar2->max_length) {
                      fVar3 = pVVar1->vector[1].y;
                      pVVar2->vector[3].x = pVVar1->vector[1].x;
                      pVVar2->vector[3].y = fVar3;
                      pVVar2->vector[3].z = pVVar1->vector[1].z;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    break;
  default:
    goto code_?;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetHashCode() */

int32_t MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetHashCode
                  (CubeBase *this,MethodInfo *method)

{
  pBVar1 = (this->fields).byteCorners;
  uVar2 = 0;
  if (pBVar1 != (Byte__Array *)0x0) {
    uVar3 = (uint)pBVar1->max_length;
    puVar4 = pBVar1->vector;
    uVar5 = uVar2;
    for (uVar6 = uVar2; (int)uVar6 < (int)uVar3; uVar6 = uVar6 + 1) {
      if (uVar3 <= uVar6) goto code_?;
      uVar5 = uVar5 + *puVar4;
      puVar4 = puVar4 + 1;
    }
    pBVar1 = (this->fields).faceMaterials;
    if (pBVar1 != (Byte__Array *)0x0) {
      uVar3 = (uint)pBVar1->max_length;
      puVar4 = pBVar1->vector;
      while( true ) {
        if ((int)uVar3 <= (int)uVar2) {
          return uVar5;
        }
        if (uVar3 <= uVar2) break;
        uVar2 = uVar2 + 1;
        uVar5 = uVar5 + *puVar4;
        puVar4 = puVar4 + 1;
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      iVar8 = (*pcVar7)();
      return iVar8;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Byte GetMaterial(CubeBase, Face) */

uint8_t MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                  (CubeBase *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cube == (CubeBase *)0x0) {
    return 0;
  }
  pBVar1 = (cube->fields).faceMaterials;
  if (pBVar1 == (Byte__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  if (face < (Face__Enum)pBVar1->max_length) {
    return pBVar1->vector[(int)face];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}


/* Void SetCubeFlags(CubeBase) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
               (CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cube == (CubeBase *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (cube->fields).unIndentedSides = 0;
  lVar2 = FUN_?(TypeInfo__System__Boolean,8);
  iVar3 = 0;
  uVar4 = 0;
  lVar5 = 0;
  do {
    pBVar6 = (cube->fields).byteCorners;
    if (pBVar6 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar6->max_length <= uVar4) goto code_?;
    uVar7 = pBVar6->vector[lVar5];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pBVar6 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    if (pBVar6 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar6->max_length <= uVar4) goto code_?;
    if (lVar2 == 0) goto code_?;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto code_?;
    uVar8 = pBVar6->vector[lVar5];
    *(bool *)(lVar2 + 0x20 + lVar5) = uVar7 != uVar8;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto code_?;
    iVar9 = iVar3 + 1;
    if (uVar7 == uVar8) {
      iVar9 = iVar3;
    }
    iVar3 = iVar9;
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 8);
  if (iVar3 == 0) {
    (cube->fields).unIndentedSides = 0x3f;
  }
  else {
    if (iVar3 < 5) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        if (*(char *)(lVar2 + 0x20) == '\0') {
          if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
          if (*(char *)(lVar2 + 0x21) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 1;
              }
            }
          }
        }
        if (4 < *(uint *)(lVar2 + 0x18)) {
          if (*(char *)(lVar2 + 0x24) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
            if (*(char *)(lVar2 + 0x25) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
              if (*(char *)(lVar2 + 0x26) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                if (*(char *)(lVar2 + 0x27) == '\0') {
                  (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 2;
                }
              }
            }
          }
          if (2 < *(uint *)(lVar2 + 0x18)) {
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                if (*(char *)(lVar2 + 0x24) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                  if (*(char *)(lVar2 + 0x25) == '\0') {
                    (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 8;
                  }
                }
              }
            }
            if (*(int *)(lVar2 + 0x18) != 0) {
              if (*(char *)(lVar2 + 0x20) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
                if (*(char *)(lVar2 + 0x21) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
                  if (*(char *)(lVar2 + 0x26) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                    if (*(char *)(lVar2 + 0x27) == '\0') {
                      (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 4;
                    }
                  }
                }
              }
              if (*(int *)(lVar2 + 0x18) != 0) {
                if (*(char *)(lVar2 + 0x20) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                  if (*(char *)(lVar2 + 0x23) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                    if (*(char *)(lVar2 + 0x24) == '\0') {
                      if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                      if (*(char *)(lVar2 + 0x27) == '\0') {
                        (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 0x10;
                      }
                    }
                  }
                }
                if (1 < *(uint *)(lVar2 + 0x18)) {
                  if (*(char *)(lVar2 + 0x21) != '\0') {
                    return;
                  }
                  if (2 < *(uint *)(lVar2 + 0x18)) {
                    if (*(char *)(lVar2 + 0x22) != '\0') {
                      return;
                    }
                    if (5 < *(uint *)(lVar2 + 0x18)) {
                      if (*(char *)(lVar2 + 0x25) != '\0') {
                        return;
                      }
                      if (6 < *(uint *)(lVar2 + 0x18)) {
                        if (*(char *)(lVar2 + 0x26) != '\0') {
                          return;
                        }
                        (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 0x20;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (cube->fields).unIndentedSides = 0;
  }
  return;
}


/* CubeBase() */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__FaceFlags);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__FaceFlags);
    LOCK();
    UNLOCK();
    FUN_?(&_21F45DB14C222566A3A1BE2C7F8536AF243B32111E7A19F53DB8FDAEC2D3162B_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  array = (Byte__Array *)FUN_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__21F45DB14C222566A3A1BE2C7F8536AF243B32111E7A19F53DB8FDAEC2D3162B_Field
             ,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners = array;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)TypeInfo__MV__WorldObject__CubeBase->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pIVar6 = TypeRef__MV__WorldObject__FaceFlags;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar7 = (longlong *)0x0;
  if (pIVar6 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar6,1);
    plVar7 = (longlong *)FUN_?(lVar3 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar7 == (longlong *)0x0) {
    uVar8 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar8);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    uVar8 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this,uVar8);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar3 = (**(code **)(*plVar7 + 0x888))(plVar7,*(undefined8 *)(*plVar7 + 0x890));
  pFVar10 = TypeInfo__MV__WorldObject__FaceFlags;
  if (lVar3 == 0) {
    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray =
         (FaceFlags__Enum__Array *)0x0;
  }
  else {
    pFVar11 = (FaceFlags__Enum__Array *)FUN_?(lVar3,TypeInfo__MV__WorldObject__FaceFlags);
    if (pFVar11 == (FaceFlags__Enum__Array *)0x0) {
      FUN_?(lVar3,pFVar10);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray = pFVar11;
    pFVar10 = TypeInfo__MV__WorldObject__FaceFlags;
    lVar12 = FUN_?(lVar3,TypeInfo__MV__WorldObject__FaceFlags);
    if (lVar12 == 0) {
      FUN_?(lVar3,pFVar10);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray
                   >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* CubeBase(Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
               (CubeBase *this,Byte__Array *byteCorners,Byte__Array *faceMaterials,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners == (Byte__Array *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar2 = FUN_?();
  pBVar3 = TypeInfo__System__Byte;
  if (lVar2 == 0) {
    (this->fields).byteCorners = (Byte__Array *)0x0;
  }
  else {
    pBVar4 = (Byte__Array *)FUN_?(lVar2,TypeInfo__System__Byte);
    if (pBVar4 == (Byte__Array *)0x0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields).byteCorners = pBVar4;
    pBVar3 = TypeInfo__System__Byte;
    lVar5 = FUN_?(lVar2,TypeInfo__System__Byte);
    if (lVar5 == 0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).byteCorners >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pBVar4 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
  (this->fields).faceMaterials = pBVar4;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).faceMaterials >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  (this->fields).byteCorners = byteCorners;
  if (iVar10 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).byteCorners >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (this->fields).faceMaterials = faceMaterials;
  if (iVar10 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).faceMaterials >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (CubeBase *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields).unIndentedSides = 0;
  lVar2 = FUN_?(TypeInfo__System__Boolean,8);
  iVar10 = 0;
  uVar6 = 0;
  lVar5 = 0;
  do {
    pBVar4 = (this->fields).byteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    uVar11 = pBVar4->vector[lVar5];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pBVar4 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    if (lVar2 == 0) goto code_?;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    uVar12 = pBVar4->vector[lVar5];
    *(bool *)(lVar2 + 0x20 + lVar5) = uVar11 != uVar12;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    iVar13 = iVar10 + 1;
    if (uVar11 == uVar12) {
      iVar13 = iVar10;
    }
    iVar10 = iVar13;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 8);
  if (iVar10 == 0) {
    (this->fields).unIndentedSides = 0x3f;
  }
  else {
    if (iVar10 < 5) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        if (*(char *)(lVar2 + 0x20) == '\0') {
          if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
          if (*(char *)(lVar2 + 0x21) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                (this->fields).unIndentedSides = (this->fields).unIndentedSides | 1;
              }
            }
          }
        }
        if (4 < *(uint *)(lVar2 + 0x18)) {
          if (*(char *)(lVar2 + 0x24) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
            if (*(char *)(lVar2 + 0x25) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
              if (*(char *)(lVar2 + 0x26) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                if (*(char *)(lVar2 + 0x27) == '\0') {
                  (this->fields).unIndentedSides = (this->fields).unIndentedSides | 2;
                }
              }
            }
          }
          if (2 < *(uint *)(lVar2 + 0x18)) {
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                if (*(char *)(lVar2 + 0x24) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                  if (*(char *)(lVar2 + 0x25) == '\0') {
                    (this->fields).unIndentedSides = (this->fields).unIndentedSides | 8;
                  }
                }
              }
            }
            if (*(int *)(lVar2 + 0x18) != 0) {
              if (*(char *)(lVar2 + 0x20) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
                if (*(char *)(lVar2 + 0x21) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
                  if (*(char *)(lVar2 + 0x26) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                    if (*(char *)(lVar2 + 0x27) == '\0') {
                      (this->fields).unIndentedSides = (this->fields).unIndentedSides | 4;
                    }
                  }
                }
              }
              if (*(int *)(lVar2 + 0x18) != 0) {
                if (*(char *)(lVar2 + 0x20) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                  if (*(char *)(lVar2 + 0x23) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                    if (*(char *)(lVar2 + 0x24) == '\0') {
                      if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                      if (*(char *)(lVar2 + 0x27) == '\0') {
                        (this->fields).unIndentedSides = (this->fields).unIndentedSides | 0x10;
                      }
                    }
                  }
                }
                if (1 < *(uint *)(lVar2 + 0x18)) {
                  if (*(char *)(lVar2 + 0x21) != '\0') {
                    return;
                  }
                  if (2 < *(uint *)(lVar2 + 0x18)) {
                    if (*(char *)(lVar2 + 0x22) != '\0') {
                      return;
                    }
                    if (5 < *(uint *)(lVar2 + 0x18)) {
                      if (*(char *)(lVar2 + 0x25) != '\0') {
                        return;
                      }
                      if (6 < *(uint *)(lVar2 + 0x18)) {
                        if (*(char *)(lVar2 + 0x26) != '\0') {
                          return;
                        }
                        (this->fields).unIndentedSides = (this->fields).unIndentedSides | 0x20;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields).unIndentedSides = 0;
  }
  return;
}


/* CubeBase(BytePacker, Byte) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_1
               (CubeBase *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners == (Byte__Array *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar2 = FUN_?();
  pBVar3 = TypeInfo__System__Byte;
  if (lVar2 == 0) {
    (this->fields).byteCorners = (Byte__Array *)0x0;
  }
  else {
    pBVar4 = (Byte__Array *)FUN_?(lVar2,TypeInfo__System__Byte);
    if (pBVar4 == (Byte__Array *)0x0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields).byteCorners = pBVar4;
    pBVar3 = TypeInfo__System__Byte;
    lVar5 = FUN_?(lVar2,TypeInfo__System__Byte);
    if (lVar5 == 0) {
      FUN_?(lVar2,pBVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).byteCorners >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pBVar4 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
  bVar9 = iRam_? != 0;
  (this->fields).faceMaterials = pBVar4;
  if (bVar9) {
    uVar6 = (uint)((ulonglong)&(this->fields).faceMaterials >> 0xc);
    lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar8 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  CubeDataPacker::CubeDataPacker_ReadCompressedCube
            (byteFlags,bp,&(this->fields).byteCorners,&(this->fields).faceMaterials,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (CubeBase *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields).unIndentedSides = 0;
  lVar2 = FUN_?(TypeInfo__System__Boolean,8);
  iVar10 = 0;
  uVar6 = 0;
  lVar5 = 0;
  do {
    pBVar4 = (this->fields).byteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    uVar11 = pBVar4->vector[lVar5];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pBVar4 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar4->max_length <= uVar6) goto code_?;
    if (lVar2 == 0) goto code_?;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    uVar12 = pBVar4->vector[lVar5];
    *(bool *)(lVar2 + 0x20 + lVar5) = uVar11 != uVar12;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_?;
    iVar13 = iVar10 + 1;
    if (uVar11 == uVar12) {
      iVar13 = iVar10;
    }
    iVar10 = iVar13;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 8);
  if (iVar10 == 0) {
    (this->fields).unIndentedSides = 0x3f;
  }
  else {
    if (iVar10 < 5) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        if (*(char *)(lVar2 + 0x20) == '\0') {
          if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
          if (*(char *)(lVar2 + 0x21) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 3) goto code_?;
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                (this->fields).unIndentedSides = (this->fields).unIndentedSides | 1;
              }
            }
          }
        }
        if (4 < *(uint *)(lVar2 + 0x18)) {
          if (*(char *)(lVar2 + 0x24) == '\0') {
            if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
            if (*(char *)(lVar2 + 0x25) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
              if (*(char *)(lVar2 + 0x26) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                if (*(char *)(lVar2 + 0x27) == '\0') {
                  (this->fields).unIndentedSides = (this->fields).unIndentedSides | 2;
                }
              }
            }
          }
          if (2 < *(uint *)(lVar2 + 0x18)) {
            if (*(char *)(lVar2 + 0x22) == '\0') {
              if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar2 + 0x23) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                if (*(char *)(lVar2 + 0x24) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 6) goto code_?;
                  if (*(char *)(lVar2 + 0x25) == '\0') {
                    (this->fields).unIndentedSides = (this->fields).unIndentedSides | 8;
                  }
                }
              }
            }
            if (*(int *)(lVar2 + 0x18) != 0) {
              if (*(char *)(lVar2 + 0x20) == '\0') {
                if (*(uint *)(lVar2 + 0x18) < 2) goto code_?;
                if (*(char *)(lVar2 + 0x21) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 7) goto code_?;
                  if (*(char *)(lVar2 + 0x26) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                    if (*(char *)(lVar2 + 0x27) == '\0') {
                      (this->fields).unIndentedSides = (this->fields).unIndentedSides | 4;
                    }
                  }
                }
              }
              if (*(int *)(lVar2 + 0x18) != 0) {
                if (*(char *)(lVar2 + 0x20) == '\0') {
                  if (*(uint *)(lVar2 + 0x18) < 4) goto code_?;
                  if (*(char *)(lVar2 + 0x23) == '\0') {
                    if (*(uint *)(lVar2 + 0x18) < 5) goto code_?;
                    if (*(char *)(lVar2 + 0x24) == '\0') {
                      if (*(uint *)(lVar2 + 0x18) < 8) goto code_?;
                      if (*(char *)(lVar2 + 0x27) == '\0') {
                        (this->fields).unIndentedSides = (this->fields).unIndentedSides | 0x10;
                      }
                    }
                  }
                }
                if (1 < *(uint *)(lVar2 + 0x18)) {
                  if (*(char *)(lVar2 + 0x21) != '\0') {
                    return;
                  }
                  if (2 < *(uint *)(lVar2 + 0x18)) {
                    if (*(char *)(lVar2 + 0x22) != '\0') {
                      return;
                    }
                    if (5 < *(uint *)(lVar2 + 0x18)) {
                      if (*(char *)(lVar2 + 0x25) != '\0') {
                        return;
                      }
                      if (6 < *(uint *)(lVar2 + 0x18)) {
                        if (*(char *)(lVar2 + 0x26) != '\0') {
                          return;
                        }
                        (this->fields).unIndentedSides = (this->fields).unIndentedSides | 0x20;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields).unIndentedSides = 0;
  }
  return;
}


/* CubeBase(Byte) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_2
               (CubeBase *this,uint8_t material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  pBVar2 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
  if (pBVar2 == (Byte__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((((int)pBVar2->max_length == 0) ||
       (pBVar2->vector[0] = material, (uint)pBVar2->max_length < 2)) ||
      (pBVar2->vector[1] = material, (uint)pBVar2->max_length < 3)) ||
     (((pBVar2->vector[2] = material, (uint)pBVar2->max_length < 4 ||
       (pBVar2->vector[3] = material, (uint)pBVar2->max_length < 5)) ||
      (pBVar2->vector[4] = material, (uint)pBVar2->max_length < 6)))) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pBVar2->vector[5] = material;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte,pBVar1,pBVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners == (Byte__Array *)0x0)
  {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = FUN_?();
  pBVar5 = TypeInfo__System__Byte;
  if (lVar4 == 0) {
    (this->fields).byteCorners = (Byte__Array *)0x0;
  }
  else {
    pBVar6 = (Byte__Array *)FUN_?(lVar4,TypeInfo__System__Byte);
    if (pBVar6 == (Byte__Array *)0x0) {
      FUN_?(lVar4,pBVar5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).byteCorners = pBVar6;
    pBVar5 = TypeInfo__System__Byte;
    lVar7 = FUN_?(lVar4,TypeInfo__System__Byte);
    if (lVar7 == 0) {
      FUN_?(lVar4,pBVar5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields).byteCorners >> 0xc);
    lVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar10 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pBVar6 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,6);
  (this->fields).faceMaterials = pBVar6;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields).faceMaterials >> 0xc);
    lVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar10 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  iVar12 = iRam_?;
  (this->fields).byteCorners = pBVar1;
  if (iVar12 != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields).byteCorners >> 0xc);
    lVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar10 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
      iVar12 = iRam_?;
    } while (!bVar11);
  }
  (this->fields).faceMaterials = pBVar2;
  if (iVar12 != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields).faceMaterials >> 0xc);
    lVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar10 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (CubeBase *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->fields).unIndentedSides = 0;
  lVar4 = FUN_?(TypeInfo__System__Boolean,8);
  iVar12 = 0;
  uVar8 = 0;
  lVar7 = 0;
  do {
    pBVar1 = (this->fields).byteCorners;
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar1->max_length <= uVar8) goto code_?;
    uVar13 = pBVar1->vector[lVar7];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar1->max_length <= uVar8) goto code_?;
    if (lVar4 == 0) goto code_?;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_?;
    uVar14 = pBVar1->vector[lVar7];
    *(bool *)(lVar4 + 0x20 + lVar7) = uVar13 != uVar14;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_?;
    iVar15 = iVar12 + 1;
    if (uVar13 == uVar14) {
      iVar15 = iVar12;
    }
    iVar12 = iVar15;
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 1;
  } while (lVar7 < 8);
  if (iVar12 == 0) {
    (this->fields).unIndentedSides = 0x3f;
  }
  else {
    if (iVar12 < 5) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        if (*(char *)(lVar4 + 0x20) == '\0') {
          if (*(uint *)(lVar4 + 0x18) < 2) goto code_?;
          if (*(char *)(lVar4 + 0x21) == '\0') {
            if (*(uint *)(lVar4 + 0x18) < 3) goto code_?;
            if (*(char *)(lVar4 + 0x22) == '\0') {
              if (*(uint *)(lVar4 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar4 + 0x23) == '\0') {
                (this->fields).unIndentedSides = (this->fields).unIndentedSides | 1;
              }
            }
          }
        }
        if (4 < *(uint *)(lVar4 + 0x18)) {
          if (*(char *)(lVar4 + 0x24) == '\0') {
            if (*(uint *)(lVar4 + 0x18) < 6) goto code_?;
            if (*(char *)(lVar4 + 0x25) == '\0') {
              if (*(uint *)(lVar4 + 0x18) < 7) goto code_?;
              if (*(char *)(lVar4 + 0x26) == '\0') {
                if (*(uint *)(lVar4 + 0x18) < 8) goto code_?;
                if (*(char *)(lVar4 + 0x27) == '\0') {
                  (this->fields).unIndentedSides = (this->fields).unIndentedSides | 2;
                }
              }
            }
          }
          if (2 < *(uint *)(lVar4 + 0x18)) {
            if (*(char *)(lVar4 + 0x22) == '\0') {
              if (*(uint *)(lVar4 + 0x18) < 4) goto code_?;
              if (*(char *)(lVar4 + 0x23) == '\0') {
                if (*(uint *)(lVar4 + 0x18) < 5) goto code_?;
                if (*(char *)(lVar4 + 0x24) == '\0') {
                  if (*(uint *)(lVar4 + 0x18) < 6) goto code_?;
                  if (*(char *)(lVar4 + 0x25) == '\0') {
                    (this->fields).unIndentedSides = (this->fields).unIndentedSides | 8;
                  }
                }
              }
            }
            if (*(int *)(lVar4 + 0x18) != 0) {
              if (*(char *)(lVar4 + 0x20) == '\0') {
                if (*(uint *)(lVar4 + 0x18) < 2) goto code_?;
                if (*(char *)(lVar4 + 0x21) == '\0') {
                  if (*(uint *)(lVar4 + 0x18) < 7) goto code_?;
                  if (*(char *)(lVar4 + 0x26) == '\0') {
                    if (*(uint *)(lVar4 + 0x18) < 8) goto code_?;
                    if (*(char *)(lVar4 + 0x27) == '\0') {
                      (this->fields).unIndentedSides = (this->fields).unIndentedSides | 4;
                    }
                  }
                }
              }
              if (*(int *)(lVar4 + 0x18) != 0) {
                if (*(char *)(lVar4 + 0x20) == '\0') {
                  if (*(uint *)(lVar4 + 0x18) < 4) goto code_?;
                  if (*(char *)(lVar4 + 0x23) == '\0') {
                    if (*(uint *)(lVar4 + 0x18) < 5) goto code_?;
                    if (*(char *)(lVar4 + 0x24) == '\0') {
                      if (*(uint *)(lVar4 + 0x18) < 8) goto code_?;
                      if (*(char *)(lVar4 + 0x27) == '\0') {
                        (this->fields).unIndentedSides = (this->fields).unIndentedSides | 0x10;
                      }
                    }
                  }
                }
                if (1 < *(uint *)(lVar4 + 0x18)) {
                  if (*(char *)(lVar4 + 0x21) != '\0') {
                    return;
                  }
                  if (2 < *(uint *)(lVar4 + 0x18)) {
                    if (*(char *)(lVar4 + 0x22) != '\0') {
                      return;
                    }
                    if (5 < *(uint *)(lVar4 + 0x18)) {
                      if (*(char *)(lVar4 + 0x25) != '\0') {
                        return;
                      }
                      if (6 < *(uint *)(lVar4 + 0x18)) {
                        if (*(char *)(lVar4 + 0x26) != '\0') {
                          return;
                        }
                        (this->fields).unIndentedSides = (this->fields).unIndentedSides | 0x20;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).unIndentedSides = 0;
  }
  return;
}


/* Vector3[] get_Corners() */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
          (CubeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).byteCorners;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  uVar3 = 0;
  lVar4 = 0;
  pVVar5 = pVVar2->vector;
  while (pBVar1 != (Byte__Array *)0x0) {
    if ((uint)pBVar1->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      pVVar2 = (Vector3__Array *)(*pcVar6)();
      return pVVar2;
    }
    bVar7 = pBVar1->vector[lVar4];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar8 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
    if (pVVar8 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar8->max_length <= (uint)bVar7) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length <= uVar3) goto code_?;
    fVar9 = pVVar8->vector[bVar7].y;
    uVar3 = uVar3 + 1;
    pVVar5->x = pVVar8->vector[bVar7].x;
    pVVar5->y = fVar9;
    lVar4 = lVar4 + 1;
    pVVar5->z = pVVar8->vector[bVar7].z;
    pVVar5 = pVVar5 + 1;
    if (7 < lVar4) {
      return pVVar2;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar2 = (Vector3__Array *)(*pcVar6)();
  return pVVar2;
}


/* FaceFlags[] get_FaceFlagsArray() */

FaceFlags__Enum__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_FaceFlagsArray(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  return TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
}


/* Byte[] get_IdentityByteCorners() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityByteCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners == (Byte__Array *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Byte__Array *)(*pcVar1)();
    return pBVar2;
  }
  lVar3 = FUN_?();
  pBVar4 = TypeInfo__System__Byte;
  pBVar2 = (Byte__Array *)0x0;
  if ((lVar3 != 0) &&
     (pBVar2 = (Byte__Array *)FUN_?(lVar3,TypeInfo__System__Byte),
     pBVar2 == (Byte__Array *)0x0)) {
    FUN_?(lVar3,pBVar4);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Byte__Array *)(*pcVar1)();
    return pBVar2;
  }
  return pBVar2;
}


/* Vector3[] get_IdentityCorners() */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  uVar3 = 0;
  lVar4 = 0;
  pVVar5 = pVVar2->vector;
  while (pBVar1 != (Byte__Array *)0x0) {
    if ((uint)pBVar1->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      pVVar2 = (Vector3__Array *)(*pcVar6)();
      return pVVar2;
    }
    bVar7 = pBVar1->vector[lVar4];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar8 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
    if (pVVar8 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar8->max_length <= (uint)bVar7) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length <= uVar3) goto code_?;
    fVar9 = pVVar8->vector[bVar7].y;
    uVar3 = uVar3 + 1;
    pVVar5->x = pVVar8->vector[bVar7].x;
    pVVar5->y = fVar9;
    lVar4 = lVar4 + 1;
    pVVar5->z = pVVar8->vector[bVar7].z;
    pVVar5 = pVVar5 + 1;
    if (7 < lVar4) {
      return pVVar2;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar2 = (Vector3__Array *)(*pcVar6)();
  return pVVar2;
}


/* Boolean op_Equality(CubeBase, CubeBase) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
               (CubeBase *a,CubeBase *b,MethodInfo *method)

{
  if (a == b) {
    return 1;
  }
  if ((a == (CubeBase *)0x0) || (b == (CubeBase *)0x0)) {
    return 0;
  }
  if (b != (CubeBase *)0x0) {
    pBVar1 = (a->fields).byteCorners;
    if ((pBVar1 == (Byte__Array *)0x0) ||
       (pBVar2 = (b->fields).byteCorners, pBVar2 == (Byte__Array *)0x0)) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((int)pBVar1->max_length == (int)pBVar2->max_length) {
      pBVar2 = (a->fields).faceMaterials;
      if ((pBVar2 == (Byte__Array *)0x0) ||
         (pBVar5 = (b->fields).faceMaterials, pBVar5 == (Byte__Array *)0x0))
      goto code_?;
      if ((int)pBVar2->max_length == (int)pBVar5->max_length) {
        pBVar2 = (b->fields).byteCorners;
        uVar6 = 0;
        uVar7 = uVar6;
        uVar8 = uVar6;
        while (uVar9 = (uint)uVar8, (int)uVar9 < (int)pBVar1->max_length) {
          if (((uint)pBVar1->max_length <= uVar9) || ((uint)pBVar2->max_length <= uVar9))
          goto code_?;
          if (pBVar1->vector[uVar7] != pBVar2->vector[uVar7]) {
            return 0;
          }
          uVar7 = uVar7 + 1;
          uVar8 = (ulonglong)(uVar9 + 1);
        }
        pBVar1 = (a->fields).faceMaterials;
        pBVar2 = (b->fields).faceMaterials;
        uVar8 = uVar6;
        while( true ) {
          uVar9 = (uint)uVar6;
          if ((int)pBVar1->max_length <= (int)uVar9) {
            return 1;
          }
          uVar7 = uVar6;
          if (((uint)pBVar1->max_length <= uVar9) || ((uint)pBVar2->max_length <= uVar9)) break;
          if (pBVar1->vector[uVar8] != pBVar2->vector[uVar8]) {
            return 0;
          }
          uVar6 = (ulonglong)(uVar9 + 1);
          uVar8 = uVar8 + 1;
        }
code_?:
        FUN_?(uVar6,uVar8,uVar7);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
  }
  return 0;
}


/* Boolean op_Inequality(CubeBase, CubeBase) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
               (CubeBase *a,CubeBase *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (a != b) {
    if ((a != (CubeBase *)0x0) && (b != (CubeBase *)0x0)) {
      bVar1 = CubeBase_Equals_1(a,b,(MethodInfo *)0x0);
      return bVar1 ^ 1;
    }
    return 1;
  }
  return 0;
}


/* Void set_Corners(Vector3[]) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
               (CubeBase *this,Vector3__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar1 = CubeDataPacker::CubeDataPacker_CornersToByteArray(value,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).byteCorners = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).byteCorners >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

