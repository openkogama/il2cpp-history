
/* ExplosionEvent+ExplosionValues GetExplosionValuesStruct(RuntimeEventType) */

ExplosionEvent_ExplosionValues *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
ExplosionEvent_GetExplosionValuesStruct
          (ExplosionEvent_ExplosionValues *__return_storage_ptr__,
          RuntimeEventType__Enum runtimeEventType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                  ,CONCAT44(in_register_00000014,runtimeEventType));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  }
  pDVar1 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->explosionValues;
  if (pDVar1 != (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)0x0) {
    puVar2 = (undefined8 *)FUN_?(auStack_3,pDVar1,(char)runtimeEventType);
    uVar4 = *puVar2;
    iVar5 = *(int32_t *)(puVar2 + 1);
    __return_storage_ptr__->radius = (float)(int)uVar4;
    __return_storage_ptr__->centerDamage = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->damageFallOffType = iVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pEVar7 = (ExplosionEvent_ExplosionValues *)(*pcVar6)();
  return pEVar7;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent_ToString
                   (ExplosionEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RuntimeEventType___0___Position_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_8 = CONCAT31(uStackX_8._1_3_,(this->fields)._._RuntimeEventType_k__BackingField);
  arg0 = (Object *)FUN_?(TypeInfo__MV__Common__RuntimeEventType,&uStackX_8);
  uStackX_8._0_2_ = (this->fields)._.position.x;
  uStackX_8._2_2_ = (this->fields)._.position.y;
  iStackX_c = (this->fields)._.position.z;
  arg1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__IntVector,&uStackX_8);
  pSVar1 = StringLiteral_RuntimeEventType___0___Position_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_2,arg0,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* ExplosionEvent() */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>
                         );
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Dictionary__
           ->klass->rgctx_data->method;
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::ByteEnum]::
           EqualityComparer_1_System_ByteEnum__get_Default(pMVar1->klass->rgctx_data[3].method);
  if ((pEVar2 != (EqualityComparer_1_System_ByteEnum_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (this->fields)._comparer = (IEqualityComparer_1_MV_Common_RuntimeEventType_ *)0x0, bVar3)) {
    uVar4 = (uint)((ulonglong)&(this->fields)._comparer >> 0xc);
    pMVar1 = (MethodInfo *)(ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)((longlong)pMVar1 * 8 + 0xADDR);
      puVar6 = (ulonglong *)((longlong)pMVar1 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar5 == *puVar6;
      if (bVar3) {
        *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  fVar7 = _UNK_?;
  if (this == (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  IVar9 = CONCAT31((int3)((uint)in_R9D >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)pMVar1 >> 8),3);
  aEStack_11[0].centerDamage = _UNK_?;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  fVar12 = _UNK_?;
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),4);
  aEStack_11[0].centerDamage = _UNK_?;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  fVar13 = _UNK_?;
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),7);
  aEStack_11[0].centerDamage = _UNK_?;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  fVar14 = _UNK_?;
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),8);
  aEStack_11[0].centerDamage = _UNK_?;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),6);
  aEStack_11[0].centerDamage = fVar12;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  aEStack_11[0].centerDamage = fVar13;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),9);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),10);
  aEStack_11[0].centerDamage = fVar14;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0xf);
  aEStack_11[0].centerDamage = fVar7;
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)uVar10,aEStack_11,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  aEStack_11[0].radius = _UNK_?;
  aEStack_11[0].damageFallOffType = 0;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__TryInsert
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,(ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),0x10),aEStack_11,
             CONCAT31((int3)(IVar9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->explosionValues = this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                    TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar15 == *puVar6;
      if (bVar3) {
        *puVar6 = uVar15 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* ExplosionEvent(RuntimeEventType, BytePacker) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,BytePacker *bytePacker,
               MethodInfo *method)

{
  (this->fields)._._RuntimeEventType_k__BackingField = (uint8_t)runtimeEventType;
  if (bytePacker != (BytePacker *)0x0) {
    iVar1 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar2 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    iVar3 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    (this->fields)._.position.x = iVar1;
    (this->fields)._.position.y = iVar2;
    (this->fields)._.position.z = iVar3;
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ExplosionEvent(RuntimeEventType, Vector3, Vector3) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,Vector3 *worldPosition,
               Vector3 *normal,MethodInfo *method)

{
  VStack_1.x = normal->x;
  VStack_1.y = normal->y;
  VStack_1.z = normal->z;
  (this->fields)._._RuntimeEventType_k__BackingField = (uint8_t)runtimeEventType;
  VStack_2.x = worldPosition->x;
  VStack_2.y = worldPosition->y;
  VStack_2.z = worldPosition->z;
  pIVar3 = CubeMathFunctions::CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                     (aIStackX_8,&VStack_2,&VStack_1,(MethodInfo *)0x0);
  iVar4 = pIVar3->y;
  iVar5 = pIVar3->z;
  (this->fields)._.position.x = pIVar3->x;
  (this->fields)._.position.y = iVar4;
  (this->fields)._.position.z = iVar5;
  return;
}


/* ExplosionEvent(RuntimeEventType, Vector3) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,Vector3 *worldPosition,
               MethodInfo *method)

{
  VStack_1.x = worldPosition->x;
  VStack_1.y = worldPosition->y;
  VStack_1.z = worldPosition->z;
  (this->fields)._._RuntimeEventType_k__BackingField = (uint8_t)runtimeEventType;
  pIVar2 = CubeMathFunctions::CubeMathFunctions_WorldPosToFineGrainedLocalPos
                     (aIStackX_8,&VStack_1,(MethodInfo *)0x0);
  iVar3 = pIVar2->y;
  iVar4 = pIVar2->z;
  (this->fields)._.position.x = pIVar2->x;
  (this->fields)._.position.y = iVar3;
  (this->fields)._.position.z = iVar4;
  return;
}


/* Byte[] get_Data() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent_get_Data
          (ExplosionEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (BytePacker *)0x0) {
    BytePacker::BytePacker_Write
              (this_00,(this->fields)._._RuntimeEventType_k__BackingField,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.z,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__;
    pLVar2 = (this_00->fields)._buffer;
    if (pLVar2 != (List_1_System_Byte_ *)0x0) {
      if ((pLVar2->fields)._size != 0) {
        pvVar3 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->klass->
                 rgctx_data[3].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
          pvVar3 = (void *)FUN_?(pvVar3);
        }
        pBVar4 = (Byte__Array *)FUN_?(pvVar3);
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)(pLVar2->fields)._items,0,(Array *)pBVar4,0,(pLVar2->fields)._size,
                   (MethodInfo *)0x0);
        return pBVar4;
      }
      pvVar3 = MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__->klass->
               rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      if (*(int *)((longlong)pvVar3 + 0xe4) == 0) {
        FUN_?(pvVar3);
      }
      pIVar5 = pMVar1->klass->rgctx_data[2].klass;
      if ((pIVar5->field_0x135 & 1) == 0) {
        pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
      }
      return *(Byte__Array **)pIVar5->static_fields;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar6)();
  return pBVar4;
}


/* ExplosionEvent+ExplosionValues get_ExplosionValuesStruct() */

ExplosionEvent_ExplosionValues *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
ExplosionEvent_get_ExplosionValuesStruct
          (ExplosionEvent_ExplosionValues *__return_storage_ptr__,ExplosionEvent *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  }
  pDVar1 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->explosionValues;
  if (pDVar1 != (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)0x0) {
    puVar2 = (undefined8 *)
             FUN_?(auStack_3,pDVar1,(this->fields)._._RuntimeEventType_k__BackingField);
    uVar4 = *puVar2;
    iVar5 = *(int32_t *)(puVar2 + 1);
    __return_storage_ptr__->radius = (float)(int)uVar4;
    __return_storage_ptr__->centerDamage = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->damageFallOffType = iVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pEVar7 = (ExplosionEvent_ExplosionValues *)(*pcVar6)();
  return pEVar7;
}

