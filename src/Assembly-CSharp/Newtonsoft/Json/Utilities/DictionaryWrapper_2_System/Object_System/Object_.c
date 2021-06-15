
/* Void Add(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Add
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      func_?(6,TypeInfo__System__Collections__IDictionary,pIVar2,key,value);
      return;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  func_?(0,iVar4,pIVar1,key,value);
  return;
}


/* Void Add(KeyValuePair`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Add_1
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    pOStack_3 = item.key;
    pOStack_4 = item.value;
    iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x20);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uVar6 = func_?(iVar5,&pOStack_3);
    pIVar7 = TypeInfo__System__Collections__IList;
    if (pIVar2 != (IDictionary *)0x0) {
      iVar5 = func_?(pIVar2,TypeInfo__System__Collections__IList);
      pIVar8 = TypeInfo__System__Collections__IList;
      if (iVar5 != 0) {
        iVar5 = func_?(pIVar2,TypeInfo__System__Collections__IList);
        pIVar7 = pIVar8;
        if (iVar5 != 0) {
          func_?(4,TypeInfo__System__Collections__IList,iVar5,uVar6);
          return;
        }
      }
      func_?(pIVar2,pIVar7);
    }
    func_?(0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pIVar10 = *(Il2CppClass **)(*(int *)(method->name + 0x60) + 0x1c);
  if (((uint)pIVar10->vtable[0].methodPtr & 0x10000) == 0) {
    func_?(pIVar10);
  }
  pIVar11 = pIVar1->klass;
  uVar12 = 0;
  uVar13._0_1_ = (pIVar11->_1).rank;
  uVar13._1_1_ = (pIVar11->_1).minimumAlignment;
  if (uVar13 != 0) {
    do {
      if (pIVar11->interfaceOffsets[uVar12].interfaceType == pIVar10) {
        ppMVar14 = &(&(pIVar1->klass->vtable).Remove)[pIVar11->interfaceOffsets[uVar12].offset].method
        ;
        goto code_?;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar13);
  }
  ppMVar14 = (MethodInfo **)func_?(pIVar1,pIVar10,2);
code_?:
  (*(code *)*ppMVar14)(pIVar1,item.key,item.value,ppMVar14[1]);
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Clear
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      func_?(7,TypeInfo__System__Collections__IDictionary,pIVar2);
      return;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  func_?(3,iVar4,pIVar1);
  return;
}


/* Boolean Contains(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Contains
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    pOStack_3 = item.key;
    pOStack_4 = item.value;
    iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x20);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uVar6 = func_?(iVar5,&pOStack_3);
    pIVar7 = TypeInfo__System__Collections__IList;
    if (pIVar2 != (IDictionary *)0x0) {
      iVar5 = func_?(pIVar2,TypeInfo__System__Collections__IList);
      pIVar8 = TypeInfo__System__Collections__IList;
      if (iVar5 != 0) {
        iVar5 = func_?(pIVar2,TypeInfo__System__Collections__IList);
        pIVar7 = pIVar8;
        if (iVar5 != 0) {
          bVar9 = func_?(6,TypeInfo__System__Collections__IList,iVar5,uVar6);
          return bVar9;
        }
      }
      func_?(pIVar2,pIVar7);
    }
    func_?(0);
    pcVar10 = (code *)swi(3);
    bVar9 = (*pcVar10)();
    return bVar9;
  }
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  bVar9 = func_?(4,iVar5,pIVar1,item.key,item.value);
  return bVar9;
}


/* Boolean ContainsKey(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__ContainsKey
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      bVar3 = func_?(8,TypeInfo__System__Collections__IDictionary,pIVar2,key);
      return bVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  bVar3 = func_?(1,iVar5,pIVar1,key);
  return bVar3;
}


/* Void CopyTo(KeyValuePair`2[System.Object,System.Object][], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__CopyTo
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object___Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  func_?();
  pIVar7 = (this->fields)._genericDictionary;
  if (pIVar7 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar8 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    puStack_9 = (undefined4 *)&stack0xffffffbc;
    puStack_4 = &stack0xffffffbc;
    if ((*(byte *)(iVar8 + 0xbe) & 1) == 0) {
      puStack_9 = (undefined4 *)&stack0xffffffbc;
      puStack_4 = &stack0xffffffbc;
      func_?(iVar8);
    }
    func_?(5,iVar8,pIVar7,array,arrayIndex);
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pIVar10 = (this->fields)._dictionary;
  puStack_9 = (undefined4 *)&stack0xffffffbc;
  puStack_4 = &stack0xffffffbc;
  if (pIVar10 != (IDictionary *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffbc;
    puStack_4 = &stack0xffffffbc;
    piVar11 = (int *)func_?(9,TypeInfo__System__Collections__IDictionary,pIVar10);
    uStack_12 = arrayIndex;
    uStack_1 = 0;
    while (piVar11 != (int *)0x0) {
      cVar13 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar11);
      if (cVar13 == '\0') {
        *puStack_9 = 0x8c;
        uStack_1 = 0xffffffff;
        iVar8 = func_?(piVar11,TypeInfo__System__IDisposable);
        if (iVar8 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar8);
        }
        goto code_?;
      }
      iVar8 = *piVar11;
      uVar14 = 0;
      if (*(ushort *)(iVar8 + 0xb6) != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(iVar8 + 0x58) + (uint)uVar14 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar15 = (undefined4 *)
                     (iVar8 + (*(int *)(*(int *)(iVar8 + 0x58) + 4 + (uint)uVar14 * 8) + 0x18) * 8)
            ;
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(iVar8 + 0xb6));
      }
      puVar15 = (undefined4 *)func_?(piVar11,TypeInfo__System__Collections__IEnumerator,0);
code_?:
      piVar16 = (int *)(*(code *)*puVar15)(piVar11,puVar15[1]);
      uVar17 = CONCAT44(TypeInfo__System__Collections__DictionaryEntry,piVar16);
      unaff_ESI = piVar11;
      if (piVar16 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar16 + 0x20) !=
          (TypeInfo__System__Collections__DictionaryEntry->_0).element_class) {
code_?:
        func_?(uVar17);
        break;
      }
      puVar18 = (undefined8 *)func_?(piVar16);
      uVar19 = uStack_12;
      uStack_6 = *puVar18;
      uStack_12 = uStack_12 + 1;
      if (array == (KeyValuePair_2_System_Object_System_Object___Array *)0x0) break;
      iStack_20 = func_?(&uStack_6,0);
      iVar8 = func_?(&uStack_6,0);
      uStack_21 = 0;
      unaff_ESI = *(int **)(*(int *)(method->name + 0x60) + 8);
      if ((*(byte *)((int)unaff_ESI + 0xbe) & 1) == 0) {
        func_?(unaff_ESI);
      }
      if (iVar8 != 0) {
        iStack_22 = func_?(iVar8,unaff_ESI);
        if (iStack_22 != 0) goto code_?;
code_?:
        uVar17 = func_?(iVar8,unaff_ESI);
        goto code_?;
      }
      iStack_22 = 0;
code_?:
      unaff_ESI = *(int **)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)((int)unaff_ESI + 0xbe) & 1) == 0) {
        func_?(unaff_ESI);
      }
      iVar8 = iStack_20;
      if (iStack_20 == 0) {
        iVar23 = 0;
      }
      else {
        iVar23 = func_?(iStack_20,unaff_ESI);
        if (iVar23 == 0) goto code_?;
      }
      func_?(&uStack_21,iVar23,iStack_22,
                      *(undefined4 *)(*(int *)(method->name + 0x60) + 0x24));
      if (array->max_length <= uVar19) {
        uVar24 = func_?();
        func_?(uVar24,0,0);
        goto code_?;
      }
      array->vector[uVar19].key = (Object *)uStack_21;
      array->vector[uVar19].value = uStack_21._4_4_;
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* IEnumerator`1[KeyValuePair`2[System.Object,System.Object]] GetEnumerator() */

IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__GetEnumerator
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                       ((IEnumerable *)(this->fields)._dictionary,
                        System__Collections__Generic__IEnumerable<System::Collections::DictionaryEntry>_MethodInfo__System__Linq__Enumerable__Cast<System::Collections::DictionaryEntry>_System__Collections__IEnumerable_
                       );
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x34);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (**(int **)(iVar3 + 0x5c) == 0) {
      iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x3c);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      uVar4 = func_?(iVar3);
      puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x40);
      (*(code *)*puVar5)(uVar4,0,*(undefined4 *)(*(int *)(method->name + 0x60) + 0x38),puVar5);
      iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x34);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      **(undefined4 **)(iVar3 + 0x5c) = uVar4;
    }
    pcVar6 = method->name;
    iVar3 = *(int *)(*(int *)(pcVar6 + 0x60) + 0x34);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
      pcVar6 = method->name;
    }
    pIVar1 = (IDictionary_2_System_Object_System_Object_ *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar6 + 0x60) + 0x44))
                       (pIVar2,**(undefined4 **)(iVar3 + 0x5c),
                        *(undefined4 **)(*(int *)(pcVar6 + 0x60) + 0x44));
    if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
      func_?(0);
      pcVar7 = (code *)swi(3);
      pIVar8 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)(*pcVar7)();
      return pIVar8;
    }
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x30);
  }
  else {
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x30);
  }
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  pIVar8 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)
           func_?(0,iVar3,pIVar1);
  return pIVar8;
}


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Remove
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(2,iVar2,pIVar1,key);
    return bVar3;
  }
  pIVar4 = (this->fields)._dictionary;
  if (pIVar4 != (IDictionary *)0x0) {
    cVar5 = func_?(8,TypeInfo__System__Collections__IDictionary,pIVar4,key);
    if (cVar5 == '\0') {
      return 0;
    }
    pIVar4 = (this->fields)._dictionary;
    if (pIVar4 != (IDictionary *)0x0) {
      func_?(10,TypeInfo__System__Collections__IDictionary,pIVar4,key);
      return 1;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean Remove(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Remove_1
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = item.value;
  pOVar2 = item.key;
  pIVar3 = (this->fields)._genericDictionary;
  if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar4 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    bVar5 = func_?(6,iVar4,pIVar3,pOVar2,pOVar1);
    return bVar5;
  }
  pIVar6 = (this->fields)._dictionary;
  uVar7 = func_?(&item,*(undefined4 *)(*(int *)(method->name + 0x60) + 0x28));
  if (pIVar6 != (IDictionary *)0x0) {
    cVar8 = func_?(8,TypeInfo__System__Collections__IDictionary,pIVar6,uVar7);
    if (cVar8 == '\0') {
      return 1;
    }
    pIVar6 = (this->fields)._dictionary;
    uVar7 = func_?(&item,*(undefined4 *)(*(int *)(method->name + 0x60) + 0x28));
    if (pIVar6 != (IDictionary *)0x0) {
      pOVar2 = (Object *)func_?(2,TypeInfo__System__Collections__IDictionary,pIVar6,uVar7);
      pOVar1 = (Object *)
               func_?(&item,*(undefined4 *)(*(int *)(method->name + 0x60) + 0x2c));
      bVar5 = mscorlib.dll::System::Object::Object_Equals_1(pOVar2,pOVar1,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return 0;
      }
      pIVar6 = (this->fields)._dictionary;
      uVar7 = func_?(&item,*(undefined4 *)(*(int *)(method->name + 0x60) + 0x28));
      if (pIVar6 != (IDictionary *)0x0) {
        func_?(10,TypeInfo__System__Collections__IDictionary,pIVar6,uVar7);
        return 1;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar5 = (*pcVar9)();
  return bVar5;
}


/* Void Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Remove_2
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      func_?(10,TypeInfo__System__Collections__IDictionary,pIVar2,key);
      return;
    }
code_?:
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = *(int *)(*(int *)(method->name + 0x60) + 4);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  if (key == (Object *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = func_?(key,iVar4);
    if (iVar5 == 0) {
      func_?(key,iVar4);
      goto code_?;
    }
  }
  iVar4 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  func_?(2,iVar4,pIVar1,iVar5);
  return;
}


/* Void System.Collections.ICollection.CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__System_Collections_ICollection_CopyTo
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Array *array,int32_t index,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      func_?(3,TypeInfo__System__Collections__ICollection,pIVar2,array,index);
      return;
    }
code_?:
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = *(int *)(*(int *)(method->name + 0x60) + 0x54);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  if (array == (Array *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = func_?(array,iVar4);
    if (iVar5 == 0) {
      func_?(array,iVar4);
      goto code_?;
    }
  }
  iVar4 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  func_?(5,iVar4,pIVar1,iVar5,index);
  return;
}


/* Boolean System.Collections.ICollection.get_IsSynchronized() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::
     DictionaryWrapper_2_System_Object_System_Object__System_Collections_ICollection_get_IsSynchronized
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      bVar2 = func_?(1,TypeInfo__System__Collections__ICollection,pIVar1);
      return bVar2;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  return 0;
}


/* Object System.Collections.ICollection.get_SyncRoot() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System
         ::Object]::
         DictionaryWrapper_2_System_Object_System_Object__System_Collections_ICollection_get_SyncRoot
                   (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  location1 = &(this->fields)._syncRoot;
  pOVar1 = *location1;
  if (pOVar1 == (Object *)0x0) {
    method_00 = TypeInfo__System__Object;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
              (location1,(Object *)this_00,(Object *)0x0,(MethodInfo *)0x0);
    pOVar1 = *location1;
  }
  return pOVar1;
}


/* Void System.Collections.IDictionary.Add(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_Add
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      func_?(6,TypeInfo__System__Collections__IDictionary,pIVar2,key,value);
      return;
    }
    goto code_?;
  }
  iVar3 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  if (value == (Object *)0x0) {
    this = (DictionaryWrapper_2_System_Object_System_Object_ *)value;
code_?:
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (key == (Object *)0x0) {
      iVar4 = 0;
code_?:
      iVar3 = **(int **)(method->name + 0x60);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      func_?(0,iVar3,pIVar1,iVar4,this);
      return;
    }
    iVar4 = func_?(key,iVar3);
    value = key;
    if (iVar4 != 0) goto code_?;
  }
  else {
    this = (DictionaryWrapper_2_System_Object_System_Object_ *)func_?(value,iVar3);
    if (this != (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) goto code_?;
  }
  func_?(value,iVar3);
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean System.Collections.IDictionary.Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::
     DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_Contains
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      bVar3 = func_?(8,TypeInfo__System__Collections__IDictionary,pIVar2,key);
      return bVar3;
    }
code_?:
    func_?(0);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 4);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  if (key == (Object *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = func_?(key,iVar5);
    if (iVar6 == 0) {
      func_?(key,iVar5);
      goto code_?;
    }
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  bVar3 = func_?(1,iVar5,pIVar1,iVar6);
  return bVar3;
}


/* IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() */

IDictionaryEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_GetEnumerator
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      pIVar3 = (IDictionaryEnumerator *)
               func_?(9,TypeInfo__System__Collections__IDictionary,pIVar2);
      return pIVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pIVar3 = (IDictionaryEnumerator *)(*pcVar4)();
    return pIVar3;
  }
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x30);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  value = (Object *)func_?(0,iVar5,pIVar1);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull(value,StringLiteral_e,(MethodInfo *)0x0);
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x4c);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?();
  }
  pIVar3 = (IDictionaryEnumerator *)func_?(iVar5);
  return pIVar3;
}


