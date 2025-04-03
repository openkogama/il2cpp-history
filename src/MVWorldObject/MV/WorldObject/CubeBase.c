
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_Equals
               (CubeBase *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__MV__WorldObject__CubeBase->_1).naturalAligment;
    if ((bVar1 <= (obj->klass->_1).naturalAligment) &&
       ((obj->klass->_1).typeHierarchy[bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__MV__WorldObject__CubeBase)) {
      pBVar2 = (this->fields).byteCorners;
      if ((pBVar2 != (Byte__Array *)0x0) && (pMVar3 = obj[1].monitor, pMVar3 != (MonitorData *)0x0))
      {
        if (pBVar2->max_length != *(il2cpp_array_size_t *)(pMVar3 + 0xc)) {
          return 0;
        }
        pBVar4 = (this->fields).faceMaterials;
        if ((pBVar4 != (Byte__Array *)0x0) &&
           (pOVar5 = obj[2].klass, pOVar5 != (Object__Class *)0x0)) {
          if ((char *)pBVar4->max_length != (pOVar5->_0).namespaze) {
            return 0;
          }
          for (uVar6 = 0; (int)uVar6 < (int)pBVar2->max_length; uVar6 = uVar6 + 1) {
            if ((pBVar2->max_length <= uVar6) || (*(uint *)(pMVar3 + 0xc) <= uVar6))
            goto code_?;
            if (*(MonitorData *)(pBVar2->vector + uVar6) != pMVar3[uVar6 + 0x10]) {
              return 0;
            }
          }
          pcVar7 = (char *)0x0;
          while( true ) {
            if ((int)pBVar4->max_length <= (int)pcVar7) {
              return 1;
            }
            if (((char *)pBVar4->max_length <= pcVar7) || ((pOVar5->_0).namespaze <= pcVar7)) break;
            if (pBVar4->vector[(int)pcVar7] != pcVar7[(int)&(pOVar5->_0).byval_arg.data]) {
              return 0;
            }
            pcVar7 = pcVar7 + 1;
          }
code_?:
          func_?();
        }
      }
      func_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
  }
  return 0;
}


/* Boolean Equals(CubeBase) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_Equals_1
               (CubeBase *this,CubeBase *cube,MethodInfo *method)

{
  if (cube == (CubeBase *)0x0) {
    return 0;
  }
  pBVar1 = (this->fields).byteCorners;
  if ((pBVar1 != (Byte__Array *)0x0) &&
     (pBVar2 = (cube->fields).byteCorners, pBVar2 != (Byte__Array *)0x0)) {
    if (pBVar1->max_length != pBVar2->max_length) {
      return 0;
    }
    pBVar3 = (this->fields).faceMaterials;
    if ((pBVar3 != (Byte__Array *)0x0) &&
       (pBVar4 = (cube->fields).faceMaterials, pBVar4 != (Byte__Array *)0x0)) {
      if (pBVar3->max_length != pBVar4->max_length) {
        return 0;
      }
      for (uVar5 = 0; (int)uVar5 < (int)pBVar1->max_length; uVar5 = uVar5 + 1) {
        if ((pBVar1->max_length <= uVar5) || (pBVar2->max_length <= uVar5)) goto code_?;
        if (pBVar1->vector[uVar5] != pBVar2->vector[uVar5]) {
          return 0;
        }
      }
      uVar5 = 0;
      while( true ) {
        if ((int)pBVar3->max_length <= (int)uVar5) {
          return 1;
        }
        if ((pBVar3->max_length <= uVar5) || (pBVar4->max_length <= uVar5)) break;
        if (pBVar3->vector[uVar5] != pBVar4->vector[uVar5]) {
          return 0;
        }
        uVar5 = uVar5 + 1;
      }
code_?:
      func_?();
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Face FaceFlagToFace(FaceFlags) */

Face__Enum
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
          (FaceFlags__Enum faceFlag,MethodInfo *method)

