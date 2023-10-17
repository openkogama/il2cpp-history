
/* Void Add(KeyValuePair`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Add
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    unaff_ESI = (this->fields)._dictionary;
    pOStack_1 = item.key;
    pOStack_2 = item.value;
    pvVar3 = method->klass->rgctx_data[0x11].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    uVar4 = func_?(pvVar3,&pOStack_1);
    pIVar5 = TypeInfo__System__Collections__IList;
    if (unaff_ESI != (IDictionary *)0x0) {
      iVar6 = func_?(unaff_ESI,TypeInfo__System__Collections__IList);
      pIVar7 = TypeInfo__System__Collections__IList;
      if (iVar6 != 0) {
        iVar6 = func_?(unaff_ESI,TypeInfo__System__Collections__IList);
        pIVar5 = pIVar7;
        if (iVar6 != 0) {
          func_?(2,TypeInfo__System__Collections__IList,iVar6,uVar4);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    pIVar8 = (this->fields)._genericDictionary;
    pIVar5 = (IList__Class *)0x0;
    if (pIVar8 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pIVar9 = method->klass->rgctx_data[0xf].rgctxDataDummy;
      if (pIVar9->initialized_and_no_error == 0) {
        pIVar9 = (Il2CppClass *)func_?(pIVar9);
      }
      uVar10 = 0;
      uVar11 = (pIVar8->klass->_1).interface_offsets_count;
      if (uVar11 != 0) {
        do {
          if (pIVar8->klass->interfaceOffsets[uVar10].interfaceType == pIVar9) {
            pVVar12 = &(pIVar8->klass->vtable).get_Keys +
                     pIVar8->klass->interfaceOffsets[uVar10].offset;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      pVVar12 = (VirtualInvokeData *)func_?(pIVar8,pIVar9,2);
code_?:
      (*pVVar12->methodPtr)(pIVar8,item.key,item.value,pVVar12->method);
      return;
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,pIVar5);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Add(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Add_1
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      func_?(5,TypeInfo__System__Collections__IDictionary,pIVar1,key,value);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericDictionary;
    if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      func_?(5,pvVar3,pIVar2,key,value);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Clear
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      func_?(6,TypeInfo__System__Collections__IDictionary,pIVar1);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericDictionary;
    if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar3 = method->klass->rgctx_data[0xf].rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      func_?(3,pvVar3,pIVar2);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean Contains(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Contains
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    pOStack_2 = item.key;
    pOStack_3 = item.value;
    pvVar4 = method->klass->rgctx_data[0x11].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    uVar5 = func_?(pvVar4,&pOStack_2);
    pIVar6 = TypeInfo__System__Collections__IList;
    if (pIVar1 != (IDictionary *)0x0) {
      iVar7 = func_?(pIVar1,TypeInfo__System__Collections__IList);
      pIVar8 = TypeInfo__System__Collections__IList;
      if (iVar7 != 0) {
        iVar7 = func_?(pIVar1,TypeInfo__System__Collections__IList);
        pIVar6 = pIVar8;
        if (iVar7 != 0) {
          bVar9 = func_?(3,TypeInfo__System__Collections__IList,iVar7,uVar5);
          return bVar9;
        }
      }
      func_?(pIVar1,pIVar6);
    }
  }
  else {
    pIVar10 = (this->fields)._genericDictionary;
    if (pIVar10 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data[0xf].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar9 = func_?(4,pvVar4,pIVar10,item.key,item.value);
      return bVar9;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
}


/* Boolean ContainsKey(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__ContainsKey
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      bVar2 = func_?(4,TypeInfo__System__Collections__IDictionary,pIVar1,key);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar2 = func_?(4,pvVar4,pIVar3,key);
      return bVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void CopyTo(KeyValuePair`2[System.Object,System.Object][], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__CopyTo
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object___Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  _Stack_8.__klassIndex = -1;
  pOStack_1 = (Object *)&DAT_?;
  pcStack_2 = (char *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pcStack_2;
  pIStack_3 = (Il2CppArrayBounds *)&stack0xffffffb0;
  pIVar4 = (Il2CppArrayBounds *)&stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__DictionaryEntry);
    func_?(&TypeInfo__System__Collections__IDictionary);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  pKStack_5 = (KeyValuePair_2_System_Object_System_Object___Array__Class *)0x0;
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar6 = (this->fields)._dictionary;
    if (pIVar6 != (IDictionary *)0x0) {
      pIStack_7 = (Il2CppImage *)
                   func_?(9,TypeInfo__System__Collections__IDictionary,pIVar6);
      unaff_ESI = (IEnumerator__Class *)&pIStack_7;
      unaff_EBX = (KeyValuePair_2_System_Object_System_Object___Array *)&pKStack_5;
      _Stack_8.__klassIndex = 1;
      this = (DictionaryWrapper_2_System_Object_System_Object_ *)arrayIndex;
      while (pIStack_7 != (Il2CppImage *)0x0) {
        cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_7);
        pIVar9 = pIStack_7;
        pIVar10 = TypeInfo__System__Collections__IEnumerator;
        if (cVar8 == '\0') {
          _Stack_8.__klassIndex = -1;
          pKStack_5 = (KeyValuePair_2_System_Object_System_Object___Array__Class *)
                       func_?(pIStack_7,TypeInfo__System__IDisposable);
          if (pKStack_5 != (KeyValuePair_2_System_Object_System_Object___Array__Class *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,pKStack_5);
            *unaff_FS_OFFSET = pcStack_2;
            return;
          }
          goto code_?;
        }
        if (pIStack_7 == (Il2CppImage *)0x0) break;
        unaff_EBX = (KeyValuePair_2_System_Object_System_Object___Array *)0x0;
        uVar11 = 0;
        uVar12 = *(ushort *)(pIStack_7->name + 0xb2);
        if (uVar12 != 0) {
          unaff_EBX = *(KeyValuePair_2_System_Object_System_Object___Array **)
                       (pIStack_7->name + 0x58);
          do {
            if ((IEnumerator__Class *)unaff_EBX->vector[uVar11 - 2].key ==
                TypeInfo__System__Collections__IEnumerator) {
              pcVar13 = pIStack_7->name +
                       *(int *)(*(int *)(pIStack_7->name + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xc4
              ;
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar12);
        }
        pcVar13 = (char *)func_?(pIStack_7,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        piVar14 = (int *)(**(code **)pcVar13)(pIVar9,*(undefined4 *)(pcVar13 + 4));
        uVar15 = CONCAT44(TypeInfo__System__Collections__DictionaryEntry,piVar14);
        unaff_ESI = pIVar10;
        if (piVar14 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar14 + 0x20) !=
            (TypeInfo__System__Collections__DictionaryEntry->_0).element_class)
        goto code_?;
        puVar16 = (undefined4 *)func_?(piVar14);
        pKStack_17 = (KeyValuePair_2_System_Object_System_Object___Array *)*puVar16;
        unaff_EBX = (KeyValuePair_2_System_Object_System_Object___Array *)puVar16[1];
        pDStack_18 = this;
        pDStack_19 = this;
        this = (DictionaryWrapper_2_System_Object_System_Object_ *)((int)&this->klass + 1);
        VStack_20.Item1 = (Object *)0x0;
        VStack_20.Item2 = (Object *)0x0;
        pMStack_21 = method->klass->rgctx_data[0x15].method;
        unaff_ESI = method->klass->rgctx_data[3].rgctxDataDummy;
        if ((unaff_ESI->_1).initialized_and_no_error == 0) {
          unaff_ESI = (IEnumerator__Class *)func_?(unaff_ESI);
        }
        if (unaff_EBX == (KeyValuePair_2_System_Object_System_Object___Array *)0x0) {
          item2 = (Object *)0x0;
        }
        else {
          item2 = (Object *)func_?(unaff_EBX,unaff_ESI);
          if (item2 == (Object *)0x0) goto code_?;
        }
        unaff_ESI = method->klass->rgctx_data[2].rgctxDataDummy;
        if ((unaff_ESI->_1).initialized_and_no_error == 0) {
          unaff_ESI = (IEnumerator__Class *)func_?(unaff_ESI);
        }
        unaff_EBX = pKStack_17;
        if (pKStack_17 == (KeyValuePair_2_System_Object_System_Object___Array *)0x0) {
          item1 = (Object *)0x0;
        }
        else {
          item1 = (Object *)func_?(pKStack_17,unaff_ESI);
          if (item1 == (Object *)0x0) goto code_?;
        }
        mscorlib.dll::System::ValueTuple`2[Object,Object]::ValueTuple_2_Object_Object___ctor
                  (&VStack_20,item1,item2,pMStack_21);
        unaff_EBX = array;
        if (array == (KeyValuePair_2_System_Object_System_Object___Array *)0x0) break;
        if ((DictionaryWrapper_2_System_Object_System_Object_ *)array->max_length <= pDStack_18) {
          func_?();
          break;
        }
        array->vector[(int)pDStack_18].key = VStack_20.Item1;
        array->vector[(int)pDStack_18].value = VStack_20.Item2;
        func_?(array->vector + (int)&pDStack_19->klass,0);
      }
    }
  }
  else {
    pIVar22 = (this->fields)._genericDictionary;
    unaff_ESI = (IEnumerator__Class *)0x0;
    if (pIVar22 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar23 = method->klass->rgctx_data[0xf].rgctxDataDummy;
      if ((*(byte *)((int)pvVar23 + 0xba) & 1) == 0) {
        pvVar23 = (void *)func_?(pvVar23);
      }
      func_?(5,pvVar23,pIVar22,array,arrayIndex);
code_?:
      *unaff_FS_OFFSET = pcStack_2;
      return;
    }
  }
  func_?();
code_?:
  uVar15 = func_?(unaff_EBX,unaff_ESI);
code_?:
  func_?(uVar15);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* IEnumerator`1[KeyValuePair`2[System.Object,System.Object]] GetEnumerator() */

IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__GetEnumerator
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::DictionaryEntry>_MethodInfo__System__Linq__Enumerable__Cast<System::Collections::DictionaryEntry>_System__Collections__IEnumerable_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_1
                       ((IEnumerable *)(this->fields)._dictionary,
                        System__Collections__Generic__IEnumerable<System::Collections::DictionaryEntry>_MethodInfo__System__Linq__Enumerable__Cast<System::Collections::DictionaryEntry>_System__Collections__IEnumerable_
                       );
    pIVar2 = method->klass->rgctx_data[0x1d].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pIVar2->cctor_finished_or_no_cctor == 0) {
      func_?(pIVar2);
    }
    pIVar2 = method->klass->rgctx_data[0x1d].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    iVar3 = *(int *)((int)pIVar2->static_fields + 4);
    if (iVar3 == 0) {
      pIVar2 = method->klass->rgctx_data[0x1d].klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      if (pIVar2->cctor_finished_or_no_cctor == 0) {
        func_?(pIVar2);
      }
      pIVar2 = method->klass->rgctx_data[0x1d].klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      uVar4 = *(undefined4 *)pIVar2->static_fields;
      pvVar5 = method->klass->rgctx_data[0x1f].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      iVar3 = func_?(pvVar5);
      if (iVar3 == 0) goto code_?;
      (*(method->klass->rgctx_data[0x20].method)->virtualMethodPointer)
                (iVar3,uVar4,method->klass->rgctx_data[0x1e].rgctxDataDummy,
                 method->klass->rgctx_data[0x20].rgctxDataDummy);
      pIVar2 = method->klass->rgctx_data[0x1d].klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      *(int *)((int)pIVar2->static_fields + 4) = iVar3;
      pIVar2 = method->klass->rgctx_data[0x1d].klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      func_?((int)pIVar2->static_fields + 4,iVar3);
    }
    iVar3 = (*(method->klass->rgctx_data[0x21].method)->virtualMethodPointer)
                      (pIVar1,iVar3,method->klass->rgctx_data[0x21].rgctxDataDummy);
    if (iVar3 != 0) {
      pvVar5 = method->klass->rgctx_data[0x1b].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      pIVar6 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)
               func_?(0,pvVar5,iVar3);
      return pIVar6;
    }
  }
  else {
    pIVar7 = (this->fields)._genericDictionary;
    if (pIVar7 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar5 = method->klass->rgctx_data[0x1b].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      pIVar6 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)
               func_?(0,pvVar5,pIVar7);
      return pIVar6;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar6 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)(*pcVar8)();
  return pIVar6;
}


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Remove
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      cVar2 = func_?(4,TypeInfo__System__Collections__IDictionary,pIVar1,key);
      if (cVar2 == '\0') {
        return 0;
      }
      pIVar1 = (this->fields)._dictionary;
      if (pIVar1 != (IDictionary *)0x0) {
        func_?(10,TypeInfo__System__Collections__IDictionary,pIVar1,key);
        return 1;
      }
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar5 = func_?(6,pvVar4,pIVar3,key);
      return bVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean Remove(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Remove_1
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      cVar2 = func_?(4,TypeInfo__System__Collections__IDictionary,pIVar1,item.key);
      if (cVar2 == '\0') {
        return 1;
      }
      pIVar1 = (this->fields)._dictionary;
      if (pIVar1 != (IDictionary *)0x0) {
        left = (PropertyInfo_1 *)
               func_?(0,TypeInfo__System__Collections__IDictionary,pIVar1,item.key);
        bVar3 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Equality
                          (left,(PropertyInfo_1 *)item.value,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return 0;
        }
        pIVar1 = (this->fields)._dictionary;
        if (pIVar1 != (IDictionary *)0x0) {
          func_?(10,TypeInfo__System__Collections__IDictionary,pIVar1,item.key);
          return 1;
        }
      }
    }
  }
  else {
    pIVar4 = (this->fields)._genericDictionary;
    if (pIVar4 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar5 = method->klass->rgctx_data[0xf].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      bVar3 = func_?(6,pvVar5,pIVar4,item.key,item.value);
      return bVar3;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Void Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__Remove_2
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      func_?(10,TypeInfo__System__Collections__IDictionary,pIVar1,key);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericDictionary;
    if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      unaff_ESI = method->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (key == (Object *)0x0) {
        iVar3 = 0;
code_?:
        pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
        if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
          pvVar4 = (void *)func_?(pvVar4);
        }
        func_?(6,pvVar4,pIVar2,iVar3);
        return;
      }
      iVar3 = func_?(key,unaff_ESI);
      unaff_EDI = key;
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_ESI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void System.Collections.ICollection.CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__System_Collections_ICollection_CopyTo
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Array *array,int32_t index,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    unaff_ESI = (void *)0x0;
    if (pIVar1 != (IDictionary *)0x0) {
      uVar2 = 0;
      uVar3 = (pIVar1->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__ICollection) {
            pVVar4 = &(pIVar1->klass->vtable).get_Item +
                     pIVar1->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)
               func_?(pIVar1,TypeInfo__System__Collections__ICollection,0);
code_?:
      (*pVVar4->methodPtr)(pIVar1,array,index,pVVar4->method);
      return;
    }
  }
  else {
    pIVar5 = (this->fields)._genericDictionary;
    if (pIVar5 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      unaff_ESI = method->klass->rgctx_data[0x25].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (array == (Array *)0x0) {
        iVar6 = 0;
code_?:
        pvVar7 = method->klass->rgctx_data[0xf].rgctxDataDummy;
        if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
          pvVar7 = (void *)func_?(pvVar7);
        }
        func_?(5,pvVar7,pIVar5,iVar6,index);
        return;
      }
      iVar6 = func_?(array,unaff_ESI);
      unaff_EDI = array;
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_ESI);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean System.Collections.ICollection.get_IsSynchronized() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::
     DictionaryWrapper_2_System_Object_System_Object__System_Collections_ICollection_get_IsSynchronized
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IDictionary *)&TypeInfo__System__Collections__ICollection;
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIStack_1 = (this->fields)._dictionary;
    if (pIStack_1 != (IDictionary *)0x0) {
      pIStack_2 = TypeInfo__System__Collections__ICollection;
      uStack_3 = 3;
      bVar4 = func_?();
      return bVar4;
    }
    pIStack_1 = (IDictionary *)&stack0xfffffffc;
    uVar5 = func_?(&uStack_3);
    func_?(uVar5);
    pcVar6 = (code *)swi(3);
    bVar4 = (*pcVar6)();
    return bVar4;
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
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._syncRoot == (Object *)0x0) {
    pOVar1 = (Object *)func_?(TypeInfo__System__Object);
    if (pOVar1 == (Object *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pOVar1 = (Object *)(*pcVar2)();
      return pOVar1;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_3
              (&(this->fields)._syncRoot,pOVar1,(Object *)0x0,(MethodInfo *)0x0);
  }
  return (this->fields)._syncRoot;
}


/* Void System.Collections.IDictionary.Add(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_Add
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      func_?(5,TypeInfo__System__Collections__IDictionary,pIVar1,key,value);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericDictionary;
    if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      unaff_ESI = method->klass->rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (value == (Object *)0x0) {
        this = (DictionaryWrapper_2_System_Object_System_Object_ *)value;
      }
      else {
        this = (DictionaryWrapper_2_System_Object_System_Object_ *)func_?(value,unaff_ESI);
        unaff_EDI = value;
        if (this == (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      unaff_ESI = method->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (key == (Object *)0x0) {
        iVar3 = 0;
code_?:
        pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
        if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
          pvVar4 = (void *)func_?(pvVar4);
        }
        func_?(5,pvVar4,pIVar2,iVar3,this);
        return;
      }
      iVar3 = func_?(key,unaff_ESI);
      unaff_EDI = key;
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_ESI);
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
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      bVar2 = func_?(4,TypeInfo__System__Collections__IDictionary,pIVar1,key);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      unaff_ESI = method->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (key == (Object *)0x0) {
        iVar4 = 0;
code_?:
        pvVar5 = method->klass->rgctx_data->rgctxDataDummy;
        if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
          pvVar5 = (void *)func_?(pvVar5);
        }
        bVar2 = func_?(4,pvVar5,pIVar3,iVar4);
        return bVar2;
      }
      iVar4 = func_?(key,unaff_ESI);
      unaff_EDI = key;
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_ESI);
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() */

IDictionaryEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_GetEnumerator
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._dictionary;
    if (pIVar2 != (IDictionary *)0x0) {
      pIVar3 = (IDictionaryEnumerator *)
               func_?(9,TypeInfo__System__Collections__IDictionary,pIVar2);
      return pIVar3;
    }
  }
  else {
    pIVar4 = (this->fields)._genericDictionary;
    if (pIVar4 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar5 = method->klass->rgctx_data[0x1b].rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      value = (DictionaryWrapper_2_System_Object_System_Object_ *)func_?(0,pvVar5,pIVar4);
      if (cRam_? == '\0') {
        func_?(&StringLiteral_e);
        cRam_? = '\x01';
      }
      ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)value,StringLiteral_e,(MethodInfo *)0x0);
      this = value;
      func_?(&this,value);
      if ((*(byte *)((int)pMVar1->klass->rgctx_data[0x23].rgctxDataDummy + 0xba) & 1) == 0) {
        func_?();
      }
      pIVar3 = (IDictionaryEnumerator *)func_?();
      return pIVar3;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar3 = (IDictionaryEnumerator *)(*pcVar6)();
  return pIVar3;
}


