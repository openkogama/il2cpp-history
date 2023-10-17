
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
  this = (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>
                        );
  if (this != (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Dictionary__
              );
    value_07.BanDuration = (String *)_UNK_?;
    value_07.BanReason = (String *)_UNK_?;
    value_07.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0x3,value_07,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value.BanDuration = (String *)_UNK_?;
    value.BanReason = (String *)_UNK_?;
    value.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0x4,value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_00.BanDuration = (String *)_UNK_?;
    value_00.BanReason = (String *)_UNK_?;
    value_00.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0x7,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_01.BanDuration = (String *)_UNK_?;
    value_01.BanReason = (String *)_UNK_?;
    value_01.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0x8,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_02.BanDuration = (String *)_UNK_?;
    value_02.BanReason = (String *)_UNK_?;
    value_02.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0x6,value_02,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_03.BanDuration = (String *)_UNK_?;
    value_03.BanReason = (String *)_UNK_?;
    value_03.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0x9,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_04.BanDuration = (String *)_UNK_?;
    value_04.BanReason = (String *)_UNK_?;
    value_04.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0xa,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_05.BanDuration = (String *)_UNK_?;
    value_05.BanReason = (String *)_UNK_?;
    value_05.BanDurationFormat = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0xf,value_05,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    value_06.BanDuration = (String *)_UNK_?;
    value_06.BanReason = (String *)_UNK_?;
    value_06.BanDurationFormat = (String *)0x0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,AdminToolController+DefaultBan]::
    Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
              (this,(Object *)0x10,value_06,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__Add_MV__Common__RuntimeEventType__MV__WorldObject__RuntimeEvents__ExplosionEvent__ExplosionValues_
              );
    TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->explosionValues =
         (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
          *)this;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ExplosionEvent(RuntimeEventType, Byte[]) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,Byte__Array *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  pBStack_1 = this_00;
  if (this_00 != (BytePacker *)0x0) {
    BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
    (this->fields)._._RuntimeEventType_k__BackingField = (undefined1)runtimeEventType;
    uVar2 = BytePacker::BytePacker_ReadInt16(this_00,(MethodInfo *)0x0);
    uVar3 = BytePacker::BytePacker_ReadInt16(this_00,(MethodInfo *)0x0);
    uVar4 = BytePacker::BytePacker_ReadInt16(pBStack_1,(MethodInfo *)0x0);
    IStack_5.x = 0;
    IStack_5.y = 0;
    IStack_5.z = 0;
    IntVector::IntVector__ctor_1(&IStack_5,(uint)uVar2,(uint)uVar3,(uint)uVar4,(MethodInfo *)0x0);
    (this->fields)._.position.x = IStack_5.x;
    (this->fields)._.position.y = IStack_5.y;
    (this->fields)._.position.z = IStack_5.z;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ExplosionEvent(RuntimeEventType, BytePacker) */

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,BytePacker *bytePacker,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,Vector3 worldPosition,
               Vector3 normal,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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

void MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_3
               (ExplosionEvent *this,RuntimeEventType__Enum runtimeEventType,Vector3 worldPosition,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if (this_00 != (BytePacker *)0x0) {
    BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write
              (this_00,(this->fields)._._RuntimeEventType_k__BackingField,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_5(this_00,(this->fields)._.position.x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_5(this_00,(this->fields)._.position.y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_5(this_00,(this->fields)._.position.z,(MethodInfo *)0x0);
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

