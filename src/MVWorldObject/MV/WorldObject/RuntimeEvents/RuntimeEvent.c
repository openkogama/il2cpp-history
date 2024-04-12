
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker == (BytePacker *)0x0) {
    uVar1 = func_?();
    pcVar2 = (char *)((ulonglong)uVar1 >> 0x20);
    pcVar3 = (char *)((int)uVar1 + -0x69ef235c);
    cVar4 = (char)pcVar3;
    pcRam_? = pcVar3;
    *pcVar3 = *pcVar3 + cVar4;
    *extraout_ECX = (int)(pcVar3 + *extraout_ECX);
    *(char *)extraout_ECX = (char)*extraout_ECX + cVar4;
    *extraout_ECX = (int)(pcVar3 + *extraout_ECX);
    *extraout_ECX = (int)(pcVar3 + *extraout_ECX);
    *extraout_ECX = *extraout_ECX + CONCAT31((int3)((uint)pcVar3 >> 8),cVar4 + *pcVar2 + *pcVar2);
    pcVar5 = (code *)swi(3);
    pRVar6 = (RuntimeEvent *)(*pcVar5)();
    return pRVar6;
  }
  uVar7 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
  uVar8 = uVar7;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  switch(uVar7) {
  case 1:
  case 2:
  case 5:
    method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pRVar6 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pRVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pRVar6->fields)._RuntimeEventType_k__BackingField = uVar8;
    if (uVar8 == 1) {
      uVar8 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar6[1].klass = uVar8;
    }
    uVar9 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar10._0_2_ = 0;
    uVar10._2_2_ = 0;
    iVar11 = 0;
    IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar9,0,0,(MethodInfo *)0x0);
    (pRVar6->fields).position.x = (int16_t)uVar10;
    (pRVar6->fields).position.y = SUB42(uVar10,2);
    (pRVar6->fields).position.z = iVar11;
    return pRVar6;
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xf:
  case 0x10:
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
    pRVar6 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pRVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pRVar6->fields)._RuntimeEventType_k__BackingField = uVar8;
    uVar9 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar12 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar13 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar14._0_2_ = 0;
    uVar14._2_2_ = 0;
    iVar11 = 0;
    IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff0,(uint)uVar9,(uint)uVar12,(uint)uVar13,(MethodInfo *)0x0);
    (pRVar6->fields).position.x = (int16_t)uVar14;
    (pRVar6->fields).position.y = SUB42(uVar14,2);
    (pRVar6->fields).position.z = iVar11;
    return pRVar6;
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
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    *(undefined1 *)((int)&pOVar1[1].monitor + 2) = (undefined1)runtimeEventType;
    bVar2 = (undefined1)runtimeEventType == RuntimeEventType__Enum_FineGrainedSingleCubeAdd;
    runtimeEventType = (RuntimeEventType__Enum)pOVar1;
    if (bVar2) {
      if (bytePacker == (BytePacker *)0x0) goto code_?;
      uVar3 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pOVar1[2].klass = uVar3;
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
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    *(undefined1 *)((int)&pOVar1[1].monitor + 2) = (undefined1)runtimeEventType;
    runtimeEventType = (RuntimeEventType__Enum)pOVar1;
    break;
  default:
    return (RuntimeEvent *)0x0;
  }
  if (bytePacker == (BytePacker *)0x0) {
code_?:
    uVar4 = func_?();
    pcVar5 = (char *)((ulonglong)uVar4 >> 0x20);
    pcVar6 = (char *)uVar4;
    cVar7 = (char)uVar4;
    *pcVar6 = *pcVar6 + cVar7;
    *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
    *(char *)extraout_ECX = (char)*extraout_ECX + cVar7;
    *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
    *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
    *extraout_ECX =
         *extraout_ECX + CONCAT31((int3)((ulonglong)uVar4 >> 8),cVar7 + *pcVar5 + *pcVar5);
    pcVar8 = (code *)swi(3);
    pRVar9 = (RuntimeEvent *)(*pcVar8)();
    return pRVar9;
  }
code_?:
  uVar10 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar11 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar12 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  IStack_13.x = 0;
  IStack_13.y = 0;
  IStack_13.z = 0;
  IntVector::IntVector__ctor_1(&IStack_13,(uint)uVar10,(uint)uVar11,(uint)uVar12,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = IStack_13._0_4_;
  *(int16_t *)
   (runtimeEventType + (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)
   ) = IStack_13.z;
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