/* Boolean System.Collections.IDictionary.get_IsFixedSize() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::
     DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_get_IsFixedSize
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IDictionary *)&TypeInfo__System__Collections__IDictionary;
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIStack_1 = (this->fields)._dictionary;
    if (pIStack_1 != (IDictionary *)0x0) {
      pIStack_2 = TypeInfo__System__Collections__IDictionary;
      uStack_3 = 8;
      bVar4 = func_?();
      return bVar4;
    }
    pIStack_1 = (IDictionary *)&stack0xfffffffc;
    uVar5 = func_?(&uStack_3);
    func_?(uVar5);
    pcVar6 = (code *)swi(3);
    bVar4 = (*pcVar6)();
    return bVar4;
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
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      pOVar2 = (Object *)func_?(0,TypeInfo__System__Collections__IDictionary,pIVar1,key);
      return pOVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      unaff_ESI = method->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (key == (Object *)0x0) {
        iVar4 = 0;
code_?:
        pvVar5 = method->klass->rgctx_data->rgctxDataDummy;
        if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
          pvVar5 = (void *)func_?(pvVar5);
        }
        pOVar2 = (Object *)func_?(0,pvVar5,pIVar3,iVar4);
        return pOVar2;
      }
      iVar4 = func_?(key,unaff_ESI);
      unaff_EDI = key;
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_ESI);
  pcVar6 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar6)();
  return pOVar2;
}


/* ICollection System.Collections.IDictionary.get_Keys() */

