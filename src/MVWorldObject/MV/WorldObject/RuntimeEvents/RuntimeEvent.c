
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
    func_?();
    cRam_? = '\x01';
  }
  uVar1 = (undefined1)runtimeEventType;
  switch(runtimeEventType & 0xff) {
  case RuntimeEventType__Enum_FineGrainedSingleCubeAdd:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemove:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube:
    iVar2 = 0;
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
    iVar2 = 1;
    break;
  default:
    iVar2 = -1;
  }
  if (iVar2 == 0) {
    method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pSVar3 = (ScaleAnimationBase *)func_?();
    puStackY_30 = &UNK_?;
    runtimeEventType = (RuntimeEventType__Enum)pSVar3;
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,in_stack_4);
    this = bytePacker;
    *(undefined1 *)((int)&(pSVar3->fields).state + 2) = uVar1;
    pBVar5 = this;
    if (uVar1 == RuntimeEventType__Enum_FineGrainedSingleCubeAdd) {
      if (bytePacker == (BytePacker *)0x0) goto code_?;
      uVar6 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)method_01);
      *(uint8_t *)&(pSVar3->fields).originalScale.x = uVar6;
    }
  }
  else {
    if (iVar2 != 1) {
      return (RuntimeEvent *)0x0;
    }
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
    pSVar3 = (ScaleAnimationBase *)func_?();
    runtimeEventType = (RuntimeEventType__Enum)pSVar3;
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              (pSVar3,0.0,(MethodInfo *)method_00);
    *(undefined1 *)((int)&(pSVar3->fields).state + 2) = uVar1;
    this = bytePacker;
    pBVar5 = (BytePacker *)0x0;
  }
  if (this != (BytePacker *)0x0) {
    BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
    func_?();
    *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = 0;
    *(undefined2 *)
     (runtimeEventType +
     (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)) = 0;
    return (RuntimeEvent *)runtimeEventType;
  }
code_?:
  uVar7 = func_?();
  piVar8 = (int *)((ulonglong)uVar7 >> 0x20);
  piVar9 = (int *)uVar7;
  bVar10 = CARRY4((uint)&stack0xfffffffc,extraout_ECX[-0x15bf2abc]);
  uVar11 = extraout_ECX[-0x15bf2abc];
  pbVar12 = (undefined1 *)((int)&pBVar5[-6].fields._buffer + 1) + (int)piVar9;
  bVar13 = *pbVar12;
  bVar14 = *pbVar12 + (byte)pBVar5;
  *pbVar12 = bVar14 + bVar10;
  *(char *)piVar9 =
       (char)*piVar9 + (char)uVar7 + (CARRY1(bVar13,(byte)pBVar5) || CARRY1(bVar14,bVar10));
  *(char *)extraout_ECX = (char)*extraout_ECX + (char)uVar7;
  *piVar9 = (int)(*piVar9 + (int)piVar9);
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar9);
  *extraout_ECX = (int)(*extraout_ECX + (int)piVar9);
  *piVar8 = (int)(*piVar8 + (int)piVar9);
  piVar9 = (int *)((int)aiStackY_79 + uVar11);
  *piVar9 = *piVar9 + (int)piVar8;
  in((short)((ulonglong)uVar7 >> 0x20));
  switch(*(undefined1 *)((int)&runtimeEventType + uVar11)) {
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

