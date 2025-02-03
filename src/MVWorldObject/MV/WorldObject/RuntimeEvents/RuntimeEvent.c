
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker == (BytePacker *)0x0) {
    uVar1 = func_?();
    piVar2 = (int *)uVar1;
    piVar3 = (int *)CONCAT31((int3)((ulonglong)uVar1 >> 0x28),
                              (char)((ulonglong)uVar1 >> 0x20) + (char)((uint)extraout_ECX >> 8));
    pbVar4 = (byte *)((int)extraout_ECX + -0x7b);
    bVar5 = *pbVar4;
    *pbVar4 = *pbVar4 + unaff_BL;
    LOCK();
    *(char *)piVar2 = (char)*piVar2 + (char)uVar1 + CARRY1(bVar5,unaff_BL);
    UNLOCK();
    *(char *)extraout_ECX = (char)*extraout_ECX + (char)uVar1;
    *piVar2 = (int)(*piVar2 + (int)piVar2);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar2);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar2);
    *piVar3 = (int)(*piVar3 + (int)piVar2);
    pcVar6 = (code *)swi(3);
    pRVar7 = (RuntimeEvent *)(*pcVar6)();
    return pRVar7;
  }
  uVar8 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
  uVar9 = uVar8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  switch(uVar8) {
  case 1:
  case 2:
  case 5:
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pRVar7 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pRVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pRVar7->fields)._RuntimeEventType_k__BackingField = uVar9;
    if (uVar9 == 1) {
      uVar9 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar7[1].klass = uVar9;
    }
    uVar10 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar11._0_2_ = 0;
    uVar11._2_2_ = 0;
    iVar12 = 0;
    IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar10,0,0,(MethodInfo *)0x0);
    (pRVar7->fields).position.x = (int16_t)uVar11;
    (pRVar7->fields).position.y = SUB42(uVar11,2);
    (pRVar7->fields).position.z = iVar12;
    return pRVar7;
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xf:
  case 0x10:
    method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
    pRVar7 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pRVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pRVar7->fields)._RuntimeEventType_k__BackingField = uVar9;
    uVar10 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar13 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar14 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar15._0_2_ = 0;
    uVar15._2_2_ = 0;
    iVar12 = 0;
    IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff0,(uint)uVar10,(uint)uVar13,(uint)uVar14,(MethodInfo *)0x0);
    (pRVar7->fields).position.x = (int16_t)uVar15;
    (pRVar7->fields).position.y = SUB42(uVar15,2);
    (pRVar7->fields).position.z = iVar12;
    return pRVar7;
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
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
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
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    *(undefined1 *)((int)&pOVar1[1].monitor + 2) = (undefined1)runtimeEventType;
    runtimeEventType = (RuntimeEventType__Enum)pOVar1;
    break;
  default:
    return (RuntimeEvent *)0x0;
  }
  if (bytePacker == (BytePacker *)0x0) {
code_?:
    func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_?:
  uVar4 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar7._0_2_ = 0;
  uVar7._2_2_ = 0;
  IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,(uint)uVar4,(uint)uVar5,(uint)uVar6,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = uVar7;
  *(undefined2 *)
   (runtimeEventType + (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)
   ) = 0;
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

