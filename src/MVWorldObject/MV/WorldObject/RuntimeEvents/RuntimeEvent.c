
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  bVar1 = 0;
  if (bytePacker == (BytePacker *)0x0) {
    uVar2 = func_?();
    pbVar3 = (byte *)CONCAT22((short)((ulonglong)uVar2 >> 0x30),
                               CONCAT11(0x14,(char)((ulonglong)uVar2 >> 0x20)));
    LOCK();
    bVar4 = *pbVar3;
    bVar5 = (byte)((uint)unaff_EBX >> 8);
    bVar6 = *pbVar3 + bVar5;
    *pbVar3 = bVar6 + bVar1;
    UNLOCK();
    uVar7 = (uint)(CARRY1(bVar4,bVar5) || CARRY1(bVar6,bVar1));
    uVar8 = (uint)uVar2 + 0x15a910f0;
    piVar9 = (int *)(uVar8 + uVar7);
    LOCK();
    *(char *)piVar9 =
         (char)*piVar9 + (char)piVar9 + (0xea56ef0f < (uint)uVar2 || CARRY4(uVar8,uVar7));
    UNLOCK();
    *(char *)extraout_ECX = (char)*extraout_ECX + (char)piVar9;
    *piVar9 = (int)(*piVar9 + (int)piVar9);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar9);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar9);
    *(char **)pbVar3 = (char *)(*(int *)pbVar3 + (int)piVar9);
    pcVar10 = (code *)swi(3);
    pRVar11 = (RuntimeEvent *)(*pcVar10)();
    return pRVar11;
  }
  uVar12 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
  uVar13 = uVar12;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  switch(uVar12) {
  case 1:
  case 2:
  case 5:
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pRVar11 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pRVar11,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pRVar11->fields)._RuntimeEventType_k__BackingField = uVar13;
    if (uVar13 == 1) {
      uVar13 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar11[1].klass = uVar13;
    }
    uVar14 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar15._0_2_ = 0;
    uVar15._2_2_ = 0;
    iVar16 = 0;
    IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar14,0,0,(MethodInfo *)0x0);
    (pRVar11->fields).position.x = (int16_t)uVar15;
    (pRVar11->fields).position.y = SUB42(uVar15,2);
    (pRVar11->fields).position.z = iVar16;
    return pRVar11;
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
    pRVar11 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pRVar11,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pRVar11->fields)._RuntimeEventType_k__BackingField = uVar13;
    uVar14 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar17 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar18 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar19._0_2_ = 0;
    uVar19._2_2_ = 0;
    iVar16 = 0;
    IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff0,(uint)uVar14,(uint)uVar17,(uint)uVar18,(MethodInfo *)0x0)
    ;
    (pRVar11->fields).position.x = (int16_t)uVar19;
    (pRVar11->fields).position.y = SUB42(uVar19,2);
    (pRVar11->fields).position.z = iVar16;
    return pRVar11;
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
    bVar4 = 0;
    uVar5 = func_?();
    piVar6 = (int *)((ulonglong)uVar5 >> 0x20);
    uVar7 = uStack_8 + (uint)uVar5;
    bVar2 = CARRY4(uStack_8,(uint)uVar5) || CARRY4(uVar7,(uint)bVar4);
    uVar7 = uVar7 + bVar4;
    bVar9 = (byte)((uint)bytePacker >> 8);
    bVar4 = (byte)uVar5 + bVar9;
    uVar10 = (undefined3)((ulonglong)uVar5 >> 8);
    bVar11 = bVar4 + bVar2;
    uVar12 = CONCAT31(uVar10,bVar11);
    bVar2 = CARRY4(uVar7,uVar12) ||
             CARRY4(uVar7 + uVar12,(uint)(CARRY1((byte)uVar5,bVar9) || CARRY1(bVar4,bVar2)));
    bVar4 = *(char *)&bytePacker->klass + (byte)bytePacker;
    bVar13 = CARRY1(*(byte *)&bytePacker->klass,(byte)bytePacker) || CARRY1(bVar4,bVar2);
    *(byte *)&bytePacker->klass = bVar4 + bVar2;
    cVar14 = (bVar11 - 0x10) + bVar13;
    piVar15 = (int *)CONCAT31(uVar10,cVar14);
    *(char *)piVar15 = (char)*piVar15 + cVar14 + (0xf < bVar11 || CARRY1(bVar11 - 0x10,bVar13));
    *(char *)extraout_ECX = (char)*extraout_ECX + cVar14;
    *piVar15 = (int)(*piVar15 + (int)piVar15);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar15);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar15);
    *piVar6 = (int)(*piVar6 + (int)piVar15);
    pcVar16 = (code *)swi(3);
    pRVar17 = (RuntimeEvent *)(*pcVar16)();
    return pRVar17;
  }
code_?:
  uVar18 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar19 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar20 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar21._0_2_ = 0;
  uVar21._2_2_ = 0;
  IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,(uint)uVar18,(uint)uVar19,(uint)uVar20,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = uVar21;
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

