
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  cVar1 = (char)((uint)unaff_EBX >> 8);
  if (bytePacker != (BytePacker *)0x0) {
    uVar2 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
      cRam_? = '\x01';
    }
    switch(uVar2) {
    case 1:
    case 2:
    case 5:
      pMVar3 = (MethodInfo *)&UNK_?;
      pRVar4 = (RuntimeEvent *)
               func_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent)
      ;
      cVar1 = '\0';
      if (pRVar4 != (RuntimeEvent *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pRVar4,ExceptionArgument__Enum_obj,pMVar3);
        (pRVar4->fields)._RuntimeEventType_k__BackingField = uVar2;
        if (uVar2 == 1) {
          uVar2 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
          *(uint8_t *)&pRVar4[1].klass = uVar2;
        }
        uVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
        uVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
        uVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
        uVar8._0_2_ = 0;
        uVar8._2_2_ = 0;
        IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xfffffff0,(uint)uVar5,(uint)uVar6,(uint)uVar7,
                   (MethodInfo *)0x0);
        (pRVar4->fields).position.x = (int16_t)uVar8;
        (pRVar4->fields).position.y = SUB42(uVar8,2);
        (pRVar4->fields).position.z = 0;
        return pRVar4;
      }
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
      pMVar3 = (MethodInfo *)&UNK_?;
      pRVar4 = (RuntimeEvent *)
               func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      cVar1 = '\0';
      if (pRVar4 != (RuntimeEvent *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pRVar4,ExceptionArgument__Enum_obj,pMVar3);
        (pRVar4->fields)._RuntimeEventType_k__BackingField = uVar2;
        uVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
        uVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
        uVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
        uVar9._0_2_ = 0;
        uVar9._2_2_ = 0;
        IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xfffffff0,(uint)uVar5,(uint)uVar6,(uint)uVar7,
                   (MethodInfo *)0x0);
        (pRVar4->fields).position.x = (int16_t)uVar9;
        (pRVar4->fields).position.y = SUB42(uVar9,2);
        (pRVar4->fields).position.z = 0;
        return pRVar4;
      }
      break;
    default:
      return (RuntimeEvent *)0x0;
    }
  }
  cVar10 = '\0';
  uVar11 = func_?();
  pcVar12 = (char *)((ulonglong)uVar11 >> 0x20);
  uVar13 = (undefined3)((ulonglong)uVar11 >> 8);
  uRam_? = 0x9f;
  *unaff_EDI = *unaff_EDI + cVar1 + cVar10;
  cVar1 = cRam_?;
  iVar14 = CONCAT31(uVar13,cRam_?);
  *extraout_ECX = *extraout_ECX + iVar14;
  *(char *)extraout_ECX = (char)*extraout_ECX + cVar1;
  *extraout_ECX = *extraout_ECX + iVar14;
  *extraout_ECX = *extraout_ECX + iVar14;
  *extraout_ECX = *extraout_ECX + CONCAT31(uVar13,cVar1 + *pcVar12 + *pcVar12);
  pcVar15 = (code *)swi(3);
  pRVar4 = (RuntimeEvent *)(*pcVar15)();
  return pRVar4;
}


