
/* ExplosionEvent+ExplosionValues GetExplosionValuesStruct(RuntimeEventType) */

ExplosionEvent_ExplosionValues *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
ExplosionEvent_GetExplosionValuesStruct
          (ExplosionEvent_ExplosionValues *__return_storage_ptr__,
          RuntimeEventType__Enum runtimeEventType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                   );
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).cctor_finished_or_no_cctor == 0
     ) {
    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  }
  this = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->explosionValues;
  if (this != (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) {
    pEVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
             WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
             Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__get_Item
                       (&EStack_2,
                        (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                         *)this,runtimeEventType,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                       );
    fVar3 = pEVar1->centerDamage;
    iVar4 = pEVar1->damageFallOffType;
    __return_storage_ptr__->radius = pEVar1->radius;
    __return_storage_ptr__->centerDamage = fVar3;
    __return_storage_ptr__->damageFallOffType = iVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pEVar1 = (ExplosionEvent_ExplosionValues *)(*pcVar5)();
  return pEVar1;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent_ToString
                   (ExplosionEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MV__Common__RuntimeEventType);
    func_?(&StringLiteral_RuntimeEventType___0___Position_);
    cRam_? = '\x01';
  }
  pEVar1 = this;
  this = (ExplosionEvent *)CONCAT13((this->fields)._._RuntimeEventType_k__BackingField,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__Common__RuntimeEventType,(int)&this + 3);
  uStack_2._0_2_ = (pEVar1->fields)._.position.x;
  uStack_2._2_2_ = (pEVar1->fields)._.position.y;
  iStack_3 = (pEVar1->fields)._.position.z;
  arg1 = (Object *)func_?(TypeInfo__MV__WorldObject__IntVector,&uStack_2);
  pSVar4 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_RuntimeEventType___0___Position_,arg0,arg1,(MethodInfo *)0x0);
  return pSVar4;
}


/* ExplosionEvent() */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>
                   );
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
          *)func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Dictionary__
            );
  if (this != (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) {
    value_05.centerDamage = 100.0;
    value_05.radius =
         (float)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
    ;
    value_05.damageFallOffType = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,3,value_05,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    method = (MethodInfo *)0x1;
    fVar1 = (float)_UNK_?;
    EVar2.radius = _UNK_?;
    EVar2 = (ExplosionEvent_ExplosionValues)CONCAT84(uVar3,EVar2.radius);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,4,EVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    EVar2.centerDamage = (float)_UNK_?;
    EVar2.radius = (float)_UNK_?;
    EVar2.damageFallOffType = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,7,EVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value.centerDamage = (float)_UNK_?;
    value.radius = (float)_UNK_?;
    value.damageFallOffType = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,8,value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_00.centerDamage = (float)_UNK_?;
    value_00.radius = (float)_UNK_?;
    value_00.damageFallOffType = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,6,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_01.centerDamage = (float)_UNK_?;
    value_01.radius = (float)_UNK_?;
    value_01.damageFallOffType = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,9,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_02.centerDamage = (float)_UNK_?;
    value_02.radius = (float)_UNK_?;
    value_02.damageFallOffType = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,10,value_02,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_03.centerDamage = (float)_UNK_?;
    value_03.radius = (float)_UNK_?;
    value_03.damageFallOffType = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,0xf,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_04.centerDamage = (float)_UNK_?;
    value_04.radius = (float)_UNK_?;
    value_04.damageFallOffType = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this,0x10,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->explosionValues = this;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ExplosionEvent(RuntimeEventType, BytePacker) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,BytePacker *bytePacker,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._._RuntimeEventType_k__BackingField = (undefined1)runtimeEventType;
  if (bytePacker != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar2 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    uVar3 = BytePacker::BytePacker_ReadInt16(bytePacker,(MethodInfo *)0x0);
    IStack_4.x = 0;
    IStack_4.y = 0;
    IStack_4.z = 0;
    IntVector::IntVector__ctor_1(&IStack_4,(uint)uVar1,(uint)uVar2,(uint)uVar3,(MethodInfo *)0x0);
    (this->fields)._.position.x = IStack_4.x;
    (this->fields)._.position.y = IStack_4.y;
    (this->fields)._.position.z = IStack_4.z;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ExplosionEvent(RuntimeEventType, Vector3, Vector3) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,Vector3 worldPosition,
               Vector3 normal,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._._RuntimeEventType_k__BackingField = (undefined1)runtimeEventType;
  worldPos.y = worldPosition.x;
  worldPos.z = worldPosition.y;
  worldPos.x = (float)&normal.y;
  normal_00.y = normal.x;
  normal_00.x = worldPosition.z;
  normal_00.z = normal.y;
  IVar1 = CubeMathFunctions::CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                    (worldPos,normal_00,(MethodInfo *)normal.z);
  uVar2 = *IVar1._0_4_;
  iVar3 = *(int16_t *)(IVar1._0_4_ + 1);
  (this->fields)._.position.x = (short)uVar2;
  (this->fields)._.position.y = (short)((uint)uVar2 >> 0x10);
  (this->fields)._.position.z = iVar3;
  return;
}


/* ExplosionEvent(RuntimeEventType, Vector3) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,Vector3 worldPosition,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._._RuntimeEventType_k__BackingField = (undefined1)runtimeEventType;
  worldPos.y = worldPosition.x;
  worldPos.x = (float)&worldPosition.y;
  worldPos.z = worldPosition.y;
  IVar1 = CubeMathFunctions::CubeMathFunctions_WorldPosToFineGrainedLocalPos
                    (worldPos,(MethodInfo *)worldPosition.z);
  uVar2 = *IVar1._0_4_;
  iVar3 = *(int16_t *)(IVar1._0_4_ + 1);
  (this->fields)._.position.x = (short)uVar2;
  (this->fields)._.position.y = (short)((uint)uVar2 >> 0x10);
  (this->fields)._.position.z = iVar3;
  return;
}


/* Byte[] get_Data() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent_get_Data
          (ExplosionEvent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (BytePacker *)0x0) {
    BytePacker::BytePacker_Write
              (this_00,(this->fields)._._RuntimeEventType_k__BackingField,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(this_00,(this->fields)._.position.z,(MethodInfo *)0x0);
    pBVar1 = BytePacker::BytePacker_ToArray(this_00,(MethodInfo *)0x0);
    return pBVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* ExplosionEvent+ExplosionValues get_ExplosionValuesStruct() */

ExplosionEvent_ExplosionValues *
MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
ExplosionEvent_get_ExplosionValuesStruct
          (ExplosionEvent_ExplosionValues *__return_storage_ptr__,ExplosionEvent *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                   );
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).cctor_finished_or_no_cctor == 0
     ) {
    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  }
  this_00 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->explosionValues
  ;
  this = (ExplosionEvent *)CONCAT31(this._1_3_,(this->fields)._._RuntimeEventType_k__BackingField);
  if (this_00 !=
      (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
       *)0x0) {
    pEVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
             WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
             Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__get_Item
                       (&EStack_2,
                        (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                         *)this_00,(ByteEnum__Enum)this,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                       );
    fVar3 = pEVar1->centerDamage;
    iVar4 = pEVar1->damageFallOffType;
    __return_storage_ptr__->radius = pEVar1->radius;
    __return_storage_ptr__->centerDamage = fVar3;
    __return_storage_ptr__->damageFallOffType = iVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pEVar1 = (ExplosionEvent_ExplosionValues *)(*pcVar5)();
  return pEVar1;
}

