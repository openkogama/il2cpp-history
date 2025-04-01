
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
    uVar2 = uVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
      cRam_? = '\x01';
    }
    switch(uVar1) {
    case 1:
    case 2:
    case 5:
      method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
      pRVar3 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pRVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (pRVar3->fields)._RuntimeEventType_k__BackingField = uVar2;
      if (uVar2 == 1) {
        uVar2 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
        *(uint8_t *)&pRVar3[1].klass = uVar2;
      }
      uVar4 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar5._0_2_ = 0;
      uVar5._2_2_ = 0;
      iVar6 = 0;
      IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar4,0,0,(MethodInfo *)0x0);
      (pRVar3->fields).position.x = (int16_t)uVar5;
      (pRVar3->fields).position.y = SUB42(uVar5,2);
      (pRVar3->fields).position.z = iVar6;
      return pRVar3;
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
      pRVar3 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pRVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      (pRVar3->fields)._RuntimeEventType_k__BackingField = uVar2;
      uVar4 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar8 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar9._0_2_ = 0;
      uVar9._2_2_ = 0;
      iVar6 = 0;
      IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff0,(uint)uVar4,(uint)uVar7,(uint)uVar8,(MethodInfo *)0x0
                );
      (pRVar3->fields).position.x = (int16_t)uVar9;
      (pRVar3->fields).position.y = SUB42(uVar9,2);
      (pRVar3->fields).position.z = iVar6;
      return pRVar3;
    default:
      return (RuntimeEvent *)0x0;
    }
  }
  while( true ) {
    bVar10 = true;
    bVar11 = 0;
    uVar12 = func_?();
    piVar13 = (int *)((ulonglong)uVar12 >> 0x20);
    cVar14 = -bVar11;
    pRVar3 = (RuntimeEvent *)CONCAT31((int3)((ulonglong)uVar12 >> 8),cVar14);
    if (!bVar10) {
      return pRVar3;
    }
    pbVar15 = (byte *)((int)piVar13 + 0x76);
    bVar10 = CARRY1(*pbVar15,unaff_BL) || CARRY1(*pbVar15 + unaff_BL,bVar11);
    *pbVar15 = *pbVar15 + unaff_BL + bVar11;
    out((short)((ulonglong)uVar12 >> 0x20),pRVar3);
    bVar16 = (byte)extraout_ECX;
    bVar11 = bVar16 * '\x02';
    piVar17 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar11 + bVar10);
    if ((!CARRY1(bVar16,bVar16) && !CARRY1(bVar11,bVar10)) && (byte)(bVar11 + bVar10) != '\0')
    break;
    pcVar18 = (code *)swi(4);
    if (SCARRY1(bVar16,bVar16) != SCARRY1(bVar11,bVar10)) {
      (*pcVar18)();
    }
  }
  *(char *)&pRVar3->klass =
       *(char *)&pRVar3->klass + cVar14 + (CARRY1(bVar16,bVar16) || CARRY1(bVar11,bVar10));
  *(char *)piVar17 = (char)*piVar17 + cVar14;
  pRVar3->klass = (RuntimeEvent__Class *)((int)&pRVar3->klass + (int)pRVar3->klass);
  *piVar17 = (int)&pRVar3->klass + *piVar17;
  *piVar17 = (int)&pRVar3->klass + *piVar17;
  *piVar13 = (int)&pRVar3->klass + *piVar13;
  pcVar18 = (code *)swi(3);
  pRVar3 = (RuntimeEvent *)(*pcVar18)();
  return pRVar3;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* RuntimeEvent Create(RuntimeEventType, BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create_1
          (RuntimeEventType__Enum runtimeEventType,BytePacker *bytePacker,MethodInfo *method)

{
  uVar1 = (uint8_t)((uint)in_stack_2 >> 0x18);
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  switch(runtimeEventType & 0xff) {
  case RuntimeEventType__Enum_FineGrainedSingleCubeAdd:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemove:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube:
    pSVar3 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    pOVar4 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pSVar3);
    *(undefined1 *)((int)&pOVar4[1].monitor + 2) = (undefined1)runtimeEventType;
    bVar5 = (undefined1)runtimeEventType == RuntimeEventType__Enum_FineGrainedSingleCubeAdd;
    runtimeEventType = (RuntimeEventType__Enum)pOVar4;
    if (bVar5) {
      if (bytePacker != (BytePacker *)0x0) {
        uVar1 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
        *(uint8_t *)&pOVar4[2].klass = uVar1;
        goto code_?;
      }
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
    pOVar4 = (Object *)func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,unaff_ESI);
    *(undefined1 *)((int)&pOVar4[1].monitor + 2) = (undefined1)runtimeEventType;
    runtimeEventType = (RuntimeEventType__Enum)pOVar4;
    break;
  default:
    return (RuntimeEvent *)0x0;
  }
  if (bytePacker != (BytePacker *)0x0) {
code_?:
    uVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar8 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar9._0_2_ = 0;
    uVar9._2_2_ = 0;
    iVar10 = 0;
    IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xfffffff4,(uint)uVar6,(uint)uVar7,(uint)uVar8,(MethodInfo *)0x0);
    *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = uVar9;
    *(int16_t *)
     (runtimeEventType +
     (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)) = iVar10;
    return (RuntimeEvent *)runtimeEventType;
  }
