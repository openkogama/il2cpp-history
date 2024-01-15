
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  bVar1 = false;
  bVar2 = bytePacker == (BytePacker *)0x0;
  if (!bVar2) {
    uVar3 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
    uVar4 = uVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
      cRam_? = '\x01';
    }
    switch(uVar3) {
    case 1:
    case 2:
    case 5:
      method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
      pRVar5 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)pRVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      (pRVar5->fields)._RuntimeEventType_k__BackingField = uVar4;
      if (uVar4 == 1) {
        uVar4 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
        *(uint8_t *)&pRVar5[1].klass = uVar4;
      }
      uVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar7._0_2_ = 0;
      uVar7._2_2_ = 0;
      iVar8 = 0;
      IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar6,0,0,(MethodInfo *)0x0);
      (pRVar5->fields).position.x = (int16_t)uVar7;
      (pRVar5->fields).position.y = SUB42(uVar7,2);
      (pRVar5->fields).position.z = iVar8;
      return pRVar5;
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
      pRVar5 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)pRVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (pRVar5->fields)._RuntimeEventType_k__BackingField = uVar4;
      uVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar9 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar10 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar11._0_2_ = 0;
      uVar11._2_2_ = 0;
      iVar8 = 0;
      IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff0,(uint)uVar6,(uint)uVar9,(uint)uVar10,(MethodInfo *)0x0
                );
      (pRVar5->fields).position.x = (int16_t)uVar11;
      (pRVar5->fields).position.y = SUB42(uVar11,2);
      (pRVar5->fields).position.z = iVar8;
      return pRVar5;
    default:
      return (RuntimeEvent *)0x0;
    }
  }
  fVar12 = (float10)func_?();
  piVar13 = (int *)in(0xf4);
  *piVar13 = (int)ROUND(fVar12);
  if (!bVar1 && !bVar2) {
    *piVar13 = (int)ROUND(fVar12);
    *extraout_ECX = *extraout_ECX + (int)piVar13;
    *(char *)extraout_ECX = (char)*extraout_ECX + (char)piVar13;
    *extraout_ECX = *extraout_ECX + (int)piVar13;
    *extraout_ECX = *extraout_ECX + (int)piVar13;
    *extraout_ECX =
         *extraout_ECX +
         CONCAT31((int3)((uint)piVar13 >> 8),(char)piVar13 + *extraout_EDX + *extraout_EDX);
    pcVar14 = (code *)swi(3);
    pRVar5 = (RuntimeEvent *)(*pcVar14)();
    return pRVar5;
  }
  *unaff_EBX = (*unaff_EBX - (char)((uint)unaff_EBX >> 8)) - bVar1;
  *unaff_EDI = *unaff_EDI + -1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
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
    piVar6 = (int *)uVar4;
    piVar7 = (int *)(extraout_ECX + -1);
    *piVar6 = (int)ROUND(extraout_ST0);
    *piVar6 = (int)ROUND(extraout_ST0);
    *piVar6 = (int)ROUND(extraout_ST0);
    cVar8 = (char)uVar4;
    *(char *)piVar6 = (char)*piVar6 + cVar8;
    *piVar7 = (int)(*piVar7 + (int)piVar6);
    *(char *)piVar7 = *(char *)piVar7 + cVar8;
    *piVar7 = (int)(*piVar7 + (int)piVar6);
    *piVar7 = (int)(*piVar7 + (int)piVar6);
    *piVar7 = *piVar7 + CONCAT31((int3)((ulonglong)uVar4 >> 8),cVar8 + *pcVar5 + *pcVar5);
    pcVar9 = (code *)swi(3);
    pRVar10 = (RuntimeEvent *)(*pcVar9)();
    return pRVar10;
  }
code_?:
  uVar11 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar12 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar13 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  IStack_14.x = 0;
  IStack_14.y = 0;
  IStack_14.z = 0;
  IntVector::IntVector__ctor_1(&IStack_14,(uint)uVar11,(uint)uVar12,(uint)uVar13,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = IStack_14._0_4_;
  *(int16_t *)
   (runtimeEventType + (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)
   ) = IStack_14.z;
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

