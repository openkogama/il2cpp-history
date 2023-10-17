
/* MVPrototype DeepCopy() */

MVPrototype *
MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_DeepCopy
          (MVPrototype *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__Add_MV__WorldObject__IntVector__System__Byte____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__get_Current__
                   );
    func_?(0x23b0);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_System::Byte_[]>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = this;
  auStack_7._0_4_ = (Object__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = 0;
  pSStack_8 = (String *)0x0;
  iStack_9 = 0;
  uStack_10._0_2_ = 0;
  uStack_10._2_2_ = 0;
  pOStack_11 = (Object *)0x0;
  pMStack_12 = (MVPrototype *)
               (*(this->klass->vtable).ShallowCopy.methodPtr)
                         (this,(this->klass->vtable).ShallowCopy.method);
  pDVar13 = (pMVar6->fields).data;
  this = (MVPrototype *)CONCAT13(0x32,this._0_3_);
  method_00 = (MethodInfo *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (pDVar13 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
               *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar13,(Object *)method_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    if (this_00 ==
        (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
         *)0x0) {
      this_00 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                 *)0x0;
    }
    else if (((this_00->klass->_1).typeHierarchyDepth <
              (
              TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
              ->_1).typeHierarchyDepth) ||
            ((Dictionary_2_MV_WorldObject_IntVector_System_Byte___Class *)
             (this_00->klass->_1).typeHierarchy
             [(
              TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
              ->_1).typeHierarchyDepth - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
            )) {
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      goto code_?;
    }
    this_01 = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)func_?();
    pDStack_14 = this_01;
    if ((this_01 != (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0) &&
       (Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__Dictionary__
                  ), pDStack_15 = this_01,
       this_00 !=
       (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
        *)0x0)) {
      pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
               Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
               Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                         (&DStack_17,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__GetEnumerator__
                         );
      uStack_18 = 0;
      auStack_7._0_4_ = pDVar16->_dictionary;
      auStack_7._4_4_ = pDVar16->_version;
      auStack_7._8_4_ = pDVar16->_index;
      pSStack_8 = (pDVar16->_current).key.AssemblyName;
      uVar19 = *(undefined8 *)&(pDVar16->_current).key.TypeName;
      uStack_10 = (undefined4)uVar19;
      pOStack_11 = (Object *)((ulonglong)uVar19 >> 0x20);
      iStack_9 = pDVar16->_getEnumeratorRetType;
      uStack_1 = 1;
      pOStack_20 = (Object *)auStack_7;
      while (bVar21 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[MV::WorldObject::IntVector,System::Object]
                     ::
                     Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                                 *)auStack_7,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__MoveNext__
                               ), pOVar22 = pOStack_11, bVar21 != 0) {
        uStack_23 = CONCAT44(uStack_10,pSStack_8);
        if (pOStack_11 == (Object *)0x0) goto code_?;
        value = (Object *)func_?(TypeInfo__System__Byte,pOStack_11[1].monitor);
        this_01 = pDStack_14;
        pMVar24 = (MonitorData *)0x0;
        while( true ) {
          if (pOVar22 == (Object *)0x0) goto code_?;
          if ((int)pOVar22[1].monitor <= (int)pMVar24) break;
          if (pOVar22[1].monitor <= pMVar24) goto code_?;
          if (value == (Object *)0x0) goto code_?;
          if (value[1].monitor <= pMVar24) goto code_?;
          (pMVar24 + 0x10)[(int)value] = pMVar24[(int)&pOVar22[2].klass];
          pMVar24 = pMVar24 + 1;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                  (pDStack_14,SUB86(uStack_23,0),value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__Add_MV__WorldObject__IntVector__System__Byte____
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)auStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      if (pMStack_12 != (MVPrototype *)0x0) {
        pDVar13 = (pMStack_12->fields).data;
        uStack_25 = 0x32;
        pOVar22 = (Object *)func_?(TypeInfo__System__Byte,&uStack_25);
        if (pDVar13 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar13,pOVar22,(Object *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          *unaff_FS_OFFSET = uStack_3;
          return pMStack_12;
        }
      }
    }
  }
code_?:
  uVar26 = func_?();
  func_?(uVar26);
  pcVar27 = (code *)swi(3);
  pMVar6 = (MVPrototype *)(*pcVar27)();
  return pMVar6;
}


/* Byte[] GetPrototypeData(Dictionary`2[MV.WorldObject.IntVector,System.Byte[]]) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_GetPrototypeData
          (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *cubeDict,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_System::Byte_[]>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_System::Byte_[]>__get_Value__
                   );
    cRam_? = '\x01';
  }
  this = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this != (BytePacker *)0x0) {
    BytePacker::BytePacker__ctor(this,(MethodInfo *)0x0);
    iStack_4 = 0;
    if (cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)cubeDict,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Count__
                        );
      BytePacker::BytePacker_Write_7(this,iVar5,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
               Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
               Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                           *)&stack0xffffff88,
                          (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                           *)cubeDict,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__GetEnumerator__
                         );
      method_00 = (MethodInfo *)pDVar6->_index;
      pSVar7 = (pDVar6->_current).key.AssemblyName;
      uVar8 = *(undefined8 *)&(pDVar6->_current).key.TypeName;
      pBVar9 = (BytePacker *)uVar8;
      value = (int16_t)((ulonglong)uVar8 >> 0x20);
      uStack_10 = (undefined2)((ulonglong)uVar8 >> 0x30);
      uStack_1 = 1;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                            *)&stack0xffffffa4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffa4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_System::Byte_[]>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          BytePacker::BytePacker_set_Position(this,0,(MethodInfo *)0x0);
          BytePacker::BytePacker_Write_7(this,iStack_4,(MethodInfo *)0x0);
          pBVar12 = BytePacker::BytePacker_ToArray(this,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pBVar12;
        }
        pBVar12 = (Byte__Array *)CONCAT22(uStack_10,value);
        uVar8 = CONCAT44(pBVar9,pSVar7);
        if (pBVar12 == (Byte__Array *)0x0) goto code_?;
        if (pBVar12->max_length == 0) break;
        cubeFlags = pBVar12->vector[0];
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        iVar5 = CubeDataPacker::CubeDataPacker_GetCubesInRow(cubeFlags,(MethodInfo *)0x0);
        if (iVar5 != 0) {
          method_00 = (MethodInfo *)uVar8;
          uVar13 = uVar8;
          BytePacker::BytePacker_Write_5(this,(int16_t)uVar8,(MethodInfo *)0x0);
          value_00 = (int16_t)((ulonglong)uVar13 >> 0x20);
          value = (int16_t)((ulonglong)uVar8 >> 0x10);
          uStack_10 = 0;
          pSVar7 = (String *)&UNK_?;
          pBVar9 = this;
          BytePacker::BytePacker_Write_5(this,value,(MethodInfo *)0x0);
          BytePacker::BytePacker_Write_5(this,value_00,(MethodInfo *)0x0);
          BytePacker::BytePacker_Write_1(this,pBVar12,(MethodInfo *)0x0);
          iStack_4 = iStack_4 + 1;
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pBVar12 = (Byte__Array *)(*pcVar14)();
  return pBVar12;
}


/* MVPrototype ShallowCopy() */

MVPrototype *
MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_ShallowCopy
          (MVPrototype *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MVPrototype);
    cRam_? = '\x01';
  }
  pMVar1 = (MVPrototype *)
           mscorlib.dll::System::Object::Object_MemberwiseClone((Object *)this,(MethodInfo *)0x0);
  if (pMVar1 == (MVPrototype *)0x0) {
    return (MVPrototype *)0x0;
  }
  if (((TypeInfo__MV__WorldObject__MVPrototype->_1).typeHierarchyDepth <=
       (pMVar1->klass->_1).typeHierarchyDepth) &&
     ((pMVar1->klass->_1).typeHierarchy
      [(TypeInfo__MV__WorldObject__MVPrototype->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__MV__WorldObject__MVPrototype)) {
    return pMVar1;
  }
  func_?(pMVar1,TypeInfo__MV__WorldObject__MVPrototype);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVPrototype *)(*pcVar2)();
  return pMVar1;
}


