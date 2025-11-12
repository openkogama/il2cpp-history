
/* Boolean HasFirstTimeEventOccured(FirstTimeEvent) */

bool MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
     FirstTimeState_HasFirstTimeEventOccured
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (firstTimeEvent == FirstTimeEvent__Enum_NoEvent) {
    return 1;
  }
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 == (BitArray *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pBVar1->fields).m_length <= firstTimeEvent) {
    return 0;
  }
  if ((firstTimeEvent < FirstTimeEvent__Enum_SkipEvent) ||
     ((pBVar1->fields).m_length <= firstTimeEvent)) {
    aFStackX_10[0] = firstTimeEvent;
    actualValue = (Object *)func_?(uRam_?,aFStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this_00,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if ((uint)firstTimeEvent >> 5 < (uint)pIVar5->max_length) {
      return (pIVar5->vector[(uint)firstTimeEvent >> 5] & 1 << ((byte)firstTimeEvent & 0x1f)) != 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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
      if ((firstTimeEvent < FirstTimeEvent__Enum_SkipEvent) ||
         ((pBVar1->fields).m_length <= firstTimeEvent)) {
        actualValue = (Object *)func_?(uRam_?,&stack0x00000010,value,0);
        uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
        message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
        paramName = (String *)func_?(&StringLiteral_index);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                  (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__System__Collections__BitArray__Set_int__bool_);
        FUN_?(this_00,uVar2);
      }
      else {
        pIVar3 = (pBVar1->fields).m_array;
        if (value == 0) {
          if (pIVar3 == (Int32__Array *)0x0) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar5 = (uint)firstTimeEvent >> 5;
          if (uVar5 < (uint)pIVar3->max_length) {
            pIVar3->vector[uVar5] = pIVar3->vector[uVar5] & ~(1 << (firstTimeEvent & 0x1f));
            piVar6 = &(pBVar1->fields)._version;
            *piVar6 = *piVar6 + 1;
            return;
          }
        }
        else {
          if (pIVar3 == (Int32__Array *)0x0) goto code_?;
          uVar5 = (uint)firstTimeEvent >> 5;
          if (uVar5 < (uint)pIVar3->max_length) {
            pIVar3->vector[uVar5] = pIVar3->vector[uVar5] | 1 << (firstTimeEvent & 0x1f);
            piVar6 = &(pBVar1->fields)._version;
            *piVar6 = *piVar6 + 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      if ((firstTimeEvent < FirstTimeEvent__Enum_SkipEvent) ||
         ((pBVar1->fields).m_length <= firstTimeEvent)) {
        aFStackX_10[0] = firstTimeEvent;
        actualValue = (Object *)func_?(uRam_?,aFStackX_10,1,0);
        uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
        this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
        message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
        paramName = (String *)func_?(&StringLiteral_index);
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                  (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__System__Collections__BitArray__Set_int__bool_);
        FUN_?(this_00,uVar2);
      }
      else {
        pIVar3 = (pBVar1->fields).m_array;
        if (pIVar3 == (Int32__Array *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar5 = (uint)firstTimeEvent >> 5;
        if (uVar5 < (uint)pIVar3->max_length) {
          pIVar3->vector[uVar5] = pIVar3->vector[uVar5] | 1 << (firstTimeEvent & 0x1f);
          piVar6 = &(pBVar1->fields)._version;
          *piVar6 = *piVar6 + 1;
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_ToString
                   (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bitArray;
  index = 0;
  if (pBVar1 != (BitArray *)0x0) {
    while (index < (pBVar1->fields).m_length) {
      pBVar1 = (this->fields).bitArray;
      if ((pBVar1 == (BitArray *)0x0) ||
         (bVar2 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                            (pBVar1,index,(MethodInfo *)0x0), this_00 == (StringBuilder *)0x0))
      goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this_00,bVar2 + 0x30,(MethodInfo *)0x0);
      pBVar1 = (this->fields).bitArray;
      index = index + 1;
      if (pBVar1 == (BitArray *)0x0) goto code_?;
    }
    if (this_00 != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (String *)
               (*(this_00->klass->vtable).ToString.methodPtr)
                         (this_00,(this_00->klass->vtable).ToString.method);
      return pSVar3;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* FirstTimeState() */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState__ctor
               (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(this_00,0,0,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).bitArray = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* FirstTimeState(FirstTimeState) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState__ctor_1
               (FirstTimeState *this,FirstTimeState *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(pBVar1,0,0,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).bitArray = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (other == (FirstTimeState *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pBVar1 = (other->fields).bitArray;
  this_00 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_3(this_00,pBVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).bitArray = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Byte[] get_ByteArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_get_ByteArray
          (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).bitArray != (BitArray *)0x0) {
    iVar1 = (((this->fields).bitArray)->fields).m_length;
    uVar2 = iVar1 >> 0x1f & 7;
    uVar3 = iVar1 + uVar2;
    pBVar4 = (Byte__Array *)
             FUN_?(TypeInfo__System__Byte,(uint)((uVar3 & 7) != uVar2) + ((int)uVar3 >> 3));
    this_00 = (this->fields).bitArray;
    if (this_00 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_CopyTo
                (this_00,(Array *)pBVar4,0,(MethodInfo *)0x0);
      return pBVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar5)();
  return pBVar4;
}


/* Void set_ByteArray(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_set_ByteArray
               (FirstTimeState *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_00,value,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).bitArray = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