ICollection *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_get_Keys
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      pIVar2 = (ICollection *)func_?(2,TypeInfo__System__Collections__IDictionary,pIVar1);
      return pIVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      uVar5 = func_?(2,pvVar4,pIVar3);
      pIVar2 = (ICollection *)
               (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
                         (uVar5,method->klass->rgctx_data[7].rgctxDataDummy);
      return pIVar2;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar2 = (ICollection *)(*pcVar6)();
  return pIVar2;
}


/* ICollection System.Collections.IDictionary.get_Values() */

ICollection *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_get_Values
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      pIVar2 = (ICollection *)func_?(3,TypeInfo__System__Collections__IDictionary,pIVar1);
      return pIVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      uVar5 = func_?(3,pvVar4,pIVar3);
      pIVar2 = (ICollection *)
               (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
                         (uVar5,method->klass->rgctx_data[0xc].rgctxDataDummy);
      return pIVar2;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar2 = (ICollection *)(*pcVar6)();
  return pIVar2;
}


/* Void System.Collections.IDictionary.set_Item(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::
     DictionaryWrapper_2_System_Object_System_Object__System_Collections_IDictionary_set_Item
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      func_?(1,TypeInfo__System__Collections__IDictionary,pIVar1,key,value);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericDictionary;
    if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      unaff_ESI = method->klass->rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (value == (Object *)0x0) {
        this = (DictionaryWrapper_2_System_Object_System_Object_ *)value;
      }
      else {
        this = (DictionaryWrapper_2_System_Object_System_Object_ *)func_?(value,unaff_ESI);
        unaff_EDI = value;
        if (this == (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      unaff_ESI = method->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (key == (Object *)0x0) {
        iVar3 = 0;
code_?:
        pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
        if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
          pvVar4 = (void *)func_?(pvVar4);
        }
        func_?(1,pvVar4,pIVar2,iVar3,this);
        return;
      }
      iVar3 = func_?(key,unaff_ESI);
      unaff_EDI = key;
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_ESI);
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
  pIVar1 = (IEnumerator *)
           (*(method->klass->rgctx_data[0x22].method)->virtualMethodPointer)
                     (this,method->klass->rgctx_data[0x22].rgctxDataDummy);
  return pIVar1;
}


/* Boolean TryGetValue(Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__TryGetValue
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object **value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      cVar2 = func_?(4,TypeInfo__System__Collections__IDictionary,pIVar1,key);
      if (cVar2 == '\0') {
        *value = (Object *)0x0;
        return 0;
      }
      pIVar1 = (this->fields)._dictionary;
      unaff_EDI = key;
      if (pIVar1 != (IDictionary *)0x0) {
        this = (DictionaryWrapper_2_System_Object_System_Object_ *)
               func_?(0,TypeInfo__System__Collections__IDictionary,pIVar1,key);
        unaff_EDI = method->klass->rgctx_data[3].rgctxDataDummy;
        if (((uint)unaff_EDI[0x17].klass & 0x10000) == 0) {
          unaff_EDI = (Object *)func_?(unaff_EDI);
        }
        if (this == (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) {
          pOVar3 = (Object *)0x0;
        }
        else {
          pOVar3 = (Object *)func_?(this,unaff_EDI);
          if (pOVar3 == (Object *)0x0) goto code_?;
        }
        *value = pOVar3;
        unaff_EDI = method->klass->rgctx_data[3].rgctxDataDummy;
        if (((uint)unaff_EDI[0x17].klass & 0x10000) == 0) {
          unaff_EDI = (Object *)func_?(unaff_EDI);
        }
        if (this == (DictionaryWrapper_2_System_Object_System_Object_ *)0x0) {
          func_?(value,0);
          return 1;
        }
        iVar4 = func_?(this,unaff_EDI);
        if (iVar4 != 0) {
          func_?(value,iVar4);
          return 1;
        }
        goto code_?;
      }
    }
  }
  else {
    pIVar5 = (this->fields)._genericDictionary;
    this = (DictionaryWrapper_2_System_Object_System_Object_ *)0x0;
    if (pIVar5 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar6 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      bVar7 = func_?(7,pvVar6,pIVar5,key,value);
      return bVar7;
    }
  }
  func_?();
code_?:
  func_?(this,unaff_EDI);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* DictionaryWrapper`2[System.Object,System.Object](IDictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object___ctor
               (DictionaryWrapper_2_System_Object_System_Object_ *this,
               IDictionary_2_System_Object_System_Object_ *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_dictionary);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)dictionary,StringLiteral_dictionary,(MethodInfo *)0x0);
  (this->fields)._genericDictionary = dictionary;
  func_?(&(this->fields)._genericDictionary,dictionary);
  return;
}


/* DictionaryWrapper`2[System.Object,System.Object](IDictionary) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object___ctor_1
               (DictionaryWrapper_2_System_Object_System_Object_ *this,IDictionary *dictionary,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_dictionary);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)dictionary,StringLiteral_dictionary,(MethodInfo *)0x0);
  (this->fields)._dictionary = dictionary;
  func_?(&this->fields,dictionary);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System
        ::Object]::DictionaryWrapper_2_System_Object_System_Object__get_Count
                  (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      iVar2 = func_?(1,TypeInfo__System__Collections__ICollection,pIVar1);
      return iVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data[0xf].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      iVar2 = func_?(0,pvVar4,pIVar3);
      return iVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar2 = (*pcVar5)();
  return iVar2;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__get_IsReadOnly
               (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      bVar2 = func_?(7,TypeInfo__System__Collections__IDictionary,pIVar1);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data[0xf].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar2 = func_?(1,pvVar4,pIVar3);
      return bVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Object get_Item(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System
         ::Object]::DictionaryWrapper_2_System_Object_System_Object__get_Item
                   (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      unaff_EDI = func_?(0,TypeInfo__System__Collections__IDictionary,pIVar1,key);
      unaff_ESI = method->klass->rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
        unaff_ESI = (void *)func_?(unaff_ESI);
      }
      if (unaff_EDI == 0) {
        return (Object *)0x0;
      }
      pOVar2 = (Object *)func_?(unaff_EDI,unaff_ESI);
      if (pOVar2 != (Object *)0x0) {
        return pOVar2;
      }
      goto code_?;
    }
  }
  else {
    pIVar3 = (this->fields)._genericDictionary;
    unaff_ESI = (void *)0x0;
    if (pIVar3 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      pOVar2 = (Object *)func_?(0,pvVar4,pIVar3,key);
      return pOVar2;
    }
  }
  func_?();
code_?:
  func_?(unaff_EDI,unaff_ESI);
  pcVar5 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar5)();
  return pOVar2;
}


/* ICollection`1[System.Object] get_Keys() */