code_?:
  bVar5 = bytePacker == (BytePacker *)0x0;
  cVar11 = '\0';
  cVar12 = (int)bytePacker < 0;
  bVar13 = false;
  uVar14 = func_?();
  pbVar15 = (byte *)((ulonglong)uVar14 >> 0x20);
  pRVar16 = (RuntimeEvent *)uVar14;
  if (bVar5 || cVar11 != cVar12) {
    if ((bool)bVar13 || bVar5) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)pRVar16[0x10ef76e].fields.position.x) {
      case '\0':
        pSVar3 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
        pRVar16 = (RuntimeEvent *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pRVar16,ExceptionArgument__Enum_obj,(MethodInfo *)pSVar3);
        (pRVar16->fields)._RuntimeEventType_k__BackingField = uVar1;
        if (uVar1 == 1) {
          uVar1 = BytePacker::BytePacker_ReadByte((BytePacker *)runtimeEventType,(MethodInfo *)0x0);
          *(uint8_t *)&pRVar16[1].klass = uVar1;
        }
        uVar6 = BytePacker::BytePacker_ReadInt16((BytePacker *)runtimeEventType,(MethodInfo *)0x0);
        uVar7 = BytePacker::BytePacker_ReadInt16((BytePacker *)runtimeEventType,(MethodInfo *)0x0);
        uVar8 = BytePacker::BytePacker_ReadInt16((BytePacker *)0x0,(MethodInfo *)0x0);
        this = (IntVector *)((uint)&stack0xfffffff0 & 0xffff0000);
        puVar17 = &UNK_?;
        IntVector::IntVector__ctor_1(this,(uint)uVar6,(uint)uVar7,(uint)uVar8,(MethodInfo *)0x0);
        *(undefined **)&(pRVar16->fields).position = puVar17;
        (pRVar16->fields).position.z = (int16_t)this;
        return pRVar16;
      case '\x01':
        method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
        pRVar16 = (RuntimeEvent *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pRVar16,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        (pRVar16->fields)._RuntimeEventType_k__BackingField = uVar1;
        uVar6 = BytePacker::BytePacker_ReadInt16((BytePacker *)runtimeEventType,(MethodInfo *)0x0);
        uVar7 = BytePacker::BytePacker_ReadInt16((BytePacker *)runtimeEventType,(MethodInfo *)0x0);
        uVar8 = BytePacker::BytePacker_ReadInt16((BytePacker *)runtimeEventType,(MethodInfo *)0x0);
        uVar18._0_2_ = 0;
        uVar18._2_2_ = 0;
        iVar10 = 0;
        IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xfffffff0,(uint)uVar6,(uint)uVar7,(uint)uVar8,
                   (MethodInfo *)0x0);
        (pRVar16->fields).position.x = (int16_t)uVar18;
        (pRVar16->fields).position.y = SUB42(uVar18,2);
        (pRVar16->fields).position.z = iVar10;
        return pRVar16;
      }
    }
    return (RuntimeEvent *)0x0;
  }
  while( true ) {
    out((short)((ulonglong)uVar14 >> 0x20),pRVar16);
    bVar19 = *(char *)&pRVar16->klass + (byte)bytePacker;
    bVar5 = CARRY1(*(byte *)&pRVar16->klass,(byte)bytePacker) || CARRY1(bVar19,bVar13);
    *(byte *)&pRVar16->klass = bVar19 + bVar13;
    if (*(char *)&pRVar16->klass != '\0') {
      return pRVar16;
    }
    bVar13 = *(byte *)&bytePacker->klass;
    bVar20 = (byte)((uint)bytePacker >> 8);
    bVar19 = *(char *)&bytePacker->klass + bVar20;
    *(byte *)&bytePacker->klass = bVar19 + bVar5;
    if (*(char *)&bytePacker->klass == '\0') break;
    *pbVar15 = *pbVar15 >> 1;
    *unaff_EDI = *unaff_EDI + -1;
    pbVar21 = (byte *)(runtimeEventType + 0x74);
    bVar13 = CARRY1(*pbVar21,bVar20);
    *pbVar21 = *pbVar21 + bVar20;
  }
  *(char *)&pRVar16->klass =
       *(char *)&pRVar16->klass + (char)uVar14 + (CARRY1(bVar13,bVar20) || CARRY1(bVar19,bVar5));
  *(char *)extraout_ECX = (char)*extraout_ECX + (char)uVar14;
  pRVar16->klass = (RuntimeEvent__Class *)((int)&pRVar16->klass + (int)pRVar16->klass);
  *extraout_ECX = (int)&pRVar16->klass + *extraout_ECX;
  *extraout_ECX = (int)&pRVar16->klass + *extraout_ECX;
  *(int *)pbVar15 = (int)&pRVar16->klass + *(int *)pbVar15;
  pcVar22 = (code *)swi(3);
  pRVar16 = (RuntimeEvent *)(*pcVar22)();
  return pRVar16;
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