/* RuntimeEvent Create(Byte[]) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create_1
          (Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  this = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this != (BytePacker *)0x0) {
    BytePacker::BytePacker__ctor_1(this,bytes,(MethodInfo *)0x0);
    uVar1 = BytePacker::BytePacker_ReadByte(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    switch(uVar1) {
    case 1:
    case 2:
    case 5:
      pRVar2 = (RuntimeEvent *)func_?();
      if (pRVar2 != (RuntimeEvent *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pRVar2,ExceptionArgument__Enum_obj,unaff_EDI);
        (pRVar2->fields)._RuntimeEventType_k__BackingField = uVar1;
        if (uVar1 == 1) {
          uVar1 = BytePacker::BytePacker_ReadByte(this,(MethodInfo *)0x0);
          *(uint8_t *)&pRVar2[1].klass = uVar1;
        }
        uVar3 = BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
        uVar4 = BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
        uVar5 = BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
        uVar6._0_2_ = 0;
        uVar6._2_2_ = 0;
        IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xfffffff0,(uint)uVar3,(uint)uVar4,(uint)uVar5,
                   (MethodInfo *)0x0);
        (pRVar2->fields).position.x = (int16_t)uVar6;
        (pRVar2->fields).position.y = SUB42(uVar6,2);
        (pRVar2->fields).position.z = 0;
        return pRVar2;
      }
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
      pRVar2 = (RuntimeEvent *)func_?();
      if (pRVar2 != (RuntimeEvent *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pRVar2,ExceptionArgument__Enum_obj,unaff_EDI);
        (pRVar2->fields)._RuntimeEventType_k__BackingField = uVar1;
        uVar3 = BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
        uVar4 = BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
        uVar5 = BytePacker::BytePacker_ReadInt16(this,(MethodInfo *)0x0);
        uVar7._0_2_ = 0;
        uVar7._2_2_ = 0;
        IntVector::IntVector__ctor_1
                  ((IntVector *)&stack0xfffffff0,(uint)uVar3,(uint)uVar4,(uint)uVar5,
                   (MethodInfo *)0x0);
        (pRVar2->fields).position.x = (int16_t)uVar7;
        (pRVar2->fields).position.y = SUB42(uVar7,2);
        (pRVar2->fields).position.z = 0;
        return pRVar2;
      }
      break;
    default:
      return (RuntimeEvent *)0x0;
    }
  }
  uVar8 = func_?();
  piVar9 = (int *)((ulonglong)uVar8 >> 0x20);
  piVar10 = (int *)uVar8;
  uRam_? = (undefined1)uVar8;
  uRam_? = uRam_?;
  *piVar10 = *piVar10 + (int)piVar10;
  *extraout_ECX = *extraout_ECX + (int)piVar10;
  *extraout_ECX = *extraout_ECX + (int)piVar10;
  *piVar9 = *piVar9 + (int)piVar10;
  pcVar11 = (code *)swi(3);
  pRVar2 = (RuntimeEvent *)(*pcVar11)();
  return pRVar2;
}


/* RuntimeEvent Create(RuntimeEventType, BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create_2
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
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    if (pOVar1 == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
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
    if (pOVar1 == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
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
    IStack_7.x = 0;
    IStack_7.y = 0;
    IStack_7.z = 0;
    IntVector::IntVector__ctor_1(&IStack_7,(uint)uVar4,(uint)uVar5,(uint)uVar6,(MethodInfo *)0x0);
    *(undefined4 *)(runtimeEventType + RuntimeEventType__Enum_AvatarImpact75) = IStack_7._0_4_;
    *(int16_t *)
     (runtimeEventType +
     (RuntimeEventType__Enum_AvatarImpact75|RuntimeEventType__Enum_AvatarImpact25)) = IStack_7.z;
    return (RuntimeEvent *)runtimeEventType;
  }
code_?:
  uVar8 = func_?();
  piVar9 = (int *)((ulonglong)uVar8 >> 0x20);
  cVar10 = (byte)uVar8 + 0x9e;
  piVar11 = (int *)CONCAT31((int3)((ulonglong)uVar8 >> 8),cVar10);
  cRam_? = cVar10;
  *(char *)((int)extraout_ECX + 0x10a29e) =
       *(char *)((int)extraout_ECX + 0x10a29e) + (char)((ulonglong)uVar8 >> 8) +
       (0x61 < (byte)uVar8);
  *(char *)extraout_ECX = (char)*extraout_ECX + cVar10;
  *piVar11 = *piVar11 + (int)piVar11;
  *extraout_ECX = *extraout_ECX + (int)piVar11;
  *extraout_ECX = *extraout_ECX + (int)piVar11;
  *piVar9 = *piVar9 + (int)piVar11;
  pcVar12 = (code *)swi(3);
  pRVar13 = (RuntimeEvent *)(*pcVar12)();
  return pRVar13;
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

