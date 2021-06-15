
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
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar1,
                        (MethodInfo *)0x0);
    if ((int)pOVar2 <= firstTimeEvent) {
      return 0;
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                        (pBVar1,firstTimeEvent,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
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
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar1,
                        (MethodInfo *)0x0);
    if ((int)pOVar2 <= firstTimeEvent) {
      pBVar1 = (this->fields).bitArray;
      if (pBVar1 == (BitArray *)0x0) goto code_?;
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar1,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_Set
                (pBVar1,firstTimeEvent,value,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_SetFirstTimeEvent
               (FirstTimeState *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar1,
                        (MethodInfo *)0x0);
    if ((int)pOVar2 <= firstTimeEvent) {
      pBVar1 = (this->fields).bitArray;
      if (pBVar1 == (BitArray *)0x0) goto code_?;
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar1,firstTimeEvent + 1,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      mscorlib.dll::System::Collections::BitArray::BitArray_Set
                (pBVar1,firstTimeEvent,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_ToString
                   (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this_00,(MethodInfo *)0x0);
  index = 0;
  pBVar1 = (this->fields).bitArray;
  do {
    if (pBVar1 == (BitArray *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    iVar4 = index;
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar1,
                        (MethodInfo *)0x0);
    if ((int)pOVar5 <= iVar4) {
      if (this_00 != (StringBuilder *)0x0) {
        pSVar3 = (String *)
                 (*(code *)(this_00->klass->vtable).ToString.method)
                           (this_00,(this_00->klass->vtable).
                                    System_Runtime_Serialization_ISerializable_GetObjectData.
                                    methodPtr);
        return pSVar3;
      }
      goto code_?;
    }
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 == (BitArray *)0x0) goto code_?;
    bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                      (pBVar1,index,(MethodInfo *)0x0);
    if (this_00 == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
              (this_00,(bVar6 != 0) + 0x30,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bitArray;
    index = index + 1;
  } while( true );
}


/* FirstTimeState() */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState__ctor
               (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_00,0,(MethodInfo *)0x0);
  (this->fields).bitArray = this_00;
  return;
}


/* Byte[] get_ByteArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_get_ByteArray
          (FirstTimeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bitArray;
  if (pBVar1 != (BitArray *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar1,
                        (MethodInfo *)0x0);
    pBVar1 = (this->fields).bitArray;
    if (pBVar1 != (BitArray *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar1,
                          (MethodInfo *)0x0);
      uVar4 = (uint)pOVar3 & 0x80000007;
      bVar5 = uVar4 == 0;
      if ((int)uVar4 < 0) {
        bVar5 = (uVar4 - 1 | 0xfffffff8) == 0xffffffff;
      }
      pBVar6 = (Byte__Array *)
               func_?(TypeInfo__System__Byte,
                               (uint)!bVar5 +
                               ((int)((int)&pOVar2->klass + ((int)pOVar2 >> 0x1f & 7U)) >> 3));
      pBVar1 = (this->fields).bitArray;
      if (pBVar1 != (BitArray *)0x0) {
        mscorlib.dll::System::Collections::BitArray::BitArray_CopyTo
                  (pBVar1,(Array *)pBVar6,0,(MethodInfo *)0x0);
        return pBVar6;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pBVar6 = (Byte__Array *)(*pcVar7)();
  return pBVar6;
}


/* Void set_ByteArray(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_set_ByteArray
               (FirstTimeState *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(this_00,value,(MethodInfo *)0x0);
  (this->fields).bitArray = this_00;
  return;
}