/* Boolean System.Collections.IDictionary.get_IsFixedSize() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::
     DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_get_IsFixedSize
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      bVar2 = func_?(0,TypeInfo__System__Collections__IDictionary,pIVar1);
      return bVar2;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  return 0;
}


/* Object System.Collections.IDictionary.get_Item(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System
         ::Object]::
         DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_get_Item
                   (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      pOVar3 = (Object *)func_?(2,TypeInfo__System__Collections__IDictionary,pIVar2,key);
      return pOVar3;
    }
code_?:
    func_?(0);
    pcVar4 = (code *)swi(3);
    pOVar3 = (Object *)(*pcVar4)();
    return pOVar3;
  }
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 4);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  if (key == (Object *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = func_?(key,iVar5);
    if (iVar6 == 0) {
      func_?(key,iVar5);
      goto code_?;
    }
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  pOVar3 = (Object *)func_?(4,iVar5,pIVar1,iVar6);
  return pOVar3;
}


/* ICollection System.Collections.IDictionary.get_Keys() */

ICollection *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_get_Keys
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      pIVar3 = (ICollection *)func_?(4,TypeInfo__System__Collections__IDictionary,pIVar2);
      return pIVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pIVar3 = (ICollection *)(*pcVar4)();
    return pIVar3;
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  func_?(6,iVar5,pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (ICollection *)(*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x10))();
  return pIVar3;
}