{
  if ((byte)(undefined1)faceFlag < (FaceFlags__Enum_Back|FaceFlags__Enum_Top)) {
    switch(faceFlag & 0xff) {
    case FaceFlags__Enum_Top:
    case FaceFlags__Enum_Bottom|FaceFlags__Enum_Top:
      break;
    case FaceFlags__Enum_Bottom:
      return Face__Enum_Bottom;
    case FaceFlags__Enum_Front:
      return Face__Enum_Front;
    default:
      if ((undefined1)faceFlag == FaceFlags__Enum_Back) {
        return Face__Enum_Back;
      }
    }
  }
  else {
    if ((undefined1)faceFlag == FaceFlags__Enum_Left) {
      return Face__Enum_Left;
    }
    if ((undefined1)faceFlag == FaceFlags__Enum_Right) {
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
  uVar1 = (uint3)(face >> 8);
  switch(face) {
  case Face__Enum_Top:
    return CONCAT31(uVar1,1);
  case Face__Enum_Bottom:
    return CONCAT31(uVar1,2);
  case Face__Enum_Front:
    return CONCAT31(uVar1,4);
  case Face__Enum_Back:
    return CONCAT31(uVar1,8);
  case Face__Enum_Left:
    return CONCAT31(uVar1,0x10);
  case Face__Enum_Right:
    return CONCAT31(uVar1,0x20);
  default:
    return (uint)uVar1 << 8;
  }
}


/* Void GetCorners(CubeBase, Vector3[] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
               (CubeBase *cube,Vector3__Array **corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      cRam_? = '\x01';
    }
    uVar1 = 0;
    iStack_2 = 0;
    while ((pBVar3 = (cube->fields).byteCorners, pBVar3 != (Byte__Array *)0x0 &&
           (pVVar4 = *corners, pVVar4 != (Vector3__Array *)0x0))) {
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      if ((pVVar4->max_length <= uVar1) || (pBVar3->max_length <= uVar1)) goto code_?;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pVVar5 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
      if (pVVar5 == (Vector3__Array *)0x0) break;
      uVar6 = (uint)pBVar3->vector[uVar1];
      if (pVVar5->max_length <= uVar6) goto code_?;
      uVar1 = uVar1 + 1;
      fVar7 = pVVar5->vector[uVar6].z;
      iVar8 = iStack_2 + 0xc;
      *(undefined8 *)((int)&pVVar4->vector[0].x + iStack_2) =
           *(undefined8 *)(pVVar5->vector + uVar6);
      *(float *)((int)&pVVar4->vector[0].z + iStack_2) = fVar7;
      iStack_2 = iVar8;
      if (0x5f < iVar8) {
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void GetFace(Vector3[] ByRef, Vector3[] ByRef, Face) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
               (Vector3__Array **corners,Vector3__Array **faceVertices,Face__Enum face,
               MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(1,uStack_2,uStack_3);
    pVVar4 = *corners;
    pVVar1 = *faceVertices;
    goto joined_?;
  case Face__Enum_Bottom:
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(1,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(2,uStack_2,uStack_3);
    pVVar4 = *corners;
    pVVar1 = *faceVertices;
    break;
  case Face__Enum_Front:
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(1,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(2,uStack_2,uStack_3);
    pVVar4 = *corners;
    pVVar1 = *faceVertices;
    break;
  case Face__Enum_Back:
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(1,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(2,uStack_2,uStack_3);
    pVVar4 = *corners;
    pVVar1 = *faceVertices;
    break;
  case Face__Enum_Left:
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(1,uStack_2,uStack_3);
    pVVar4 = *corners;
    pVVar1 = *faceVertices;
joined_?:
    if ((pVVar4 == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(2,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if (*corners == (Vector3__Array *)0x0) goto code_?;
    goto code_?;
  case Face__Enum_Right:
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(0,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(1,uStack_2,uStack_3);
    pVVar1 = *faceVertices;
    if ((*corners == (Vector3__Array *)0x0) || (func_?(), pVVar1 == (Vector3__Array *)0x0))
    goto code_?;
    func_?(2,uStack_2,uStack_3);
    pVVar4 = *corners;
    pVVar1 = *faceVertices;
    break;
  default:
    goto code_?;
  }
  if (pVVar4 != (Vector3__Array *)0x0) {
code_?:
    func_?();
    if (pVVar1 != (Vector3__Array *)0x0) {
      func_?(3,uStack_2,uStack_3);
code_?:
      return;
    }
  }
code_?:
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Int32 GetHashCode() */

int32_t MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetHashCode
                  (CubeBase *this,MethodInfo *method)

{
  iVar1 = 0;
  uVar2 = 0;
  pBVar3 = (this->fields).byteCorners;
  if (pBVar3 != (Byte__Array *)0x0) {
    for (; (int)uVar2 < (int)pBVar3->max_length; uVar2 = uVar2 + 1) {
      if (pBVar3->max_length <= uVar2) goto code_?;
      iVar1 = iVar1 + (uint)pBVar3->vector[uVar2];
    }
    pBVar3 = (this->fields).faceMaterials;
    uVar2 = 0;
    if (pBVar3 != (Byte__Array *)0x0) {
      while( true ) {
        if ((int)pBVar3->max_length <= (int)uVar2) {
          return iVar1;
        }
        if (pBVar3->max_length <= uVar2) break;
        iVar1 = iVar1 + (uint)pBVar3->vector[uVar2];
        uVar2 = uVar2 + 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Byte GetMaterial(CubeBase, Face) */

uint8_t MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                  (CubeBase *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CubeBase__Class *)&TypeInfo__MV__WorldObject__CubeBase;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__MV__WorldObject__CubeBase;
    func_?();
  }
  if (cube == (CubeBase *)0x0) {
    return 0;
  }
  pBVar2 = (cube->fields).faceMaterials;
  if (pBVar2 == (Byte__Array *)0x0) {
    pCStack_1 = (CubeBase__Class *)&stack0xfffffffc;
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return uVar6;
  }
  if (face < pBVar2->max_length) {
    return pBVar2->vector[face];
  }
  pCStack_1 = (CubeBase__Class *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  uVar6 = (*pcVar5)();
  return uVar6;
}


/* Void SetCubeFlags(CubeBase) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
               (CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if (cube == (CubeBase *)0x0) {
code_?:
    func_?();
  }
  else {
    (cube->fields).unIndentedSides = 0;
    iVar1 = func_?(TypeInfo__System__Boolean,8);
    iStack_2 = 0;
    uVar3 = 0;
    do {
      pBVar4 = (cube->fields).byteCorners;
      if (pBVar4 == (Byte__Array *)0x0) goto code_?;
      if (pBVar4->max_length <= uVar3) goto code_?;
      uVar5 = pBVar4->vector[uVar3];
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      pBVar4 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
      if (pBVar4 == (Byte__Array *)0x0) goto code_?;
      if (pBVar4->max_length <= uVar3) goto code_?;
      if (iVar1 == 0) goto code_?;
      if (*(uint *)(iVar1 + 0xc) <= uVar3) goto code_?;
      uVar6 = pBVar4->vector[uVar3];
      *(bool *)(iVar1 + 0x10 + uVar3) = uVar5 != uVar6;
      if (*(uint *)(iVar1 + 0xc) <= uVar3) goto code_?;
      iVar7 = iStack_2 + 1;
      if (uVar5 == uVar6) {
        iVar7 = iStack_2;
      }
      uVar3 = uVar3 + 1;
      iStack_2 = iVar7;
    } while ((int)uVar3 < 8);
    if (iVar7 == 0) {
      (cube->fields).unIndentedSides = 0x3f;
      return;
    }
    if (4 < iVar7) {
      (cube->fields).unIndentedSides = 0;
      return;
    }
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (uVar3 != 0) {
      if (*(char *)(iVar1 + 0x10) == '\0') {
        if (uVar3 < 2) goto code_?;
        if (*(char *)(iVar1 + 0x11) == '\0') {
          if (uVar3 < 3) goto code_?;
          if (*(char *)(iVar1 + 0x12) == '\0') {
            if (uVar3 < 4) goto code_?;
            if (*(char *)(iVar1 + 0x13) == '\0') {
              (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 1;
            }
          }
        }
      }
      uVar3 = *(uint *)(iVar1 + 0xc);
      if (4 < uVar3) {
        if (*(char *)(iVar1 + 0x14) == '\0') {
          if (uVar3 < 6) goto code_?;
          if (*(char *)(iVar1 + 0x15) == '\0') {
            if (uVar3 < 7) goto code_?;
            if (*(char *)(iVar1 + 0x16) == '\0') {
              if (uVar3 < 8) goto code_?;
              if (*(char *)(iVar1 + 0x17) == '\0') {
                (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 2;
              }
            }
          }
        }
        uVar3 = *(uint *)(iVar1 + 0xc);
        if (2 < uVar3) {
          if (*(char *)(iVar1 + 0x12) == '\0') {
            if (uVar3 < 4) goto code_?;
            if (*(char *)(iVar1 + 0x13) == '\0') {
              if (uVar3 < 5) goto code_?;
              if (*(char *)(iVar1 + 0x14) == '\0') {
                if (uVar3 < 6) goto code_?;
                if (*(char *)(iVar1 + 0x15) == '\0') {
                  (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 8;
                }
              }
            }
          }
          uVar3 = *(uint *)(iVar1 + 0xc);
          if (uVar3 != 0) {
            if (*(char *)(iVar1 + 0x10) == '\0') {
              if (uVar3 < 2) goto code_?;
              if (*(char *)(iVar1 + 0x11) == '\0') {
                if (uVar3 < 7) goto code_?;
                if (*(char *)(iVar1 + 0x16) == '\0') {
                  if (uVar3 < 8) goto code_?;
                  if (*(char *)(iVar1 + 0x17) == '\0') {
                    (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 4;
                  }
                }
              }
            }
            uVar3 = *(uint *)(iVar1 + 0xc);
            if (uVar3 != 0) {
              if (*(char *)(iVar1 + 0x10) == '\0') {
                if (uVar3 < 4) goto code_?;
                if (*(char *)(iVar1 + 0x13) == '\0') {
                  if (uVar3 < 5) goto code_?;
                  if (*(char *)(iVar1 + 0x14) == '\0') {
                    if (uVar3 < 8) goto code_?;
                    if (*(char *)(iVar1 + 0x17) == '\0') {
                      (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 0x10;
                    }
                  }
                }
              }
              uVar3 = *(uint *)(iVar1 + 0xc);
              if (1 < uVar3) {
                if (*(char *)(iVar1 + 0x11) == '\0') {
                  if (uVar3 < 3) goto code_?;
                  if (*(char *)(iVar1 + 0x12) == '\0') {
                    if (uVar3 < 6) goto code_?;
                    if (*(char *)(iVar1 + 0x15) == '\0') {
                      if (uVar3 < 7) goto code_?;
                      if (*(char *)(iVar1 + 0x16) == '\0') {
                        (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 0x20;
                      }
                    }
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CubeBase() */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__MV__WorldObject__FaceFlags);
    func_?(&TypeRef__MV__WorldObject__FaceFlags);
    func_?(&TypeInfo__System__Type);
    func_?(&_21F45DB14C222566A3A1BE2C7F8536AF243B32111E7A19F53DB8FDAEC2D3162B_Field);
    cRam_? = '\x01';
  }
  array = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__21F45DB14C222566A3A1BE2C7F8536AF243B32111E7A19F53DB8FDAEC2D3162B_Field
             ,(MethodInfo *)0x0);
  TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners = array;
  func_?(TypeInfo__MV__WorldObject__CubeBase->static_fields,array);
  handle = TypeRef__MV__WorldObject__FaceFlags;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar1 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  pFVar2 = TypeInfo__MV__WorldObject__FaceFlags;
  if (pAVar1 == (Array *)0x0) {
    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray =
         (FaceFlags__Enum__Array *)0x0;
    pFStack3 = (FaceFlags__Enum__Array__Class *)0x0;
code_?:
    pAStack4 = (Array *)&TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
    func_?();
    return;
  }
  pFStack3 = TypeInfo__MV__WorldObject__FaceFlags;
  pAStack4 = pAVar1;
  pFVar5 = (FaceFlags__Enum__Array *)func_?();
  if (pFVar5 != (FaceFlags__Enum__Array *)0x0) {
    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray = pFVar5;
    pFVar2 = TypeInfo__MV__WorldObject__FaceFlags;
    pFStack3 = TypeInfo__MV__WorldObject__FaceFlags;
    pAStack4 = pAVar1;
    pFStack3 = (FaceFlags__Enum__Array__Class *)func_?();
    if (pFStack3 != (FaceFlags__Enum__Array__Class *)0x0) goto code_?;
  }
  pAStack4 = pAVar1;
  pFStack3 = pFVar2;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CubeBase(Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
               (CubeBase *this,Byte__Array *byteCorners,Byte__Array *faceMaterials,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 == (Byte__Array *)0x0) {
    func_?();
    pBStack_2 = in_ECX;
  }
  else {
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Byte;
    if (unaff_ESI == (Object *)0x0) {
      (this->fields).byteCorners = (Byte__Array *)0x0;
      iVar3 = 0;
code_?:
      ppBVar4 = &(this->fields).byteCorners;
      func_?(ppBVar4,iVar3);
      pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
      ppBVar5 = &(this->fields).faceMaterials;
      *ppBVar5 = pBVar1;
      method_00 = (MethodInfo *)ppBVar5;
      func_?(ppBVar5,pBVar1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      *ppBVar4 = byteCorners;
      func_?(ppBVar4,byteCorners);
      *ppBVar5 = faceMaterials;
      func_?(ppBVar5,faceMaterials);
      CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
      return;
    }
    pBVar1 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
    if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    unaff_EDI = (Byte__Array__Class *)&(this->fields).byteCorners;
    *(Byte__Array **)unaff_EDI = pBVar1;
    pBStack_2 = TypeInfo__System__Byte;
    iVar3 = func_?(unaff_ESI,TypeInfo__System__Byte);
    if (iVar3 != 0) goto code_?;
  }
  func_?(unaff_ESI,pBStack_2);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CubeBase(BytePacker, Byte) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_1
               (CubeBase *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  pBStack_2 = in_ECX;
  if (pBVar1 != (Byte__Array *)0x0) {
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__System__Byte;
    if (unaff_ESI == (Object *)0x0) {
      (this->fields).byteCorners = (Byte__Array *)0x0;
      iVar4 = 0;
    }
    else {
      pBVar1 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
      if (pBVar1 == (Byte__Array *)0x0) {
        func_?(unaff_ESI,pBVar3);
        goto code_?;
      }
      (this->fields).byteCorners = pBVar1;
      pBStack_2 = TypeInfo__System__Byte;
      iVar4 = func_?(unaff_ESI,TypeInfo__System__Byte);
      if (iVar4 == 0) goto code_?;
    }
    ppBVar5 = &(this->fields).byteCorners;
    func_?(ppBVar5,iVar4);
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    unaff_ESI = (Object *)&(this->fields).faceMaterials;
    *(Byte__Array **)unaff_ESI = pBVar1;
    func_?(unaff_ESI,pBVar1);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_6);
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      cRam_? = '\x01';
    }
    if ((byteFlags & 1) == 0) {
      if (bp != (BytePacker *)0x0) {
        pBVar1 = BytePacker::BytePacker_ReadBytes(bp,8,(MethodInfo *)0x0);
        *ppBVar5 = pBVar1;
        func_?(ppBVar5,pBVar1);
        goto code_?;
      }
    }
    else {
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
      *ppBVar5 = pBVar1;
      func_?(ppBVar5,pBVar1);
      if (bp != (BytePacker *)0x0) {
code_?:
        if ((byteFlags & 2) == 0) {
          pBVar1 = BytePacker::BytePacker_ReadBytes(bp,6,(MethodInfo *)0x0);
          *(Byte__Array **)unaff_ESI = pBVar1;
          func_?(unaff_ESI,pBVar1);
          CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
          return;
        }
        uVar7 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
        uVar8 = 0;
        while (pBVar1 = *(Byte__Array **)unaff_ESI, pBVar1 != (Byte__Array *)0x0) {
          if (pBVar1->max_length <= uVar8) goto code_?;
          pBVar1->vector[uVar8] = uVar7;
          uVar8 = uVar8 + 1;
          if (5 < (int)uVar8) {
            CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,pBStack_2);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CubeBase(Byte) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_2
               (CubeBase *this,uint8_t material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
  if (pBVar2 == (Byte__Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?(unaff_ESI,_material);
  }
  else {
    if ((((pBVar2->max_length == 0) || (pBVar2->vector[0] = material, pBVar2->max_length < 2)) ||
        (pBVar2->vector[1] = material, pBVar2->max_length < 3)) ||
       (((pBVar2->vector[2] = material, pBVar2->max_length < 4 ||
         (pBVar2->vector[3] = material, pBVar2->max_length < 5)) ||
        (pBVar2->vector[4] = material, pBVar2->max_length < 6)))) goto code_?;
    bVar3 = cRam_? == '\0';
    pBVar2->vector[5] = material;
    if (bVar3) {
      func_?(&TypeInfo__System__Byte);
      func_?(&TypeInfo__MV__WorldObject__CubeBase);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    pBVar4 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
    if (pBVar4 == (Byte__Array *)0x0) goto code_?;
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar4,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Byte;
    if (unaff_ESI == (Object *)0x0) {
      (this->fields).byteCorners = (Byte__Array *)0x0;
      iVar5 = 0;
code_?:
      ppBVar6 = &(this->fields).byteCorners;
      func_?(ppBVar6,iVar5);
      pBVar4 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
      ppBVar7 = &(this->fields).faceMaterials;
      *ppBVar7 = pBVar4;
      method_00 = (MethodInfo *)ppBVar7;
      func_?(ppBVar7,pBVar4);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      *ppBVar6 = pBVar1;
      func_?(ppBVar6,pBVar1);
      *ppBVar7 = pBVar2;
      func_?(ppBVar7,pBVar2);
      CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
      return;
    }
    pBVar4 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
    if (pBVar4 != (Byte__Array *)0x0) {
      unaff_EBX = (Byte__Array__Class *)&(this->fields).byteCorners;
      *(Byte__Array **)unaff_EBX = pBVar4;
      _material = TypeInfo__System__Byte;
      iVar5 = func_?(unaff_ESI,TypeInfo__System__Byte);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?(unaff_ESI,unaff_EBX);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3[] get_Corners() */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
          (CubeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  byteArray = (this->fields).byteCorners;
  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pVVar1 = CubeDataPacker::CubeDataPacker_ByteArrayToCorners(byteArray,(MethodInfo *)0x0);
  return pVVar1;
}


/* FaceFlags[] get_FaceFlagsArray() */

FaceFlags__Enum__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_FaceFlagsArray(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  return TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
}


/* Byte[] get_IdentityByteCorners() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityByteCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 == (Byte__Array *)0x0) {
    func_?();
  }
  else {
    unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                PlayableBehaviour_Clone((PlayableBehaviour *)pBVar1,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Byte;
    if (unaff_ESI == (Object *)0x0) {
      return (Byte__Array *)0x0;
    }
    pBVar1 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
    if (pBVar1 != (Byte__Array *)0x0) {
      return pBVar1;
    }
  }
  func_?(unaff_ESI,unaff_EDI);
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* Vector3[] get_IdentityCorners() */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  byteArray = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pVVar1 = CubeDataPacker::CubeDataPacker_ByteArrayToCorners(byteArray,(MethodInfo *)0x0);
  return pVVar1;
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
  if (b == (CubeBase *)0x0) {
    return 0;
  }
  pBVar1 = (a->fields).byteCorners;
  if ((pBVar1 != (Byte__Array *)0x0) &&
     (pBVar2 = (b->fields).byteCorners, pBVar2 != (Byte__Array *)0x0)) {
    if (pBVar1->max_length != pBVar2->max_length) {
      return 0;
    }
    pBVar3 = (a->fields).faceMaterials;
    if ((pBVar3 != (Byte__Array *)0x0) &&
       (pBVar4 = (b->fields).faceMaterials, pBVar4 != (Byte__Array *)0x0)) {
      if (pBVar3->max_length != pBVar4->max_length) {
        return 0;
      }
      for (uVar5 = 0; (int)uVar5 < (int)pBVar1->max_length; uVar5 = uVar5 + 1) {
        if ((pBVar1->max_length <= uVar5) || (pBVar2->max_length <= uVar5)) goto code_?;
        if (pBVar1->vector[uVar5] != pBVar2->vector[uVar5]) {
          return 0;
        }
      }
      uVar5 = 0;
      while( true ) {
        if ((int)pBVar3->max_length <= (int)uVar5) {
          return 1;
        }
        if ((pBVar3->max_length <= uVar5) || (pBVar4->max_length <= uVar5)) break;
        if (pBVar3->vector[uVar5] != pBVar4->vector[uVar5]) {
          return 0;
        }
        uVar5 = uVar5 + 1;
      }
code_?:
      func_?();
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean op_Inequality(CubeBase, CubeBase) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
               (CubeBase *a,CubeBase *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
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
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pBVar1 = CubeDataPacker::CubeDataPacker_CornersToByteArray(value,(MethodInfo *)0x0);
  ppBVar2 = &(this->fields).byteCorners;
  *ppBVar2 = pBVar1;
  func_?(ppBVar2,pBVar1);
  return;
}

