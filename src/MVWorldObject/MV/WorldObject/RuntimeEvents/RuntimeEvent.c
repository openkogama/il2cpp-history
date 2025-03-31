
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  bVar1 = 0;
  bVar2 = (POPCOUNT((uint)bytePacker & 0xff) & 1U) == 0;
  if (bytePacker == (BytePacker *)0x0) {
    uVar3 = func_?();
    piVar4 = (int *)((ulonglong)uVar3 >> 0x20);
    pRVar5 = (RuntimeEvent *)uVar3;
    if (!bVar2) {
      do {
        pbVar6 = (byte *)((int)piVar4 + 0x1910f17a);
        bVar7 = *pbVar6;
        bVar8 = (byte)((uint)extraout_ECX >> 8);
        bVar9 = *pbVar6 + bVar8;
        *pbVar6 = bVar9 + bVar1;
        if ((POPCOUNT(*pbVar6) & 1U) == 0) {
          *(char *)&pRVar5->klass =
               *(char *)&pRVar5->klass + (char)uVar3 +
               (CARRY1(bVar7,bVar8) || CARRY1(bVar9,bVar1));
          *(char *)extraout_ECX = (char)*extraout_ECX + (char)uVar3;
          pRVar5->klass = (RuntimeEvent__Class *)((int)&pRVar5->klass + (int)pRVar5->klass);
          *extraout_ECX = (int)&pRVar5->klass + *extraout_ECX;
          *extraout_ECX = (int)&pRVar5->klass + *extraout_ECX;
          *piVar4 = (int)&pRVar5->klass + *piVar4;
          pcVar10 = (code *)swi(3);
          pRVar5 = (RuntimeEvent *)(*pcVar10)();
          return pRVar5;
        }
        *unaff_EDI = *unaff_EDI + -1;
        bVar7 = (byte)((ulonglong)uVar3 >> 8);
        bVar1 = CARRY1(bRam_?,bVar7);
        bRam_? = bRam_? + bVar7;
      } while ((POPCOUNT(bRam_?) & 1U) != 0);
    }
  }
  else {
    uVar11 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
    uVar12 = uVar11;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
      cRam_? = '\x01';
    }
    switch(uVar11) {
    case 1:
    case 2:
    case 5:
      method_00 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
      pRVar5 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pRVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (pRVar5->fields)._RuntimeEventType_k__BackingField = uVar12;
      if (uVar12 == 1) {
        uVar12 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
        *(uint8_t *)&pRVar5[1].klass = uVar12;
      }
      uVar13 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar14._0_2_ = 0;
      uVar14._2_2_ = 0;
      iVar15 = 0;
      IntVector::IntVector__ctor_1((IntVector *)&stack0xfffffff0,(uint)uVar13,0,0,(MethodInfo *)0x0);
      (pRVar5->fields).position.x = (int16_t)uVar14;
      (pRVar5->fields).position.y = SUB42(uVar14,2);
      (pRVar5->fields).position.z = iVar15;
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
      method_01 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
      pRVar5 = (RuntimeEvent *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pRVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
      (pRVar5->fields)._RuntimeEventType_k__BackingField = uVar12;
      uVar13 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar16 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar17 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
      uVar18._0_2_ = 0;
      uVar18._2_2_ = 0;
      iVar15 = 0;
      IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff0,(uint)uVar13,(uint)uVar16,(uint)uVar17,(MethodInfo *)0x0
                );
      (pRVar5->fields).position.x = (int16_t)uVar18;
      (pRVar5->fields).position.y = SUB42(uVar18,2);
      (pRVar5->fields).position.z = iVar15;
      return pRVar5;
    default:
      pRVar5 = (RuntimeEvent *)0x0;
    }
  }
  return pRVar5;
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
      if (bytePacker != (BytePacker *)0x0) {
        uVar3 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
        *(uint8_t *)&pOVar1[2].klass = uVar3;
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
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    *(undefined1 *)((int)&pOVar1[1].monitor + 2) = (undefined1)runtimeEventType;
    runtimeEventType = (RuntimeEventType__Enum)pOVar1;
    break;
  default:
    return (RuntimeEvent *)0x0;
  }
  if (bytePacker != (BytePacker *)0x0) {
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
     (runtimeEventType +
     (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)) = 0;
    return (RuntimeEvent *)runtimeEventType;
  }
code_?:
  cVar8 = '\0';
  uVar9 = (int)bytePacker < 0;
  cVar10 = '\0';
  pRVar11 = (RuntimeEvent *)func_?();
  pcVar12 = (code *)swi(4);
  cVar13 = extraout_CH;
  if (cVar8 == '\x01') {
    pRVar11 = (RuntimeEvent *)(*pcVar12)();
    cVar13 = extraout_CH_00;
  }
  if ((bool)uVar9) {
    return pRVar11;
  }
  pcVar14 = (char *)((int)&pRVar11[7].fields.position.x + 1);
  *pcVar14 = *pcVar14 + cVar13 + cVar10;
  pcVar12 = (code *)swi(1);
  pRVar11 = (RuntimeEvent *)(*pcVar12)();
  return pRVar11;
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