/* ICollection System.Collections.IDictionary.get_Values() */

ICollection *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_get_Values
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      pIVar3 = (ICollection *)func_?(5,TypeInfo__System__Collections__IDictionary,pIVar2);
      return pIVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pIVar3 = (ICollection *)(*pcVar4)();
    return pIVar3;
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  func_?(7,iVar5,pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (ICollection *)(*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))();
  return pIVar3;
}


/* Void System.Collections.IDictionary.set_Item(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::
     DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_set_Item
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      func_?(3,TypeInfo__System__Collections__IDictionary,pIVar2,key,value);
      return;
    }
    goto code_?;
  }
  iVar3 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  if (value == (Object *)0x0) {
    this = (DictionaryWrapper_2_System_Object_System_Object_ *)value;
code_?:
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (key == (Object *)0x0) {
      iVar4 = 0;
code_?:
      iVar3 = **(int **)(method->name + 0x60);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      func_?(5,iVar3,pIVar1,iVar4,this);
      return;
    }
    iVar4 = func_?(key,iVar3);
    value = key;
    if (iVar4 != 0) goto code_?;
  }
  else {
    this = (DictionaryWrapper_2_System_Object_System_Object_ *)func_?(value,iVar3);
    if (this != (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) goto code_?;
  }
  func_?(value,iVar3);
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IEnumerable_GetEnumerator
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (this != (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar1 = (IEnumerator *)(*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x48))();
    return pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar1 = (IEnumerator *)(*pcVar2)();
  return pIVar1;
}


/* Boolean TryGetValue(Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__TryGetValue
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object **value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(3,iVar2,pIVar1,key,value);
    return bVar3;
  }
  pIVar4 = (this->fields)._dictionary;
  if (pIVar4 == (IDictionary *)0x0) goto code_?;
  cVar5 = func_?(8,TypeInfo__System__Collections__IDictionary,pIVar4,key);
  if (cVar5 == '\0') {
    *value = (Object *)0x0;
    return 0;
  }
  pIVar4 = (this->fields)._dictionary;
  if (pIVar4 == (IDictionary *)0x0) goto code_?;
  iVar6 = func_?(2,TypeInfo__System__Collections__IDictionary,pIVar4,key);
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  if (iVar6 == 0) {
    pOVar7 = (Object *)0x0;
code_?:
    *value = pOVar7;
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    if (iVar6 == 0) {
      return 1;
    }
    iVar8 = func_?(iVar6,iVar2);
    if (iVar8 != 0) {
      return 1;
    }
  }
  else {
    pOVar7 = (Object *)func_?(iVar6,iVar2);
    if (pOVar7 != (Object *)0x0) goto code_?;
  }
  func_?(iVar6,iVar2);
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* KeyValuePair`2[System.Object,System.Object] <GetEnumerator>m__0(DictionaryEntry) */