ICollection_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__get_Keys
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      uVar2 = func_?(2,TypeInfo__System__Collections__IDictionary,pIVar1);
      uVar2 = (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                        (uVar2,method->klass->rgctx_data[6].rgctxDataDummy);
      pIVar3 = (ICollection_1_System_Object_ *)
               (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
                         (uVar2,method->klass->rgctx_data[7].rgctxDataDummy);
      return pIVar3;
    }
  }
  else {
    pIVar4 = (this->fields)._genericDictionary;
    if (pIVar4 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar5 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      pIVar3 = (ICollection_1_System_Object_ *)func_?(2,pvVar5,pIVar4);
      return pIVar3;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar3 = (ICollection_1_System_Object_ *)(*pcVar6)();
  return pIVar3;
}


/* Object get_UnderlyingDictionary() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System
         ::Object]::DictionaryWrapper_2_System_Object_System_Object__get_UnderlyingDictionary
                   (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    return (Object *)(this->fields)._dictionary;
  }
  return (Object *)(this->fields)._genericDictionary;
}


/* ICollection`1[System.Object] get_Values() */

ICollection_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::Object]
::DictionaryWrapper_2_System_Object_System_Object__get_Values
          (DictionaryWrapper_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      uVar2 = func_?(3,TypeInfo__System__Collections__IDictionary,pIVar1);
      uVar2 = (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                        (uVar2,method->klass->rgctx_data[0xb].rgctxDataDummy);
      pIVar3 = (ICollection_1_System_Object_ *)
               (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
                         (uVar2,method->klass->rgctx_data[0xc].rgctxDataDummy);
      return pIVar3;
    }
  }
  else {
    pIVar4 = (this->fields)._genericDictionary;
    if (pIVar4 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar5 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
        pvVar5 = (void *)func_?(pvVar5);
      }
      pIVar3 = (ICollection_1_System_Object_ *)func_?(3,pvVar5,pIVar4);
      return pIVar3;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pIVar3 = (ICollection_1_System_Object_ *)(*pcVar6)();
  return pIVar3;
}


/* Void set_Item(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[System::Object,System::
     Object]::DictionaryWrapper_2_System_Object_System_Object__set_Item
               (DictionaryWrapper_2_System_Object_System_Object_ *this,Object *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IDictionary);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericDictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._dictionary;
    if (pIVar1 != (IDictionary *)0x0) {
      func_?(1,TypeInfo__System__Collections__IDictionary,pIVar1,key,value);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericDictionary;
    if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      func_?(1,pvVar3,pIVar2,key,value);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

