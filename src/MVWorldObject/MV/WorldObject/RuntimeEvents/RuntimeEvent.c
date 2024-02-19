
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  cVar1 = '\0';
  if (bytePacker != (BytePacker *)0x0) {
    uVar2 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
    uVar3 = uVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
      cRam_? = '\x01';
    }
    switch(uVar2) {
    case 1:
    case 2:
    case 5:
      method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
      pRVar4 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)pRVar4,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      (pRVar4->fields)._RuntimeEventType_k__BackingField = uVar3;
      if (uVar3 == 1) {
        uVar3 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
        *(uint8_t *)&pRVar4[1].klass = uVar3;
      }
      uVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar6._0_2_ = 0;
      uVar6._2_2_ = 0;
      iVar7 = 0;
      IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar5,0,0,(MethodInfo *)0x0);
      (pRVar4->fields).position.x = (int16_t)uVar6;
      (pRVar4->fields).position.y = SUB42(uVar6,2);
      (pRVar4->fields).position.z = iVar7;
      return pRVar4;
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
      pRVar4 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)pRVar4,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (pRVar4->fields)._RuntimeEventType_k__BackingField = uVar3;
      uVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar8 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar9 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar10._0_2_ = 0;
      uVar10._2_2_ = 0;
      iVar7 = 0;
      IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff0,(uint)uVar5,(uint)uVar8,(uint)uVar9,(MethodInfo *)0x0
                );
      (pRVar4->fields).position.x = (int16_t)uVar10;
      (pRVar4->fields).position.y = SUB42(uVar10,2);
      (pRVar4->fields).position.z = iVar7;
      return pRVar4;
    default:
      return (RuntimeEvent *)0x0;
    }
  }
  uVar11 = func_?();
  pcVar12 = (char *)((ulonglong)uVar11 >> 0x20);
  bVar13 = (char)uVar11 + (char)((ulonglong)uVar11 >> 8) * 'z';
  pcVar14 = (char *)CONCAT22((short)((ulonglong)uVar11 >> 0x10),(ushort)bVar13);
  if ((POPCOUNT((ushort)bVar13) & 1U) != 0) {
    *(char *)((int)extraout_ECX + 0x7b) = *(char *)((int)extraout_ECX + 0x7b) + unaff_BL + cVar1;
    *pcVar14 = *pcVar14 + bVar13;
    *extraout_ECX = (int)(pcVar14 + *extraout_ECX);
    *(byte *)extraout_ECX = (char)*extraout_ECX + bVar13;
    *extraout_ECX = (int)(pcVar14 + *extraout_ECX);
    *extraout_ECX = (int)(pcVar14 + *extraout_ECX);
    *extraout_ECX = *extraout_ECX + CONCAT31((int3)((uint)pcVar14 >> 8),bVar13 + *pcVar12 + *pcVar12);
    pcVar15 = (code *)swi(3);
    pRVar4 = (RuntimeEvent *)(*pcVar15)();
    return pRVar4;
  }
  return (RuntimeEvent *)((uint)pcVar14 | 0x8b);
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
    if ((undefined1)runtimeEventType != RuntimeEventType__Enum_FineGrainedSingleCubeAdd)
    goto joined_?;
    if (bytePacker != (BytePacker *)0x0) {
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
joined_?:
    runtimeEventType = (RuntimeEventType__Enum)value;
    if (bytePacker != (BytePacker *)0x0) {
code_?:
      uVar2 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar3 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar4 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      IStack_5.x = 0;
      IStack_5.y = 0;
      IStack_5.z = 0;
      IntVector::IntVector__ctor_1(&IStack_5,(uint)uVar2,(uint)uVar3,(uint)uVar4,(MethodInfo *)0x0);
      *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = IStack_5._0_4_;
      piVar6 = (int *)(uint)(ushort)IStack_5.z;
      goto code_?;
    }
    break;
  default:
    return (RuntimeEvent *)0x0;
  }
  uVar7 = func_?();
  piVar8 = (int *)((ulonglong)uVar7 >> 0x20);
  piVar6 = (int *)uVar7;
  bVar9 = *(uint *)&extraout_ECX[-3].fields.position.z < unaff_EDI;
  bVar10 = (byte)extraout_ECX;
  bVar11 = *(char *)&value->klass + bVar10;
  bVar12 = CARRY1(*(byte *)&value->klass,bVar10) || CARRY1(bVar11,bVar9);
  *(byte *)&value->klass = bVar11 + bVar9;
  runtimeEventType = (RuntimeEventType__Enum)extraout_ECX;
  if (*(char *)&value->klass < '\0') {
    bVar11 = (byte)bytePacker + bVar10;
    cVar13 = bVar11 + bVar12;
    if (-1 < cVar13) {
      puVar14 = (uint *)(CONCAT31((int3)((uint)bytePacker >> 8),cVar13) + -0x75);
      uVar15 = *puVar14;
      *puVar14 = uVar15 >> 5 | uVar15 << 0x1c;
      return (RuntimeEvent *)((uint)piVar6 | 0x8b);
    }
    *(char *)piVar6 =
         (char)*piVar6 + (char)uVar7 + (CARRY1((byte)bytePacker,bVar10) || CARRY1(bVar11,bVar12));
    *(char *)&extraout_ECX->klass = *(char *)&extraout_ECX->klass + (char)uVar7;
    *piVar6 = (int)(*piVar6 + (int)piVar6);
    extraout_ECX->klass =
         (RuntimeEvent__Class *)((int)&(extraout_ECX->klass->_0).image + (int)piVar6);
    extraout_ECX->klass =
         (RuntimeEvent__Class *)((int)&(extraout_ECX->klass->_0).image + (int)piVar6);
    *piVar8 = (int)(*piVar8 + (int)piVar6);
    pcVar16 = (code *)swi(3);
    pRVar17 = (RuntimeEvent *)(*pcVar16)();
    return pRVar17;
  }
code_?:
  (((RuntimeEvent *)runtimeEventType)->fields).position.z = (int16_t)piVar6;
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