KeyValuePair_2_System_Object_System_Object_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object___GetEnumerator_m__0
          (DictionaryEntry de,MethodInfo *method)

{
  iStack_1 = func_?(&de,0);
  iVar2 = func_?(&de,0);
  KStack_3.key = (Object *)0x0;
  KStack_3.value = (Object *)0x0;
  pcVar4 = method->name;
  pcStack_5 = pcVar4;
  if ((pcVar4[0xbe] & 1U) == 0) {
    func_?(pcVar4);
    pcVar4 = method->name;
  }
  if ((pcVar4[0xbe] & 1U) == 0) {
    func_?(pcVar4);
  }
  iVar6 = *(int *)(*(int *)(pcVar4 + 0x60) + 8);
  if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
    func_?(iVar6);
  }
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = func_?(iVar2,iVar6);
    if (iVar7 == 0) goto code_?;
  }
  pcVar4 = method->name;
  if ((pcVar4[0xbe] & 1U) == 0) {
    func_?(pcVar4);
  }
  iVar6 = *(int *)(*(int *)(pcVar4 + 0x60) + 4);
  if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
    func_?(iVar6);
  }
  iVar2 = iStack_1;
  if (iStack_1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = func_?(iStack_1,iVar6);
    if (iVar8 == 0) {
code_?:
      func_?(iVar2,iVar6);
      pcVar9 = (code *)swi(3);
      KVar10 = (KeyValuePair_2_System_Object_System_Object_)(*pcVar9)();
      return KVar10;
    }
  }
  func_?(&KStack_3,iVar8,iVar7,*(undefined4 *)(*(int *)(pcStack_5 + 0x60) + 0x24));
  return KStack_3;
}


