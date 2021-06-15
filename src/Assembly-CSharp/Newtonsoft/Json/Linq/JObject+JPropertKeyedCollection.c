
/* String GetKeyForItem(JToken) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+JPropertKeyedCollection::
         JObject_JPropertKeyedCollection_GetKeyForItem
                   (JObject_JPropertKeyedCollection *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item == (JToken *)0x0) {
    func_?(0);
    item = extraout_ECX;
    pJVar1 = extraout_EDX;
  }
  else {
    bVar2 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
    pJVar3 = item->klass;
    bVar4 = (pJVar3->_1).naturalAligment;
    if ((bVar4 < bVar2) ||
       ((JProperty__Class *)(pJVar3->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pJVar6 = (JToken *)0x0;
    if (bVar5) {
      pJVar6 = item;
    }
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
    if (pJVar6 != (JToken *)0x0) {
      if ((bVar4 < bVar2) ||
         ((JProperty__Class *)(pJVar3->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pJVar6 = (JToken *)0x0;
      if (bVar5) {
        pJVar6 = item;
      }
      if (pJVar6 != (JToken *)0x0) {
        return (String *)pJVar6[1].fields._previous;
      }
    }
  }
  func_?(item,pJVar1);
  pcVar7 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar7)();
  return pSVar8;
}


/* Void InsertItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+JPropertKeyedCollection::
     JObject_JPropertKeyedCollection_InsertItem
               (JObject_JPropertKeyedCollection *this,int32_t index,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)this,
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                     );
  if (pOVar1 == (Object *)0x0) {
    mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::
    Json::Serialization::JsonProperty]::
    KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty__InsertItem
              ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
               index,(JsonProperty *)item,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__InsertItem_int__Newtonsoft__Json__Linq__JToken_
              );
    return;
  }
  (*(code *)(this->klass->vtable).GetKeyForItem.method)(this,item,this->klass[1]._0.image);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)this,
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                     );
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pOVar2->_1).rank;
    uVar4._1_1_ = (pOVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pOVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
           ) {
          ppcVar5 = &pOVar2[1]._0.namespaze + pOVar2->interfaceOffsets[uVar3].offset * 2;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppcVar5 = (char **)func_?(pOVar1,
                                       TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                                       ,5,pOVar2,0);
code_?:
    (*(code *)*ppcVar5)(pOVar1,(((Il2CppType *)(ppcVar5 + 1))->data).dummy,item);
    pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)this,
                        MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Linq::JToken>__get_Items__
                       );
    if (pIVar6 != (IList_1_VoxelHit_ *)0x0) {
      func_?(1,
                      TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>,
                      pIVar6,index,item);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* JObject+JPropertKeyedCollection(IEqualityComparer`1[System.String]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+JPropertKeyedCollection::
     JObject_JPropertKeyedCollection__ctor
               (JObject_JPropertKeyedCollection *this,IEqualityComparer_1_System_String_ *comparer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Linq::JToken]::KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Linq_JToken_ *)this,comparer,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
            );
  return;
}


/* IDictionary`2[System.String,Newtonsoft.Json.Linq.JToken] get_Dictionary() */

IDictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+JPropertKeyedCollection::
JObject_JPropertKeyedCollection_get_Dictionary
          (JObject_JPropertKeyedCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IDictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)
           System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)this,
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                     );
  return pIVar1;
}

