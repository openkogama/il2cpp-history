
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  bVar1 = false;
  bVar2 = bytePacker == (BytePacker *)0x0;
  if (bVar2) {
    fVar3 = (float10)func_?();
    piVar4 = (int *)in(0xd1);
    *piVar4 = (int)ROUND(fVar3);
    if (!bVar1 && !bVar2) {
      *piVar4 = (int)ROUND(fVar3);
      *extraout_ECX = *extraout_ECX + (int)piVar4;
      *(char *)extraout_ECX = (char)*extraout_ECX + (char)piVar4;
      *extraout_ECX = *extraout_ECX + (int)piVar4;
      *extraout_ECX = *extraout_ECX + (int)piVar4;
      *extraout_ECX =
           *extraout_ECX +
           CONCAT31((int3)((uint)piVar4 >> 8),
                    (char)piVar4 + *(char *)(extraout_EDX * 0x10db) +
                    *(char *)(extraout_EDX * 0x10db));
      pcVar5 = (code *)swi(3);
      pRVar6 = (RuntimeEvent *)(*pcVar5)();
      return pRVar6;
    }
    pRVar6 = (RuntimeEvent *)(unaff_EBX + 1);
    bRam_? = bRam_? | (byte)((uint)piVar4 >> 8);
  }
  else {
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
      uVar11 = 0;
      IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar9,0,0,(MethodInfo *)0x0);
      (pRVar6->fields).position.x = (int16_t)uVar10;
      (pRVar6->fields).position.y = SUB42(uVar10,2);
      piVar4 = (int *)(uVar11 & 0xffff);
      break;
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
      iVar15 = 0;
      IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff0,(uint)uVar9,(uint)uVar12,(uint)uVar13,(MethodInfo *)0x0
                );
      (pRVar6->fields).position.x = (int16_t)uVar14;
      (pRVar6->fields).position.y = SUB42(uVar14,2);
      (pRVar6->fields).position.z = iVar15;
      return pRVar6;
    default:
      return (RuntimeEvent *)0x0;
    }
  }
  (pRVar6->fields).position.z = (int16_t)piVar4;
  return pRVar6;
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
    uVar2 = 0;
    uVar3 = func_?();
    piVar4 = (int *)((ulonglong)uVar3 >> 0x20);
    piVar5 = (int *)uVar3;
    piVar6 = (int *)(extraout_ECX + -1);
    uVar7 = CONCAT11(uVar2,(char)bytePacker);
    uVar8 = uVar7 >> 1;
    *(char *)&value->klass =
         *(char *)&value->klass + (char)uVar8 + (((uVar8 | uVar7 << 8) & 0x100) != 0);
    *(char *)piVar5 = (char)*piVar5 + (char)uVar3 + (((uint)bytePacker & 2) != 0);
    *(char *)piVar6 = *(char *)piVar6 + (char)uVar3;
    *piVar5 = (int)(*piVar5 + (int)piVar5);
    *piVar6 = (int)(*piVar6 + (int)piVar5);
    *piVar6 = (int)(*piVar6 + (int)piVar5);
    *piVar4 = (int)(*piVar4 + (int)piVar5);
    pcVar9 = (code *)swi(3);
    pRVar10 = (RuntimeEvent *)(*pcVar9)();
    return pRVar10;
  }
code_?:
  uVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar8 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  uVar11 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  IStack_12.x = 0;
  IStack_12.y = 0;
  IStack_12.z = 0;
  IntVector::IntVector__ctor_1(&IStack_12,(uint)uVar7,(uint)uVar8,(uint)uVar11,(MethodInfo *)0x0);
  *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = IStack_12._0_4_;
  *(int16_t *)
   (runtimeEventType + (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)
   ) = IStack_12.z;
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

