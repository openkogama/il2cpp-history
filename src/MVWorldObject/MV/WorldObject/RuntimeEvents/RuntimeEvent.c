
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  cVar1 = '\0';
  if (bytePacker == (BytePacker *)0x0) {
    uVar2 = func_?();
    piVar3 = (int *)((ulonglong)uVar2 >> 0x20);
    piVar4 = (int *)uVar2;
    bVar5 = (byte)extraout_ECX;
    pbVar6 = (byte *)CONCAT22((short)(extraout_ECX >> 0x10),CONCAT11(0xd2,bVar5));
    *piVar4 = (int)ROUND(extraout_ST0);
    bVar7 = (bVar5 & 0x1f) % 9;
    uVar8 = CONCAT11(cVar1,(char)unaff_EBX);
    uVar8 = uVar8 >> bVar7 | uVar8 << 9 - bVar7;
    bVar9 = (bVar7 == 0) * cVar1 | (bVar7 != 0) * ((uVar8 & 0x100) != 0);
    bVar10 = (byte)((uint)unaff_EBX >> 8);
    bVar7 = *pbVar6 + bVar10;
    bVar11 = CARRY1(*pbVar6,bVar10) || CARRY1(bVar7,bVar9);
    *pbVar6 = bVar7 + bVar9;
    uVar12 = CONCAT14(bVar11,CONCAT31((int3)((uint)unaff_EBX >> 8),(char)uVar8));
    bVar13 = (extraout_ECX & 0x1f) == 0;
    *(char *)piVar4 =
         (char)*piVar4 + (char)uVar2 +
         (bVar13 * bVar11 |
         !bVar13 * ((((ulonglong)(uVar12 >> (bVar5 & 0x1f)) |
                    (ulonglong)uVar12 << 0x21 - (bVar5 & 0x1f)) & 0x100000000) != 0));
    *pbVar6 = *pbVar6 + (char)uVar2;
    *piVar4 = (int)(*piVar4 + (int)piVar4);
    *(char **)pbVar6 = (char *)(*(int *)pbVar6 + (int)piVar4);
    *(char **)pbVar6 = (char *)(*(int *)pbVar6 + (int)piVar4);
    *piVar3 = (int)(*piVar3 + (int)piVar4);
    pcVar14 = (code *)swi(3);
    pRVar15 = (RuntimeEvent *)(*pcVar14)();
    return pRVar15;
  }
  uVar16 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
  uVar17 = uVar16;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  switch(uVar16) {
  case 1:
  case 2:
  case 5:
    method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pRVar15 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pRVar15,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pRVar15->fields)._RuntimeEventType_k__BackingField = uVar17;
    if (uVar17 == 1) {
      uVar17 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar15[1].klass = uVar17;
    }
    uVar8 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar18._0_2_ = 0;
    uVar18._2_2_ = 0;
    iVar19 = 0;
    IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar8,0,0,(MethodInfo *)0x0);
    (pRVar15->fields).position.x = (int16_t)uVar18;
    (pRVar15->fields).position.y = SUB42(uVar18,2);
    (pRVar15->fields).position.z = iVar19;
    return pRVar15;
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
    pRVar15 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pRVar15,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pRVar15->fields)._RuntimeEventType_k__BackingField = uVar17;
    uVar8 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar20 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar21 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar22._0_2_ = 0;
    uVar22._2_2_ = 0;
    iVar19 = 0;
    IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff0,(uint)uVar8,(uint)uVar20,(uint)uVar21,(MethodInfo *)0x0);
    (pRVar15->fields).position.x = (int16_t)uVar22;
    (pRVar15->fields).position.y = SUB42(uVar22,2);
    (pRVar15->fields).position.z = iVar19;
    return pRVar15;
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
    bVar4 = 0;
    uVar5 = func_?();
    piVar6 = (int *)((ulonglong)uVar5 >> 0x20);
    piVar7 = (int *)uVar5;
    piVar8 = (int *)(((int)extraout_ECX - (int)piVar6) - (uint)bVar4);
    *piVar7 = (int)ROUND(extraout_ST0);
    out((short)((ulonglong)uVar5 >> 0x20),(char)uVar5);
    pcVar9 = (char *)(CONCAT31((int3)((uint)bytePacker >> 8),
                               (char)(CONCAT11(extraout_ECX < piVar6 ||
                                               (uint)((int)extraout_ECX - (int)piVar6) <
                                               (uint)bVar4,(char)bytePacker) >> 1)) + 0x10dbd1);
    *pcVar9 = *pcVar9 + (char)((uint)piVar8 >> 8) + (((uint)bytePacker & 1) != 0);
    *(char *)piVar8 = (char)*piVar8 + (char)uVar5;
    *piVar7 = *piVar7 + (int)piVar7;
    *piVar8 = *piVar8 + (int)piVar7;
    *piVar8 = *piVar8 + (int)piVar7;
    *piVar6 = *piVar6 + (int)piVar7;
    pcVar10 = (code *)swi(3);
    pRVar11 = (RuntimeEvent *)(*pcVar10)();
    return pRVar11;
  }
code_?:
  uVar12 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar13 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar14 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  IStack_15.x = 0;
  IStack_15.y = 0;
  IStack_15.z = 0;
  IntVector::IntVector__ctor_1(&IStack_15,(uint)uVar12,(uint)uVar13,(uint)uVar14,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = IStack_15._0_4_;
  *(int16_t *)
   (runtimeEventType + (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)
   ) = IStack_15.z;
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

