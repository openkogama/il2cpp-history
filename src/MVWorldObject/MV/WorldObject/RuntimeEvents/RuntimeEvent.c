
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  bytePacker_00 = bytePacker;
  if (bytePacker != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
    bytePacker = (BytePacker *)CONCAT31(bytePacker._1_3_,uVar1);
    pRVar2 = RuntimeEvent_Create_1
                       ((RuntimeEventType__Enum)bytePacker,bytePacker_00,(MethodInfo *)0x0);
    return pRVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pRVar2 = (RuntimeEvent *)(*pcVar3)();
  return pRVar2;
}


/* RuntimeEvent Create(RuntimeEventType, BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create_1
          (RuntimeEventType__Enum runtimeEventType,BytePacker *bytePacker,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(runtimeEventType & 0xff) {
  case RuntimeEventType__Enum_FineGrainedSingleCubeAdd:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemove:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube:
    iVar1 = 0;
    break;
  case RuntimeEventType__Enum_Bazooka:
  case RuntimeEventType__Enum_AvatarImpact25:
  case RuntimeEventType__Enum_VehicleImpact25:
  case RuntimeEventType__Enum_AvatarImpact50:
  case RuntimeEventType__Enum_AvatarImpact75:
  case RuntimeEventType__Enum_VehicleImpact50:
  case RuntimeEventType__Enum_VehicleImpact75:
  case RuntimeEventType__Enum_SwordTerrainDestroy:
  case RuntimeEventType__Enum_ImpulseGunImpact:
    iVar1 = 1;
    break;
  default:
    iVar1 = -1;
  }
  if (iVar1 == 0) {
    method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    this = (ScaleAnimationBase *)func_?();
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,in_stack_2);
    *(undefined1 *)((int)&(this->fields).state + 2) = (undefined1)runtimeEventType;
    if ((undefined1)runtimeEventType == RuntimeEventType__Enum_FineGrainedSingleCubeAdd) {
      if (bytePacker == (BytePacker *)0x0) goto code_?;
      uVar3 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)method_01);
      *(uint8_t *)&(this->fields).originalScale.x = uVar3;
    }
  }
  else {
    if (iVar1 != 1) {
      return (RuntimeEvent *)0x0;
    }
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
    this = (ScaleAnimationBase *)func_?();
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              (this,0.0,(MethodInfo *)method_00);
    *(undefined1 *)((int)&(this->fields).state + 2) = (undefined1)runtimeEventType;
  }
  if (bytePacker != (BytePacker *)0x0) {
    iVar4 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    MStack_7._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0x0;
    uStack_8 = 0;
    func_?(&MStack_7,iVar4,iVar5,iVar6,0);
    (this->fields)._._._._.m_CachedPtr = (void *)MStack_7._._._.m_CachedPtr;
    *(undefined2 *)&(this->fields).state = uStack_8;
    return (RuntimeEvent *)this;
  }
code_?:
  uVar9 = func_?(0);
  pcVar10 = (char *)((ulonglong)uVar9 >> 0x20);
  iVar1 = (int)uVar9;
  *(uint *)(unaff_EDI + -0x58) = *(uint *)(unaff_EDI + -0x58) | 0xa84f8510;
  pcVar11 = (char *)(unaff_EDI + 0x10a8 + (int)extraout_ECX * 2);
  *pcVar11 = *pcVar11 + (char)extraout_ECX;
  *extraout_ECX = *extraout_ECX + iVar1;
  *(char *)extraout_ECX = (char)*extraout_ECX + (char)uVar9;
  *extraout_ECX = *extraout_ECX + iVar1;
  *extraout_ECX = *extraout_ECX + iVar1;
  *extraout_ECX =
       *extraout_ECX + CONCAT31((int3)((ulonglong)uVar9 >> 8),(char)uVar9 + *pcVar10 + *pcVar10);
  switch(unaff_EBX & 0xff) {
  case 1:
  case 2:
  case 5:
    return (RuntimeEvent *)0x1;
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xf:
  case 0x10:
    return (RuntimeEvent *)0x2;
  default:
    return (RuntimeEvent *)0x0;
  }
}


/* RuntimeEventObjectType GetRuntimeEventObjectType(RuntimeEventType) */

RuntimeEventObjectType__Enum
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
RuntimeEvent_GetRuntimeEventObjectType(RuntimeEventType__Enum runtimeEventType,MethodInfo *method)

{
  switch(runtimeEventType & 0xff) {
  case RuntimeEventType__Enum_FineGrainedSingleCubeAdd:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemove:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube:
    return RuntimeEventObjectType__Enum_SingleCube;
  case RuntimeEventType__Enum_Bazooka:
  case RuntimeEventType__Enum_AvatarImpact25:
  case RuntimeEventType__Enum_VehicleImpact25:
  case RuntimeEventType__Enum_AvatarImpact50:
  case RuntimeEventType__Enum_AvatarImpact75:
  case RuntimeEventType__Enum_VehicleImpact50:
  case RuntimeEventType__Enum_VehicleImpact75:
  case RuntimeEventType__Enum_SwordTerrainDestroy:
  case RuntimeEventType__Enum_ImpulseGunImpact:
    return RuntimeEventObjectType__Enum_Explosion;
  default:
    return RuntimeEventObjectType__Enum_Undefined;
  }
}


/* RuntimeEventType get_RuntimeEventType() */

RuntimeEventType__Enum
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_get_RuntimeEventType
          (RuntimeEvent *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),(this->fields)._RuntimeEventType_k__BackingField);
}

