
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_Equals
               (CubeBase *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__MV__WorldObject__CubeBase->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar1) ||
       ((obj->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__MV__WorldObject__CubeBase)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pOVar3 = (Object *)0x0;
    if (bVar2) {
      pOVar3 = obj;
    }
    if (pOVar3 != (Object *)0x0) {
      if (pOVar3 == (Object *)0x0) {
        return 0;
      }
      pBVar4 = (this->fields).byteCorners;
      if ((pBVar4 != (Byte__Array *)0x0) && (pOVar3[1].monitor != (MonitorData *)0x0)) {
        if (pBVar4->max_length != *(il2cpp_array_size_t *)(pOVar3[1].monitor + 0xc)) {
          return 0;
        }
        pBVar5 = (this->fields).faceMaterials;
        if ((pBVar5 != (Byte__Array *)0x0) && (pOVar3[2].klass != (Object__Class *)0x0)) {
          if ((char *)pBVar5->max_length != ((pOVar3[2].klass)->_0).namespaze) {
            return 0;
          }
          iVar6 = 0;
          if (pBVar4 != (Byte__Array *)0x0) {
            while (iVar6 < (int)pBVar4->max_length) {
              if ((pBVar4 == (Byte__Array *)0x0) ||
                 (cVar7 = func_?(iVar6), pOVar3[1].monitor == (MonitorData *)0x0))
              goto code_?;
              cVar8 = func_?(iVar6);
              if (cVar7 != cVar8) {
                return 0;
              }
              pBVar4 = (this->fields).byteCorners;
              iVar6 = iVar6 + 1;
              if (pBVar4 == (Byte__Array *)0x0) goto code_?;
            }
            pBVar4 = (this->fields).faceMaterials;
            iVar6 = 0;
            if (pBVar4 != (Byte__Array *)0x0) goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
  return 0;
  while( true ) {
    cVar8 = func_?(iVar6);
    if (cVar7 != cVar8) {
      return 0;
    }
    pBVar4 = (this->fields).faceMaterials;
    iVar6 = iVar6 + 1;
    if (pBVar4 == (Byte__Array *)0x0) break;
code_?:
    if ((int)pBVar4->max_length <= iVar6) {
      return 1;
    }
    if ((pBVar4 == (Byte__Array *)0x0) ||
       (cVar7 = func_?(iVar6), pOVar3[2].klass == (Object__Class *)0x0)) break;
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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
    pBVar2 = (this->fields).faceMaterials;
    if ((pBVar2 != (Byte__Array *)0x0) &&
       (pBVar3 = (cube->fields).faceMaterials, pBVar3 != (Byte__Array *)0x0)) {
      if (pBVar2->max_length != pBVar3->max_length) {
        return 0;
      }
      iVar4 = 0;
      if (pBVar1 != (Byte__Array *)0x0) {
        while (iVar4 < (int)pBVar1->max_length) {
          if ((pBVar1 == (Byte__Array *)0x0) ||
             (cVar5 = func_?(iVar4), (cube->fields).byteCorners == (Byte__Array *)0x0))
          goto code_?;
          cVar6 = func_?(iVar4);
          if (cVar5 != cVar6) {
            return 0;
          }
          pBVar1 = (this->fields).byteCorners;
          iVar4 = iVar4 + 1;
          if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        }
        pBVar1 = (this->fields).faceMaterials;
        iVar4 = 0;
        if (pBVar1 != (Byte__Array *)0x0) goto code_?;
      }
    }
  }
  goto code_?;
  while( true ) {
    cVar6 = func_?(iVar4);
    if (cVar5 != cVar6) {
      return 0;
    }
    pBVar1 = (this->fields).faceMaterials;
    iVar4 = iVar4 + 1;
    if (pBVar1 == (Byte__Array *)0x0) break;
code_?:
    if ((int)pBVar1->max_length <= iVar4) {
      return 1;
    }
    if ((pBVar1 == (Byte__Array *)0x0) ||
       (cVar5 = func_?(iVar4), (cube->fields).faceMaterials == (Byte__Array *)0x0)) break;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube != (CubeBase *)0x0) {
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pMVar1 = (MethodInfo *)0x0;
    while (((cube->fields).byteCorners != (Byte__Array *)0x0 && (*corners != (Vector3__Array *)0x0))
          ) {
      if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      uVar2 = func_?(pMVar1,0);
      vector = (Vector3 *)&UNK_?;
      method_00 = pMVar1;
      key = (uint8_t *)func_?(pMVar1,uVar2);
      CubeDataPacker::CubeDataPacker_ByteToVector3_1(key,vector,method_00);
      pMVar1 = (MethodInfo *)((int)&pMVar1->methodPointer + 1);
      if (7 < (int)pMVar1) {
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GetFace(Vector3[] ByRef, Vector3[] ByRef, Face) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
               (Vector3__Array **corners,Vector3__Array **faceVertices,Face__Enum face,
               MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(0);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(0);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(1);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(1);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    uVar3 = 2;
    goto code_?;
  case Face__Enum_Bottom:
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(4);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(0);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(5);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(1);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(6);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(2);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    faceVertices = (Vector3__Array **)*faceVertices;
    if (((Vector3__Array *)faceVertices == (Vector3__Array *)0x0) ||
       (*corners == (Vector3__Array *)0x0)) goto code_?;
    uVar3 = 7;
    break;
  case Face__Enum_Front:
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(7);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(0);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(6);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(1);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(1);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(2);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    faceVertices = (Vector3__Array **)*faceVertices;
    if (((Vector3__Array *)faceVertices == (Vector3__Array *)0x0) ||
       (*corners == (Vector3__Array *)0x0)) goto code_?;
    uVar3 = 0;
    break;
  case Face__Enum_Back:
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(5);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(0);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(4);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(1);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(3);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(2);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    faceVertices = (Vector3__Array **)*faceVertices;
    if (((Vector3__Array *)faceVertices == (Vector3__Array *)0x0) ||
       (*corners == (Vector3__Array *)0x0)) goto code_?;
    uVar3 = 2;
    break;
  case Face__Enum_Left:
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(4);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(0);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(7);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(1);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    uVar3 = 0;
code_?:
    puVar1 = (undefined8 *)func_?(uVar3);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(2);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    faceVertices = (Vector3__Array **)*faceVertices;
    if (((Vector3__Array *)faceVertices == (Vector3__Array *)0x0) ||
       (*corners == (Vector3__Array *)0x0)) {
code_?:
      bVar4 = 0;
      iVar5 = func_?(0);
      pbVar6 = (byte *)(iVar5 + -0x7eefa5a8);
      bVar7 = (byte)((uint)iVar5 >> 8);
      bVar8 = CARRY1(*pbVar6,bVar7) || CARRY1(*pbVar6 + bVar7,bVar4);
      *pbVar6 = *pbVar6 + bVar7 + bVar4;
      pbVar6 = (byte *)(unaff_EDI + 0x5a);
      bVar9 = CARRY1(*pbVar6,bVar7) || CARRY1(*pbVar6 + bVar7,bVar8);
      *pbVar6 = *pbVar6 + bVar7 + bVar8;
      pbVar6 = (byte *)((int)&((Vector3__Array *)faceVertices)->vector[6].x + 3);
      bVar4 = *pbVar6;
      bVar10 = *pbVar6 + (byte)iVar5;
      *pbVar6 = bVar10 + bVar9;
      pcVar11 = (char *)((int)&uStack_2 + (int)faceVertices * 2);
      *pcVar11 = *pcVar11 + bVar7 + (CARRY1(bVar4,(byte)iVar5) || CARRY1(bVar10,bVar9));
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar3 = 3;
    break;
  case Face__Enum_Right:
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(6);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(0);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(5);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(1);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    if ((*faceVertices == (Vector3__Array *)0x0) || (*corners == (Vector3__Array *)0x0))
    goto code_?;
    puVar1 = (undefined8 *)func_?(2);
    uStack_2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)func_?(2);
    *puVar1 = uStack_2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    faceVertices = (Vector3__Array **)*faceVertices;
    if (((Vector3__Array *)faceVertices == (Vector3__Array *)0x0) ||
       (*corners == (Vector3__Array *)0x0)) goto code_?;
    uVar3 = 1;
    break;
  default:
    goto code_?;
  }
  puVar1 = (undefined8 *)func_?(uVar3);
  uStack_2 = *puVar1;
  uVar3 = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)func_?(3);
  *puVar1 = uStack_2;
  *(undefined4 *)(puVar1 + 1) = uVar3;
code_?:
  return;
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
  func_?(0);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Byte GetMaterial(CubeBase, Face) */

uint8_t MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                  (CubeBase *cube,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (cube != (CubeBase *)0x0) {
    pBVar1 = (cube->fields).faceMaterials;
    if (pBVar1 != (Byte__Array *)0x0) {
      if (face < pBVar1->max_length) {
        return pBVar1->vector[face];
      }
      uVar2 = func_?(0,0);
      func_?(uVar2);
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  return 0;
}


/* Void SetCubeFlags(CubeBase) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_SetCubeFlags
               (CubeBase *cube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cube == (CubeBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    (cube->fields).unIndentedSides = 0;
    iVar2 = func_?(TypeInfo__System__Boolean,8);
    iStack_3 = 0;
    uVar4 = 0;
    do {
      pBVar5 = (cube->fields).byteCorners;
      if (pBVar5 == (Byte__Array *)0x0) goto code_?;
      if (pBVar5->max_length <= uVar4) goto code_?;
      uVar6 = pBVar5->vector[uVar4];
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners ==
          (Byte__Array *)0x0) goto code_?;
      uVar7 = func_?(uVar4);
      if (iVar2 == 0) goto code_?;
      func_?(uVar4,uVar6 != uVar7);
      cVar8 = func_?(uVar4);
      if (cVar8 != '\0') {
        iStack_3 = iStack_3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
    if (iStack_3 == 0) {
      (cube->fields).unIndentedSides = 0x3f;
      return;
    }
    if (4 < iStack_3) {
      (cube->fields).unIndentedSides = 0;
      return;
    }
    if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
    if (*(char *)(iVar2 + 0x10) == '\0') {
      cVar8 = func_?(1);
      if (cVar8 == '\0') {
        cVar8 = func_?(2);
        if (cVar8 == '\0') {
          cVar8 = func_?(3);
          if (cVar8 == '\0') {
            (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 1;
          }
        }
      }
    }
    if (*(uint *)(iVar2 + 0xc) < 5) goto code_?;
    if (*(char *)(iVar2 + 0x14) == '\0') {
      cVar8 = func_?(5);
      if (cVar8 == '\0') {
        cVar8 = func_?(6);
        if (cVar8 == '\0') {
          cVar8 = func_?(7);
          if (cVar8 == '\0') {
            (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 2;
          }
        }
      }
    }
    if (*(uint *)(iVar2 + 0xc) < 3) goto code_?;
    if (*(char *)(iVar2 + 0x12) == '\0') {
      cVar8 = func_?(3);
      if (cVar8 == '\0') {
        cVar8 = func_?(4);
        if (cVar8 == '\0') {
          cVar8 = func_?(5);
          if (cVar8 == '\0') {
            (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 8;
          }
        }
      }
    }
    if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
    if (*(char *)(iVar2 + 0x10) == '\0') {
      cVar8 = func_?(1);
      if (cVar8 == '\0') {
        cVar8 = func_?(6);
        if (cVar8 == '\0') {
          cVar8 = func_?(7);
          if (cVar8 == '\0') {
            (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 4;
          }
        }
      }
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(char *)(iVar2 + 0x10) == '\0') {
        cVar8 = func_?(3);
        if (cVar8 == '\0') {
          cVar8 = func_?(4);
          if (cVar8 == '\0') {
            cVar8 = func_?(7);
            if (cVar8 == '\0') {
              (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 0x10;
            }
          }
        }
      }
      if (1 < *(uint *)(iVar2 + 0xc)) {
        if (*(char *)(iVar2 + 0x11) == '\0') {
          cVar8 = func_?(2);
          if (cVar8 == '\0') {
            cVar8 = func_?(5);
            if (cVar8 == '\0') {
              cVar8 = func_?(6);
              if (cVar8 == '\0') {
                (cube->fields).unIndentedSides = (cube->fields).unIndentedSides | 0x20;
              }
            }
          }
        }
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CubeBase() */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  array = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,___method0x60003e5_1_Field,(MethodInfo *)0x0);
  TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners = array;
  handle = TypeRef__MV__WorldObject__FaceFlags;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar1 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  pFVar2 = TypeInfo__MV__WorldObject__FaceFlags;
  if (pAVar1 == (Array *)0x0) {
    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray =
         (FaceFlags__Enum__Array *)0x0;
    return;
  }
  pFStack3 = TypeInfo__MV__WorldObject__FaceFlags;
  pAStack4 = pAVar1;
  pFVar5 = (FaceFlags__Enum__Array *)func_?();
  if (pFVar5 != (FaceFlags__Enum__Array *)0x0) {
    TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray = pFVar5;
    return;
  }
  pFStack3 = pFVar2;
  pAStack4 = pAVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 != (Byte__Array *)0x0) {
    unaff_ESI = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar1,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)0x0;
    if (unaff_ESI != (Object *)0x0) {
      pBVar1 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    }
    (this->fields).byteCorners = pBVar1;
    method_00 = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    (this->fields).faceMaterials = pBVar1;
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
    (this->fields).byteCorners = byteCorners;
    (this->fields).faceMaterials = faceMaterials;
    CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CubeBase(BytePacker, Byte) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_1
               (CubeBase *this,BytePacker *bp,uint8_t byteFlags,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 != (Byte__Array *)0x0) {
    pCVar2 = (CubeBase *)mscorlib.dll::System::Array::Array_Clone((Array *)pBVar1,(MethodInfo *)0x0)
    ;
    unaff_EBX = TypeInfo__System__Byte;
    pBVar1 = (Byte__Array *)0x0;
    if (pCVar2 != (CubeBase *)0x0) {
      pBVar1 = (Byte__Array *)func_?(pCVar2,TypeInfo__System__Byte);
      if (pBVar1 == (Byte__Array *)0x0) goto code_?;
    }
    (this->fields).byteCorners = pBVar1;
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
    (this->fields).faceMaterials = pBVar1;
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this,0.0,in_stack_3);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    unaff_EBX = (Byte__Array__Class *)(uint)byteFlags;
    unaff_ESI = this;
    if ((byteFlags & 1) == 0) {
      if (bp == (BytePacker *)0x0) goto code_?;
      pBVar1 = BytePacker::BytePacker_ReadBytes(bp,8,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
    }
    unaff_EBX = (Byte__Array__Class *)(byteFlags & 0xffffff02);
    (this->fields).byteCorners = pBVar1;
    if (bp != (BytePacker *)0x0) {
      if ((char)unaff_EBX == '\0') {
        pBVar1 = BytePacker::BytePacker_ReadBytes(bp,6,(MethodInfo *)0x0);
        (this->fields).faceMaterials = pBVar1;
        CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
        return;
      }
      uVar4 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      uVar5 = 0;
      while (pBVar1 = (this->fields).faceMaterials, pBVar1 != (Byte__Array *)0x0) {
        if (pBVar1->max_length <= uVar5) goto code_?;
        pBVar1->vector[uVar5] = uVar4;
        uVar5 = uVar5 + 1;
        if (5 < (int)uVar5) {
          CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  this = unaff_ESI;
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pCVar2 = this;
code_?:
  func_?(pCVar2,unaff_EBX);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CubeBase(Byte) */

void MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_2
               (CubeBase *this,uint8_t material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
  if (pBVar2 == (Byte__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pBVar2->max_length == 0) goto code_?;
    pBVar2->vector[0] = material;
    if (pBVar2->max_length < 2) goto code_?;
    pBVar2->vector[1] = material;
    if (pBVar2->max_length < 3) goto code_?;
    pBVar2->vector[2] = material;
    if (pBVar2->max_length < 4) goto code_?;
    pBVar2->vector[3] = material;
    if (pBVar2->max_length < 5) goto code_?;
    pBVar2->vector[4] = material;
    if (5 < pBVar2->max_length) {
      bVar4 = cRam_? == '\0';
      pBVar2->vector[5] = material;
      if (bVar4) {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      pBVar5 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
      if (pBVar5 != (Byte__Array *)0x0) {
        unaff_ESI = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar5,(MethodInfo *)0x0);
        unaff_EBX = TypeInfo__System__Byte;
        pBVar5 = (Byte__Array *)0x0;
        if (unaff_ESI == (Object *)0x0) {
code_?:
          (this->fields).byteCorners = pBVar5;
          method_00 = TypeInfo__System__Byte;
          pBVar5 = (Byte__Array *)func_?(TypeInfo__System__Byte,6);
          (this->fields).faceMaterials = pBVar5;
          Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                    ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
          (this->fields).byteCorners = pBVar1;
          (this->fields).faceMaterials = pBVar2;
          CubeBase_SetCubeFlags(this,(MethodInfo *)0x0);
          return;
        }
        pBVar5 = (Byte__Array *)func_?(unaff_ESI,TypeInfo__System__Byte);
        if (pBVar5 != (Byte__Array *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  func_?(unaff_ESI,unaff_EBX);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vector3[] get_Corners() */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
          (CubeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  byteArray = (this->fields).byteCorners;
  if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  return TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
}


/* Byte[] get_IdentityByteCorners() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityByteCorners(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (pBVar1 == (Byte__Array *)0x0) {
    func_?(0);
  }
  else {
    unaff_ESI = mscorlib.dll::System::Array::Array_Clone((Array *)pBVar1,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  byteArray = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
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
    pBVar2 = (a->fields).faceMaterials;
    if ((pBVar2 != (Byte__Array *)0x0) &&
       (pBVar3 = (b->fields).faceMaterials, pBVar3 != (Byte__Array *)0x0)) {
      if (pBVar2->max_length != pBVar3->max_length) {
        return 0;
      }
      iVar4 = 0;
      if (pBVar1 != (Byte__Array *)0x0) {
        while (iVar4 < (int)pBVar1->max_length) {
          if ((pBVar1 == (Byte__Array *)0x0) ||
             (cVar5 = func_?(iVar4), (b->fields).byteCorners == (Byte__Array *)0x0))
          goto code_?;
          cVar6 = func_?(iVar4);
          if (cVar5 != cVar6) {
            return 0;
          }
          pBVar1 = (a->fields).byteCorners;
          iVar4 = iVar4 + 1;
          if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        }
        pBVar1 = (a->fields).faceMaterials;
        iVar4 = 0;
        if (pBVar1 != (Byte__Array *)0x0) goto code_?;
      }
    }
  }
  goto code_?;
  while( true ) {
    cVar6 = func_?(iVar4);
    if (cVar5 != cVar6) {
      return 0;
    }
    pBVar1 = (a->fields).faceMaterials;
    iVar4 = iVar4 + 1;
    if (pBVar1 == (Byte__Array *)0x0) break;
code_?:
    if ((int)pBVar1->max_length <= iVar4) {
      return 1;
    }
    if ((pBVar1 == (Byte__Array *)0x0) ||
       (cVar5 = func_?(iVar4), (b->fields).faceMaterials == (Byte__Array *)0x0)) break;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean op_Inequality(CubeBase, CubeBase) */

bool MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
               (CubeBase *a,CubeBase *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  uVar2 = 0;
  pVVar3 = value->vector;
  while (value != (Vector3__Array *)0x0) {
    if (value->max_length <= uVar2) goto code_?;
    fVar4 = pVVar3->z;
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    corner.z = fVar4;
    corner.x = (float)(int)uVar5;
    corner.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    uVar6 = CubeDataPacker::CubeDataPacker_Vector3ToByte(corner,(MethodInfo *)0x0);
    if (pBVar1 == (Byte__Array *)0x0) break;
    func_?(uVar2,uVar6);
    uVar2 = uVar2 + 1;
    pVVar3 = pVVar3 + 1;
    if (7 < (int)uVar2) {
      (this->fields).byteCorners = pBVar1;
      return;
    }
  }
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

