
/* RuntimeEvent Create(BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
          (BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker == (BytePacker *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (RuntimeEvent *)(*pcVar1)();
    return pRVar2;
  }
  uVar3 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RVar4 = RuntimeEvent_GetRuntimeEventObjectType((uint)uVar3,(MethodInfo *)0x0);
  if ((char)RVar4 == '\x01') {
    pRVar2 = (RuntimeEvent *)
             FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    (pRVar2->fields)._RuntimeEventType_k__BackingField = uVar3;
    if (uVar3 == 1) {
      uVar3 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar2[1].klass = uVar3;
    }
    iVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    (pRVar2->fields).position.x = iVar5;
    (pRVar2->fields).position.y = iVar6;
    (pRVar2->fields).position.z = iVar7;
    return pRVar2;
  }
  if ((char)RVar4 == '\x02') {
    pRVar2 = (RuntimeEvent *)FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)
    ;
    (pRVar2->fields)._RuntimeEventType_k__BackingField = uVar3;
    iVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    (pRVar2->fields).position.x = iVar5;
    (pRVar2->fields).position.y = iVar6;
    (pRVar2->fields).position.z = iVar7;
    return pRVar2;
  }
  return (RuntimeEvent *)0x0;
}


/* RuntimeEvent Create(RuntimeEventType, BytePacker) */

RuntimeEvent *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create_1
          (RuntimeEventType__Enum runtimeEventType,BytePacker *bytePacker,MethodInfo *method)

{
  uVar1 = (uint8_t)runtimeEventType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RVar2 = RuntimeEvent_GetRuntimeEventObjectType(runtimeEventType & 0xff,(MethodInfo *)0x0);
  if ((char)RVar2 == '\x01') {
    pRVar3 = (RuntimeEvent *)
             FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    (pRVar3->fields)._RuntimeEventType_k__BackingField = uVar1;
    if (bytePacker == (BytePacker *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pRVar3 = (RuntimeEvent *)(*pcVar4)();
      return pRVar3;
    }
    if (uVar1 == 1) {
      uVar1 = BytePacker::BytePacker_ReadByte(bytePacker,(MethodInfo *)0x0);
      *(uint8_t *)&pRVar3[1].klass = uVar1;
    }
  }
  else {
    if ((char)RVar2 != '\x02') {
      return (RuntimeEvent *)0x0;
    }
    pRVar3 = (RuntimeEvent *)FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)
    ;
    (pRVar3->fields)._RuntimeEventType_k__BackingField = uVar1;
    if (bytePacker == (BytePacker *)0x0) goto code_?;
  }
  iVar5 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  iVar6 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  iVar7 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
  (pRVar3->fields).position.x = iVar5;
  (pRVar3->fields).position.y = iVar6;
  (pRVar3->fields).position.z = iVar7;
  return pRVar3;
}


/* RuntimeEventObjectType GetRuntimeEventObjectType(RuntimeEventType) */

RuntimeEventObjectType__Enum
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
RuntimeEvent_GetRuntimeEventObjectType(RuntimeEventType__Enum runtimeEventType,MethodInfo *method)

{
  uVar1 = (undefined7)
          ((ulonglong)
           *(uint *)(&UNK_? +
                    (longlong)
                    (int)((runtimeEventType & 0xff) -
                         RuntimeEventType__Enum_FineGrainedSingleCubeAdd) * 4) + 0xADDR >> 8);
  switch(runtimeEventType & 0xff) {
  case RuntimeEventType__Enum_FineGrainedSingleCubeAdd:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemove:
  case RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube:
    return (RuntimeEventObjectType__Enum)CONCAT71(uVar1,1);
  case RuntimeEventType__Enum_Bazooka:
  case RuntimeEventType__Enum_AvatarImpact25:
  case RuntimeEventType__Enum_VehicleImpact25:
  case RuntimeEventType__Enum_AvatarImpact50:
  case RuntimeEventType__Enum_AvatarImpact75:
  case RuntimeEventType__Enum_VehicleImpact50:
  case RuntimeEventType__Enum_VehicleImpact75:
  case RuntimeEventType__Enum_MeleeWeaponTerrainDestroy:
  case RuntimeEventType__Enum_ImpulseGunImpact:
    return (RuntimeEventObjectType__Enum)CONCAT71(uVar1,2);
  default:
    return (RuntimeEventObjectType__Enum)
           ((ulonglong)
            *(uint *)(&UNK_? +
                     (longlong)
                     (int)((runtimeEventType & 0xff) -
                          RuntimeEventType__Enum_FineGrainedSingleCubeAdd) * 4) + 0xADDR) &
           0xffffff00;
  }
}


/* RuntimeEventType get_RuntimeEventType() */

RuntimeEventType__Enum
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_get_RuntimeEventType
          (RuntimeEvent *this,MethodInfo *method)

{
  return (RuntimeEventType__Enum)(this->fields)._RuntimeEventType_k__BackingField;
}