/* DictionaryWrapper`2[System.Object,System.Object](IDictionary) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object___ctor
               (DictionaryWrapper_2_System_Object_System_Object_ *this,IDictionary *dictionary,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)dictionary,StringLiteral_dictionary,(MethodInfo *)0x0);
    (this->fields)._dictionary = dictionary;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DictionaryWrapper`2[System.Object,System.Object](IDictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object___ctor_1
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               IDictionary_2_System_Object_System_Object_ *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)dictionary,StringLiteral_dictionary,(MethodInfo *)0x0);
    (this->fields)._genericDictionary = dictionary;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System
        ::Object]::DictionaryWrapper_2_System_Object_System_Object__get_Count
                  (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      iVar3 = func_?(0,TypeInfo__System__Collections__ICollection,pIVar2);
      return iVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    iVar3 = (*pcVar4)();
    return iVar3;
  }
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  iVar3 = func_?(0,iVar5,pIVar1);
  return iVar3;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__get_IsReadOnly
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      bVar3 = func_?(1,TypeInfo__System__Collections__IDictionary,pIVar2);
      return bVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  bVar3 = func_?(1,iVar5,pIVar1);
  return bVar3;
}


/* Object get_Item(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System
         ::Object]::DictionaryWrapper_2_System_Object_System_Object__get_Item
                   (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    pOVar3 = (Object *)func_?(4,iVar2,pIVar1,key);
    return pOVar3;
  }
  pIVar4 = (this->fields)._dictionary;
  if (pIVar4 != (IDictionary *)0x0) {
    iVar5 = func_?(2,TypeInfo__System__Collections__IDictionary,pIVar4,key);
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    if (iVar5 == 0) {
      return (Object *)0x0;
    }
    pOVar3 = (Object *)func_?(iVar5,iVar2);
    if (pOVar3 != (Object *)0x0) {
      return pOVar3;
    }
    func_?(iVar5,iVar2);
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar6)();
  return pOVar3;
}


/* ICollection`1[System.Object] get_Keys() */

ICollection_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__get_Keys
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      uVar3 = func_?(4,TypeInfo__System__Collections__IDictionary,pIVar2);
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
      (*(code *)*puVar4)(uVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar5 = (ICollection_1_System_Object_ *)
               (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x10))();
      return pIVar5;
    }
    func_?(0);
    pcVar6 = (code *)swi(3);
    pIVar5 = (ICollection_1_System_Object_ *)(*pcVar6)();
    return pIVar5;
  }
  iVar7 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
    func_?(iVar7);
  }
  pIVar5 = (ICollection_1_System_Object_ *)func_?(6,iVar7,pIVar1);
  return pIVar5;
}


/* ICollection`1[System.Object] get_Values() */

ICollection_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__get_Values
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      uVar3 = func_?(5,TypeInfo__System__Collections__IDictionary,pIVar2);
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar4)(uVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar5 = (ICollection_1_System_Object_ *)
               (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))();
      return pIVar5;
    }
    func_?(0);
    pcVar6 = (code *)swi(3);
    pIVar5 = (ICollection_1_System_Object_ *)(*pcVar6)();
    return pIVar5;
  }
  iVar7 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar7 + 0xbe) & 1) == 0) {
    func_?(iVar7);
  }
  pIVar5 = (ICollection_1_System_Object_ *)func_?(7,iVar7,pIVar1);
  return pIVar5;
}


/* Void set_Item(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__set_Item
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericDictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      func_?(3,TypeInfo__System__Collections__IDictionary,pIVar2,key,value);
      return;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  func_?(5,iVar4,pIVar1,key,value);
  return;
}