/* MVPrototype() */

void MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype__ctor
               (MVPrototype *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).name = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).name;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void add_LastInstanceRemoved(EventHandler`1[MV.WorldObject.LastInstanceRemovedEventArgs]) */

void MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_add_LastInstanceRemoved
               (MVPrototype *this,EventHandler_1_MV_WorldObject_LastInstanceRemovedEventArgs_ *value
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::LastInstanceRemovedEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).LastInstanceRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<MV::WorldObject::LastInstanceRemovedEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__EventHandler<MV::WorldObject::LastInstanceRemovedEventArgs>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_LastInstanceRemovedEventArgs_ *)
             func_?(&(this->fields).LastInstanceRemoved,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Boolean get_IsEmpty() */

bool MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_get_IsEmpty
               (MVPrototype *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
                   );
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MVPrototype *)CONCAT13(0x32,this._0_3_);
  this_00 = (pMVar1->fields).data;
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    if (this_01 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      if (((
           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
           ->_1).typeHierarchyDepth <= (this_01->klass->_1).typeHierarchyDepth) &&
         ((Dictionary_2_MV_WorldObject_IntVector_System_Byte___Class *)
          (this_01->klass->_1).typeHierarchy
          [(
           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
           ->_1).typeHierarchyDepth - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>
         )) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Count__
                          );
        return iVar2 == 0;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(this_01);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void remove_LastInstanceRemoved(EventHandler`1[MV.WorldObject.LastInstanceRemovedEventArgs]) */

void MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_remove_LastInstanceRemoved
               (MVPrototype *this,EventHandler_1_MV_WorldObject_LastInstanceRemovedEventArgs_ *value
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::LastInstanceRemovedEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).LastInstanceRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<MV::WorldObject::LastInstanceRemovedEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__EventHandler<MV::WorldObject::LastInstanceRemovedEventArgs>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_LastInstanceRemovedEventArgs_ *)
             func_?(&(this->fields).LastInstanceRemoved,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void set_InsertedInWorldByProfileID(Int32) */

void MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_set_InsertedInWorldByProfileID
               (MVPrototype *this,int32_t value,MethodInfo *method)

{
  (this->fields).insertedInWorldByProfileID = value;
  return;
}


/* Void set_InstanceCounter(Int32) */

void MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_set_InstanceCounter
               (MVPrototype *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__LastInstanceRemovedEventArgs);
    cRam_? = '\x01';
  }
  (this->fields).instanceCounter = value;
  if ((value < 1) &&
     ((this->fields).LastInstanceRemoved !=
      (EventHandler_1_MV_WorldObject_LastInstanceRemovedEventArgs_ *)0x0)) {
    pEVar1 = (this->fields).LastInstanceRemoved;
    pMVar2 = (MonoBehaviour *)(this->fields).id;
    this_00 = (TweenRunner_1_FloatTween_ *)
              func_?(TypeInfo__MV__WorldObject__LastInstanceRemovedEventArgs);
    if (this_00 == (TweenRunner_1_FloatTween_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields).m_CoroutineContainer = pMVar2;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void set_Scale(Single) */

void MVWorldObject.dll::MV::WorldObject::MVPrototype::MVPrototype_set_Scale
               (MVPrototype *this,float value,MethodInfo *method)

{
  (this->fields).scale = value;
  return;
}

