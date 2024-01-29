
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  uVar1 = (undefined2)unaff_EDI;
  uVar2 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (bytePacker == (BytePacker *)0x0) {
    uVar3 = func_?();
    bVar4 = (char)uVar3 + (char)((uint)uVar3 >> 8) * 'Z';
    pcVar5 = (char *)CONCAT22((short)((uint)uVar3 >> 0x10),(ushort)bVar4);
    piVar6 = (int *)CONCAT22(unaff_SI,uVar2);
    *pcVar5 = *pcVar5 + bVar4;
    *piVar6 = (int)(pcVar5 + *piVar6);
    *(byte *)piVar6 = (char)*piVar6 + bVar4;
    *piVar6 = (int)(pcVar5 + *piVar6);
    *piVar6 = (int)(pcVar5 + *piVar6);
    *piVar6 = *piVar6 + CONCAT31((int3)((uint)pcVar5 >> 8),
                                 bVar4 + *(char *)CONCAT22(extraout_var,uVar1) +
                                 *(char *)CONCAT22(extraout_var,uVar1));
    pcVar7 = (code *)swi(3);
    pRVar8 = (RuntimeEvent *)(*pcVar7)();
    return pRVar8;
  }
  uVar9 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
  uVar10 = uVar9;
  if (cRam_? == '\0') {
    func_?(0x5be4);
    func_?(0xa328);
    cRam_? = '\x01';
  }
  switch(uVar9) {
  case 1:
  case 2:
  case 5:
    uVar1 = SUB42(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent,0);
    uVar2 = (undefined2)
             ((uint)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent >> 0x10);
    pRVar8 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pRVar8,ExceptionArgument__Enum_obj,(MethodInfo *)CONCAT22(uVar2,uVar1));
    (pRVar8->fields)._RuntimeEventType_k__BackingField = uVar10;
    if (uVar10 == 1) {
      uVar10 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar8[1].klass = uVar10;
    }
    uVar11 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar12._0_2_ = 0;
    uVar12._2_2_ = 0;
    iVar13 = 0;
    IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar11,0,0,(MethodInfo *)0x0);
    (pRVar8->fields).position.x = (int16_t)uVar12;
    (pRVar8->fields).position.y = SUB42(uVar12,2);
    (pRVar8->fields).position.z = iVar13;
    return pRVar8;
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xf:
  case 0x10:
    uVar1 = SUB42(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent,0);
    uVar2 = (undefined2)((uint)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent >> 0x10);
    pRVar8 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pRVar8,ExceptionArgument__Enum_obj,(MethodInfo *)CONCAT22(uVar2,uVar1));
    (pRVar8->fields)._RuntimeEventType_k__BackingField = uVar10;
    uVar11 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar14 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar15 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar3._0_2_ = 0;
    uVar3._2_2_ = 0;
    iVar13 = 0;
    IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff0,(uint)uVar11,(uint)uVar14,(uint)uVar15,(MethodInfo *)0x0);
    (pRVar8->fields).position.x = (int16_t)uVar3;
    (pRVar8->fields).position.y = SUB42(uVar3,2);
    (pRVar8->fields).position.z = iVar13;
    return pRVar8;
  default:
    return (RuntimeEvent *)0x0;
  }
}


/* RuntimeEvent Create(RuntimeEventType, BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create_1
          (RuntimeEventType__Enum runtimeEventType,BytePacker *bytePacker,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  switch(runtimeEventType & 0xff) {
  case RuntimeEventType__Enum_FineGrainedSingleCubeAdd:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemove:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube:
    method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    *(undefined1 *)((int)&value[1].monitor + 2) = (undefined1)runtimeEventType;
    if ((undefined1)runtimeEventType == RuntimeEventType__Enum_FineGrainedSingleCubeAdd) {
      if (bytePacker == (BytePacker *)0x0) goto code_?;
      uVar1 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&value[2].klass = uVar1;
      runtimeEventType = (RuntimeEventType__Enum)value;
      goto code_?;
    }
    break;
  case RuntimeEventType__Enum_Bazooka:
  case RuntimeEventType__Enum_AvatarImpact25:
  case RuntimeEventType__Enum_VehicleImpact25:
  case RuntimeEventType__Enum_AvatarImpact50:
  case RuntimeEventType__Enum_AvatarImpact75:
  case RuntimeEventType__Enum_VehicleImpact50:
  case RuntimeEventType__Enum_VehicleImpact75:
  case RuntimeEventType__Enum_MeleeWeaponTerrainDestroy:
  case RuntimeEventType__Enum_ImpulseGunImpact:
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    *(undefined1 *)((int)&value[1].monitor + 2) = (undefined1)runtimeEventType;
    break;
  default:
    return (RuntimeEvent *)0x0;
  }
  runtimeEventType = (RuntimeEventType__Enum)value;
  if (bytePacker == (BytePacker *)0x0) {
code_?:
    pRVar2 = (RuntimeEvent *)func_?();
    *(char *)&value->klass =
         *(char *)&value->klass + (char)extraout_ECX +
         (*(BytePacker **)(extraout_ECX + -0x24) < bytePacker);
    return pRVar2;
  }
code_?:
  uVar3 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar4 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  IStack_6.x = 0;
  IStack_6.y = 0;
  IStack_6.z = 0;
  IntVector::IntVector__ctor_1(&IStack_6,(uint)uVar3,(uint)uVar4,(uint)uVar5,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = IStack_6._0_4_;
  *(int16_t *)
   (runtimeEventType + (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)
   ) = IStack_6.z;
  return (RuntimeEvent *)runtimeEventType;
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
  case RuntimeEventType__Enum_MeleeWeaponTerrainDestroy:
  case RuntimeEventType__Enum_ImpulseGunImpact:
    return RuntimeEventObjectType__Enum_Explosion;
  default:
    return RuntimeEventObjectType__Enum_Undefined;
  }
}


/* IntVector get_Position() */

IntVector MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_get_Position
                    (RuntimeEvent *this,MethodInfo *method)

{
  IVar1.z = (int16_t)method;
  IVar1._0_4_ = this;
  this->klass = (RuntimeEvent__Class *)method->invoker_method;
  *(undefined2 *)&this->monitor = *(undefined2 *)&method->name;
  return IVar1;
}


/* RuntimeEventType get_RuntimeEventType() */

RuntimeEventType__Enum
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_get_RuntimeEventType
          (RuntimeEvent *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),(this->fields)._RuntimeEventType_k__BackingField);
}

