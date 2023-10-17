
/* String GetKeyForItem(JToken) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+JPropertKeyedCollection::
         JObject_JPropertKeyedCollection_GetKeyForItem
                   (JObject_JPropertKeyedCollection *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    cRam_? = '\x01';
  }
  if (item == (JToken *)0x0) {
    pJVar1 = (JProperty__Class *)func_?();
  }
  else {
    pJVar1 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
    if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
         (item->klass->_1).typeHierarchyDepth) &&
       ((JProperty__Class *)
        (item->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      return (String *)item[1].fields._previous;
    }
  }
  func_?(item,pJVar1);
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* Void InsertItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+JPropertKeyedCollection::
     JObject_JPropertKeyedCollection_InsertItem
               (JObject_JPropertKeyedCollection *this,int32_t index,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Linq::JToken>__get_Items__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>);
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__InsertItem_int__Newtonsoft__Json__Linq__JToken_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._.dict == (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::Object,System::Object]
    ::KeyedCollection_2_System_Object_System_Object__InsertItem
              ((KeyedCollection_2_System_Object_System_Object_ *)this,index,(Object *)item,
               MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__InsertItem_int__Newtonsoft__Json__Linq__JToken_
              );
    return;
  }
  uVar1 = (*(this->klass->vtable).GetKeyForItem.methodPtr)
                    (this,item,(this->klass->vtable).GetKeyForItem.method);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                   );
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.dict;
  if (pDVar2 != (Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    uVar3 = 0;
    uVar4 = (pDVar2->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (pDVar2->klass->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
           ) {
          pVVar5 = &(pDVar2->klass->vtable).Finalize + pDVar2->klass->interfaceOffsets[uVar3].offset
          ;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)
             func_?(pDVar2,
                             TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Linq::JToken>
                             ,1);
code_?:
    (*pVVar5->methodPtr)(pDVar2,uVar1,item,pVVar5->method);
    pIVar6 = (this->fields)._._.items;
    if (pIVar6 != (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      func_?(3,
                      TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>,
                      pIVar6,index,item);
      return;
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__KeyedCollection_System__Collections__Generic__IEqualityComparer<System::String>_
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::WeakReference`1[Object]::WeakReference_1_Object___ctor
            ((WeakReference_1_Object_ *)this,(Object *)comparer,
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
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Linq::JToken>__get_Dictionary__
                   );
    cRam_? = '\x01';
  }
  return (IDictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ *)(this->fields)._.dict;
}

