
/* Boolean HasFirstTimeEventOccured(FirstTimeEvent) */

bool MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
     FirstTimeState_HasFirstTimeEventOccured
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (firstTimeEvent == FirstTimeEvent__Enum_NoEvent) {
    return 1;
  }
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    if ((pBVar1->fields).m_length <= firstTimeEvent) {
      return 0;
    }
    method = (MethodInfo *)0x0;
    if ((firstTimeEvent < FirstTimeEvent__Enum_SkipEvent) ||
       ((pBVar1->fields).m_length <= firstTimeEvent)) {
      uVar2 = func_?(&TypeInfo__System__Int32,&firstTimeEvent);
      actualValue = (Object *)func_?(uVar2);
      uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
      paramName = (String *)func_?(&StringLiteral_index);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
      func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
      func_?();
    }
    else {
      pIVar3 = (pBVar1->fields).m_array;
      if (pIVar3 == (Int32__Array *)0x0) goto code_?;
      if ((uint)firstTimeEvent >> 5 < pIVar3->max_length) {
        return (pIVar3->vector[(uint)firstTimeEvent >> 5] & 1 << ((byte)firstTimeEvent & 0x1f)) != 0
        ;
      }
    }
    func_?();
  }
code_?:
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
     FirstTimeState_OverrideFirstTimeEvent
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,bool value,
               MethodInfo *method)

{
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    if ((pBVar1->fields).m_length <= firstTimeEvent) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar1,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                (pBVar1,firstTimeEvent,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_SetFirstTimeEvent
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    if ((pBVar1->fields).m_length <= firstTimeEvent) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar1,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                (pBVar1,firstTimeEvent,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_ToString
                   (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  this_01 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_01,(MethodInfo *)0x0);
  index = 0;
  this_00 = (this->fields).bitArray;
  do {
    if (this_00 == (BitArray *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    if ((this_00->fields).m_length <= index) {
      if (this_01 != (StringBuilder *)0x0) {
        pSVar2 = (String *)
                 (*(code *)(this_01->klass->vtable).ToString.method)
                           (this_01,(this_01->klass->vtable).
                                    System_Runtime_Serialization_ISerializable_GetObjectData.
                                    methodPtr);
        return pSVar2;
      }
      goto code_?;
    }
    if (this_00 == (BitArray *)0x0) goto code_?;
    bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                      (this_00,index,(MethodInfo *)0x0);
    if (this_01 == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
              (this_01,(bVar3 != 0) + 0x30,(MethodInfo *)0x0);
    this_00 = (this->fields).bitArray;
    index = index + 1;
  } while( true );
}


/* FirstTimeState() */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState__ctor
               (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  ((FirstTimeState__Fields *)method_00)->bitArray = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* FirstTimeState(FirstTimeState) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState__ctor_1
               (FirstTimeState *this,FirstTimeState *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  pBVar1 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(pBVar1,0,(MethodInfo *)0x0);
  pFVar2 = &this->fields;
  pFVar2->bitArray = pBVar1;
  method_00 = (MethodInfo *)pFVar2;
  func_?(pFVar2,pBVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (other != (FirstTimeState *)0x0) {
    pBVar1 = (other->fields).bitArray;
    this_00 = (BitArray *)func_?();
    mscorlib.dll::System::Collections::BitArray::BitArray__ctor_3(this_00,pBVar1,(MethodInfo *)0x0);
    pFVar2->bitArray = this_00;
    func_?(pFVar2,this_00);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Byte[] get_ByteArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_get_ByteArray
          (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    uVar2 = (pBVar1->fields).m_length & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    iVar3 = (pBVar1->fields).m_length;
    pBVar4 = (Byte__Array *)
             func_?(TypeInfo__System__Byte,
                             (uint)(uVar2 != 0) + ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3));
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_CopyTo
                (pBVar1,(Array *)pBVar4,0,(MethodInfo *)0x0);
      return pBVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar5)();
  return pBVar4;
}


/* Void set_ByteArray(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_set_ByteArray
               (FirstTimeState *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_00,value,(MethodInfo *)0x0);
  (this->fields).bitArray = this_00;
  func_?(&this->fields,this_00);
  return;
}

