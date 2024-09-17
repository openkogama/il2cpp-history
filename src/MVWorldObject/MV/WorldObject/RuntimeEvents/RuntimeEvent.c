
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker == (BytePacker *)0x0) {
    do {
      uVar1 = func_?();
      piVar2 = (int *)((ulonglong)uVar1 >> 0x20);
      piVar3 = (int *)uVar1;
      pbVar4 = (byte *)((int)piVar2 + 0x910efdf);
      bVar5 = *pbVar4;
      bVar6 = *pbVar4;
      *pbVar4 = bVar6 + unaff_BL + (extraout_ST0 < in_ST7);
      piVar7 = (int *)(extraout_ECX + -1);
    } while (piVar7 != (int *)0x0 && *pbVar4 != 0);
    *(char *)piVar3 =
         (char)*piVar3 + (char)uVar1 +
         (CARRY1(bVar5,unaff_BL) || CARRY1(bVar6 + unaff_BL,extraout_ST0 < in_ST7));
    *(char *)piVar7 = *(char *)piVar7 + (char)uVar1;
    *piVar3 = (int)(*piVar3 + (int)piVar3);
    *piVar7 = (int)(*piVar7 + (int)piVar3);
    *piVar7 = (int)(*piVar7 + (int)piVar3);
    *piVar2 = (int)(*piVar2 + (int)piVar3);
    pcVar8 = (code *)swi(3);
    pRVar9 = (RuntimeEvent *)(*pcVar8)();
    return pRVar9;
  }
  uVar10 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
  uVar11 = uVar10;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  switch(uVar10) {
  case 1:
  case 2:
  case 5:
    method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pRVar9 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pRVar9,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pRVar9->fields)._RuntimeEventType_k__BackingField = uVar11;
    if (uVar11 == 1) {
      uVar11 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar9[1].klass = uVar11;
    }
    uVar12 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar13._0_2_ = 0;
    uVar13._2_2_ = 0;
    iVar14 = 0;
    IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar12,0,0,(MethodInfo *)0x0);
    (pRVar9->fields).position.x = (int16_t)uVar13;
    (pRVar9->fields).position.y = SUB42(uVar13,2);
    (pRVar9->fields).position.z = iVar14;
    return pRVar9;
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
    pRVar9 = (RuntimeEvent *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pRVar9,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pRVar9->fields)._RuntimeEventType_k__BackingField = uVar11;
    uVar12 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar15 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar16 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar17._0_2_ = 0;
    uVar17._2_2_ = 0;
    iVar14 = 0;
    IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff0,(uint)uVar12,(uint)uVar15,(uint)uVar16,(MethodInfo *)0x0);
    (pRVar9->fields).position.x = (int16_t)uVar17;
    (pRVar9->fields).position.y = SUB42(uVar17,2);
    (pRVar9->fields).position.z = iVar14;
    return pRVar9;
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
    piVar7 = (int *)uVar5;
    pbVar8 = (byte *)((int)&bytePacker[-3].fields._position + 2);
    bVar9 = *pbVar8;
    bVar10 = (byte)((uint)bytePacker >> 8);
    bVar11 = *pbVar8 + bVar10;
    *pbVar8 = bVar11 + bVar4;
    out((short)((ulonglong)uVar5 >> 0x20),piVar7);
    *(char *)piVar7 =
         (char)*piVar7 + (char)uVar5 + (CARRY1(bVar9,bVar10) || CARRY1(bVar11,bVar4));
    *(char *)extraout_ECX = (char)*extraout_ECX + (char)uVar5;
    *piVar7 = (int)(*piVar7 + (int)piVar7);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar7);
    *extraout_ECX = (int)(*extraout_ECX + (int)piVar7);
    *piVar6 = (int)(*piVar6 + (int)piVar7);
    pcVar12 = (code *)swi(3);
    pRVar13 = (RuntimeEvent *)(*pcVar12)();
    return pRVar13;
  }
code_?:
  uVar14 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar15 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar16 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar17._0_2_ = 0;
  uVar17._2_2_ = 0;
  IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,(uint)uVar14,(uint)uVar15,(uint)uVar16,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = uVar17;
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

