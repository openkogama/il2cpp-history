
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  bVar1 = 0;
  if (bytePacker == (BytePacker *)0x0) {
    func_?();
    pbVar2 = (byte *)CONCAT22((short)((uint)extraout_EDX >> 0x10),CONCAT11(0x86,(char)extraout_EDX)
                              );
    LOCK();
    bVar3 = *pbVar2;
    bVar4 = (byte)((uint)unaff_EBX >> 8);
    bVar5 = *pbVar2 + bVar4;
    *pbVar2 = bVar5 + bVar1;
    UNLOCK();
    *(char *)((int)extraout_ECX + 0x10f087) =
         *(char *)((int)extraout_ECX + 0x10f087) + (char)((uint)extraout_ECX >> 8) +
         (CARRY1(bVar3,bVar4) || CARRY1(bVar5,bVar1));
    *(undefined1 *)extraout_ECX = *(undefined1 *)extraout_ECX;
    *extraout_ECX = *extraout_ECX;
    *extraout_ECX = *extraout_ECX;
    *(undefined4 *)pbVar2 = *(undefined4 *)pbVar2;
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
    uVar4 = func_?();
    bVar5 = *(byte *)&bytePacker->klass;
    *(byte *)&bytePacker->klass = *(char *)&bytePacker->klass + (byte)bytePacker;
    cVar6 = (char)((ulonglong)uVar4 >> 0x28);
    piVar7 = (int *)CONCAT31((int3)((ulonglong)uVar4 >> 8),cVar6);
    piVar8 = (int *)CONCAT22((short)((ulonglong)uVar4 >> 0x30),
                              CONCAT11((char)uVar4 + (char)((uint)bytePacker >> 8),
                                       (char)((ulonglong)uVar4 >> 0x20)));
    *(char *)piVar7 = (char)*piVar7 + cVar6 + CARRY1(bVar5,(byte)bytePacker);
    *(char *)extraout_ECX = (char)*extraout_ECX + cVar6;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar7);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar7);
    *piVar8 = (int)(*piVar8 + (int)piVar7);
    pcVar9 = (code *)swi(3);
    pRVar10 = (RuntimeEvent *)(*pcVar9)();
    return pRVar10;
  }
code_?:
  uVar11 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar12 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar13 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar14._0_2_ = 0;
  uVar14._2_2_ = 0;
  IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,(uint)uVar11,(uint)uVar12,(uint)uVar13,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = uVar14;
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

