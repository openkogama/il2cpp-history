
/* Void Add(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Add
               (JContainer *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    cRam_? = '\x01';
  }
  iVar1 = (*(this->klass->vtable).__unknown_5.methodPtr)
                    (this,(this->klass->vtable).__unknown_5.method);
  if (iVar1 != 0) {
    index = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    JContainer_AddInternal(this,index,content,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddFirst(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_AddFirst
               (JContainer *this,Object *content,MethodInfo *method)

{
  JContainer_AddInternal(this,0,content,(MethodInfo *)0x0);
  return;
}


/* Void AddInternal(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_AddInternal
               (JContainer *this,int32_t index,Object *content,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  bVar4 = JContainer_IsMultiContent(this,content,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    JContainer_CreateFromContent(this,content,(MethodInfo *)0x0);
    (*(this->klass->vtable).InsertItem.methodPtr)(this);
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  iStack_5 = index;
  if (content != (Object *)0x0) {
    iVar6 = func_?();
    if (iVar6 != 0) {
      iVar6 = func_?();
      if (iVar6 != 0) {
        piVar7 = (int *)func_?();
        uStack_1 = 1;
        while (piVar7 != (int *)0x0) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            uStack_1 = 0xffffffff;
            iVar6 = func_?();
            if (iVar6 != 0) {
              func_?();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            goto code_?;
          }
          if (piVar7 == (int *)0x0) break;
          uVar9 = 0;
          uVar10 = *(ushort *)(*piVar7 + 0xb2);
          if (uVar10 != 0) {
            do {
              if (*(IEnumerator__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar9 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar11 = (undefined4 *)
                         (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar9 * 8) * 8 + 0xc4 +
                         *piVar7);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          puVar11 = (undefined4 *)func_?();
code_?:
          content_00 = (Object *)(*(code *)*puVar11)();
          JContainer_AddInternal(this,iStack_5,content_00,(MethodInfo *)0x0);
          iStack_5 = iStack_5 + 1;
        }
        goto code_?;
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void CheckReentrancy() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_CheckReentrancy
               (JContainer *this,MethodInfo *method)

{
  if ((this->fields)._busy == 0) {
    return;
  }
  uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar1);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar1);
  pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar2);
  func_?(0,pTVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Cannot_change__0__during_a_colle);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (InvalidOperationException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,pSVar3,(MethodInfo *)0x0);
  uStack4 =
       func_?(&MethodInfo__Newtonsoft__Json__Linq__JContainer__CheckReentrancy__);
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JEnumerable`1[JToken] Children() */

JEnumerable_1_JToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Children
          (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__JEnumerable_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                   );
    cRam_? = '\x01';
  }
  enumerable = (IEnumerable_1_System_Object_ *)
               (*(this->klass->vtable).__unknown_5.methodPtr)
                         (this,(this->klass->vtable).__unknown_5.method);
  this = (JContainer *)0x0;
  JEnumerable`1[System::Object]::JEnumerable_1_System_Object___ctor
            ((JEnumerable_1_System_Object_ *)&this,enumerable,
             MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__JEnumerable_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
            );
  return (JEnumerable_1_JToken_)(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this;
}


/* Void ClearItems() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ClearItems
               (JContainer *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
  iVar4 = (*(this->klass->vtable).__unknown_5.methodPtr)
                    (this,(this->klass->vtable).__unknown_5.method);
  if (iVar4 != 0) {
    piVar5 = (int *)func_?(0);
    uStack_1 = 1;
    while( true ) {
      if (piVar5 == (int *)0x0) break;
      cVar6 = func_?(0);
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?(0);
        }
        uStack_1 = 0xffffffff;
        iVar4 = (*(this->klass->vtable).__unknown_5.methodPtr)();
        if (iVar4 != 0) {
          func_?(3);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      if (piVar5 == (int *)0x0) break;
      uVar7 = 0;
      uVar8 = *(ushort *)(*piVar5 + 0xb2);
      if (uVar8 != 0) {
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)
               (*(int *)(*piVar5 + 0x58) + (uint)uVar7 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar9 = (undefined4 *)
                     (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar7 * 8) * 8 + 0xbc + *piVar5)
            ;
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      puVar9 = (undefined4 *)func_?(piVar5);
code_?:
      iVar4 = (*(code *)*puVar9)();
      if (iVar4 == 0) break;
      *(undefined4 *)(iVar4 + 8) = 0;
      func_?();
      *(undefined4 *)(iVar4 + 0xc) = 0;
      func_?();
      *(undefined4 *)(iVar4 + 0x10) = 0;
      func_?();
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean ContainsItem(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ContainsItem
               (JContainer *this,JToken *item,MethodInfo *method)

{
  iVar1 = JContainer_IndexOfItem(this,item,(MethodInfo *)0x0);
  return iVar1 != -1;
}


/* Boolean ContentsEqual(JContainer) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ContentsEqual
               (JContainer *this,JContainer *container,MethodInfo *method)

{
  piVar1 = (int *)(*(this->klass->vtable).get_First.methodPtr)
                            (this,(this->klass->vtable).get_First.method);
  if (container == (JContainer *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  piVar4 = (int *)(*(container->klass->vtable).get_First.methodPtr)
                            (container,(container->klass->vtable).get_First.method);
  if (piVar1 != piVar4) {
    while (piVar1 != (int *)0x0) {
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      cVar5 = (**(code **)(*piVar1 + 0x11c))(piVar1,piVar4,*(undefined4 *)(*piVar1 + 0x120));
      if (cVar5 == '\0') {
        return 0;
      }
      piVar6 = (int *)(*(this->klass->vtable).get_Last.methodPtr)
                                (this,(this->klass->vtable).get_Last.method);
      if (piVar1 == piVar6) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)piVar1[4];
      }
      piVar6 = (int *)(*(container->klass->vtable).get_Last.methodPtr)
                                (container,(container->klass->vtable).get_Last.method);
      if (piVar4 == piVar6) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)piVar4[4];
      }
    }
    if (piVar4 != (int *)0x0) {
      return 0;
    }
  }
  return 1;
}


/* Int32 ContentsHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ContentsHashCode
                  (JContainer *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  uVar4 = 0;
  iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                    (this,(this->klass->vtable).__unknown_5.method);
  if (iVar5 != 0) {
    piVar6 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                    ,iVar5);
    uStack_1 = 1;
    while( true ) {
      if (piVar6 == (int *)0x0) break;
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar6 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar6);
          *unaff_FS_OFFSET = uStack_3;
          return uVar4;
        }
        *unaff_FS_OFFSET = uStack_3;
        return uVar4;
      }
      if (piVar6 == (int *)0x0) break;
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar6 + 0xb2);
      if (uVar9 != 0) {
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)
               (*(int *)(*piVar6 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar10 = (undefined4 *)
                     (*piVar6 + 0xbc + *(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar8 * 8) * 8
                     );
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar10 = (undefined4 *)
               func_?(piVar6,
                               TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                               ,0);
code_?:
      piVar11 = (int *)(*(code *)*puVar10)(piVar6,puVar10[1]);
      if (piVar11 == (int *)0x0) break;
      uVar12 = (**(code **)(*piVar11 + 0x174))(piVar11,*(undefined4 *)(*piVar11 + 0x178));
      uVar4 = uVar4 ^ uVar12;
    }
  }
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* Void CopyItemsTo(Array, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_CopyItemsTo
               (JContainer *this,Array *array,int32_t arrayIndex,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  if (array == (Array *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar4);
    func_?(this_00);
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?(&StringLiteral_array);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar6,pMVar5);
    func_?(&MethodInfo__Newtonsoft__Json__Linq__JContainer__CopyItemsTo_System__Array__int_
                   );
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    pAVar7 = (ArgumentException *)func_?();
    func_?();
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar7,pSVar6,pMVar5);
    uStack_3 = func_?();
    func_?();
  }
  else {
    if (arrayIndex < 0) goto code_?;
    iVar8 = mscorlib.dll::System::Array::Array_get_Length(array,(MethodInfo *)0x0);
    if (arrayIndex < iVar8) {
      iVar8 = JContainer_get_Count(this,(MethodInfo *)0x0);
      iVar9 = mscorlib.dll::System::Array::Array_get_Length(array,(MethodInfo *)0x0);
      if (iVar8 <= iVar9 - arrayIndex) {
        iVar10 = 0;
        iVar11 = (*(this->klass->vtable).__unknown_5.methodPtr)();
        if (iVar11 != 0) {
          iVar11 = func_?();
          uStack_1 = 1;
          while (iVar11 != 0) {
            cVar12 = func_?();
            if (cVar12 == '\0') {
              uStack_1 = 0xffffffff;
              if (iVar11 != 0) {
                func_?();
              }
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            if (iVar11 == 0) break;
            value = (Object *)func_?();
            mscorlib.dll::System::Array::Array_SetValue_5
                      (array,value,arrayIndex + iVar10,(MethodInfo *)0x0);
            iVar10 = iVar10 + 1;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  pAVar7 = (ArgumentException *)func_?();
  func_?(pAVar7);
  pMVar5 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar7,pSVar6,pMVar5);
  func_?();
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_01 = (ArgumentOutOfRangeException *)func_?(uVar4);
  func_?(this_01);
  pSVar6 = (String *)func_?(&StringLiteral_arrayIndex_is_less_than_0_);
  paramName = (String *)func_?(&StringLiteral_arrayIndex);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_01,paramName,pSVar6,(MethodInfo *)0x0);
  func_?(&MethodInfo__Newtonsoft__Json__Linq__JContainer__CopyItemsTo_System__Array__int_);
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* JToken CreateFromContent(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_CreateFromContent
                   (JContainer *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (content != (Object *)0x0) {
    pOVar1 = content->klass;
    unaff_ESI = TypeInfo__Newtonsoft__Json__Linq__JToken;
    if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
         (pOVar1->_1).typeHierarchyDepth) &&
       ((pOVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
           (pOVar1->_1).typeHierarchyDepth) &&
         ((pOVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
        return (JToken *)content;
      }
      goto code_?;
    }
  }
  pJVar2 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar2 != (JToken *)0x0) {
    pJVar3 = (JToken__Class *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,content,(MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar2,ExceptionArgument__Enum_obj,unaff_EBX);
    pJVar2[1].monitor = (MonitorData *)content;
    func_?(&pJVar2[1].monitor,content);
    pJVar2[1].klass = pJVar3;
    return pJVar2;
  }
  func_?();
code_?:
  func_?(content,unaff_ESI);
  pcVar4 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar4)();
  return pJVar2;
}


/* JsonWriter CreateWriter() */

JsonWriter *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_CreateWriter
          (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  if (pJVar1 != (JsonWriter *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
      func_?(&StringLiteral_container);
      cRam_? = '\x01';
    }
    if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
    }
    JsonWriter::JsonWriter__ctor(pJVar1,(MethodInfo *)0x0);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)this,StringLiteral_container,(MethodInfo *)0x0);
    pJVar1[1].klass = (JsonWriter__Class *)this;
    func_?(pJVar1 + 1,this);
    pJVar1[1].monitor = (MonitorData *)this;
    func_?(&pJVar1[1].monitor,this);
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonWriter *)(*pcVar2)();
  return pJVar1;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] Descendants() */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Descendants
          (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_d__16);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_d__16);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0xfffffffe;
    pOVar1 = (Object__Class *)
             mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0);
    value[2].klass = pOVar1;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)value;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar2)();
  return pIVar3;
}


/* JToken EnsureParentToken(JToken) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_EnsureParentToken
                   (JContainer *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (item == (JToken *)0x0) {
    pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
    if (pJVar1 != (JToken *)0x0) {
      pJVar2 = (JToken__Class *)
               JValue::JValue_GetValueType
                         ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)0x0,
                          (MethodInfo *)0x0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)0x0);
      pJVar1[1].monitor = (MonitorData *)0x0;
      func_?(&pJVar1[1].monitor,0);
      pJVar1[1].klass = pJVar2;
      return pJVar1;
    }
  }
  else {
    if ((item->fields)._parent != (JContainer *)0x0) {
code_?:
      pJVar1 = (JToken *)
               (*(item->klass->vtable).__unknown.methodPtr)
                         (item,(item->klass->vtable).__unknown.method);
      return pJVar1;
    }
    for (; this != (JContainer *)0x0; this = (this->fields)._._parent) {
      if ((this->fields)._._parent == (JContainer *)0x0) {
        if ((JContainer *)item != this) {
          return item;
        }
        goto code_?;
      }
      if (this == (JContainer *)0x0) break;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar3)();
  return pJVar1;
}


/* JToken EnsureValue(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_EnsureValue
                   (JContainer *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    pOVar1 = value->klass;
    if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
         (pOVar1->_1).typeHierarchyDepth) &&
       ((pOVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
           (pOVar1->_1).typeHierarchyDepth) &&
         ((pOVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
        return (JToken *)value;
      }
      func_?(value,TypeInfo__Newtonsoft__Json__Linq__JToken);
    }
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (ArgumentException *)func_?(uVar2);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Argument_is_not_a_JToken_);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_00,message,method_00);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Linq__JContainer__EnsureValue_System__Object_
                           );
    func_?(this_00,uVar2);
    pcVar3 = (code *)swi(3);
    pJVar4 = (JToken *)(*pcVar3)();
    return pJVar4;
  }
  return (JToken *)0x0;
}


/* JToken GetItem(Int32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_GetItem
                   (JContainer *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)
                &TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>;
    func_?();
    cRam_? = '\x01';
  }
  pMStack_1 = (this->klass->vtable).__unknown_5.method;
  pJStack_2 = this;
  iVar3 = (*(this->klass->vtable).__unknown_5.methodPtr)();
  if (iVar3 != 0) {
    pMStack_1 = (MethodInfo *)index;
    pIStack_4 = TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>;
    pJStack_2 = (JContainer *)iVar3;
    pJVar5 = (JToken *)func_?(0);
    return pJVar5;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  uVar6 = func_?(&pIStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pJVar5 = (JToken *)(*pcVar7)();
  return pJVar5;
}


/* Int32 IndexOfItem(JToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_IndexOfItem
                  (JContainer *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer);
    cRam_? = '\x01';
  }
  list = (IEnumerable_1_System_Object_ *)
         (*(this->klass->vtable).__unknown_5.methodPtr)
                   (this,(this->klass->vtable).__unknown_5.method);
  if ((TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer);
  }
  iVar1 = Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_2
                    (list,(Object *)item,
                     (IEqualityComparer_1_System_Object_ *)
                     TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->
                     static_fields->Instance,
                     int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                    );
  return iVar1;
}


/* Void InsertItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_InsertItem
               (JContainer *this,int32_t index,JToken *item,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  iVar2 = (*(this->klass->vtable).__unknown_5.methodPtr)
                    (this,(this->klass->vtable).__unknown_5.method);
  if (iVar2 != 0) {
    iVar2 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar2);
    if (iVar2 < index) goto code_?;
    JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
    pJVar3 = JContainer_EnsureParentToken(this,item,(MethodInfo *)0x0);
    if (index == 0) {
      this = (JContainer *)index;
    }
    else {
      iVar2 = (*(this->klass->vtable).__unknown_5.methodPtr)(this);
      if (iVar2 == 0) goto code_?;
      this = (JContainer *)
             func_?(0,
                             TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                             ,iVar2,index + -1);
    }
    iVar2 = (*(pJVar1->klass->vtable).__unknown_5.methodPtr)(pJVar1);
    if (iVar2 != 0) {
      iVar2 = func_?(0,
                              TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                              ,iVar2);
      if (index == iVar2) {
        pJVar4 = (JToken *)0x0;
      }
      else {
        iVar2 = (*(pJVar1->klass->vtable).__unknown_5.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).__unknown_5.method);
        if (iVar2 == 0) goto code_?;
        pJVar4 = (JToken *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                 ,iVar2,index);
      }
      (*(pJVar1->klass->vtable).ValidateToken.methodPtr)
                (pJVar1,pJVar3,0,(pJVar1->klass->vtable).ValidateToken.method);
      if (pJVar3 != (JToken *)0x0) {
        (pJVar3->fields)._parent = pJVar1;
        func_?(&pJVar3->fields,pJVar1);
        (pJVar3->fields)._previous = (JToken *)this;
        func_?(&(pJVar3->fields)._previous,this);
        if (this != (JContainer *)0x0) {
          (this->fields)._._next = pJVar3;
          func_?(&(this->fields)._._next,pJVar3);
        }
        (pJVar3->fields)._next = pJVar4;
        func_?(&(pJVar3->fields)._next,pJVar4);
        if (pJVar4 != (JToken *)0x0) {
          (pJVar4->fields)._previous = pJVar3;
          func_?(&(pJVar4->fields)._previous,pJVar3);
        }
        iVar2 = (*(pJVar1->klass->vtable).__unknown_5.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).__unknown_5.method);
        if (iVar2 != 0) {
          func_?(3,
                          TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                          ,iVar2,index,pJVar3);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar5);
  func_?(this_00);
  message = (String *)func_?(&StringLiteral_Index_must_be_within_the_bounds_);
  paramName = (String *)func_?(&StringLiteral_index);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_00,paramName,message,(MethodInfo *)0x0);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Linq__JContainer__InsertItem_int__Newtonsoft__Json__Linq__JToken_
                         );
  func_?(this_00,uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsMultiContent(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_IsMultiContent
               (JContainer *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  iVar1 = func_?(content,TypeInfo__System__Collections__IEnumerable);
  if (iVar1 == 0) {
    return 0;
  }
  if (content != (Object *)0x0) {
    pSVar2 = (String__Class *)content->klass;
    pOVar3 = (Object *)0x0;
    if (pSVar2 == TypeInfo__System__String) {
      pOVar3 = content;
    }
    if (pOVar3 != (Object *)0x0) {
      return 0;
    }
    if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
         (pSVar2->_1).typeHierarchyDepth) &&
       ((pSVar2->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      return 0;
    }
  }
  iVar1 = func_?(content,TypeInfo__System__Byte);
  return iVar1 == 0;
}


/* Boolean IsTokenUnchanged(JToken, JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_IsTokenUnchanged
               (JToken *currentValue,JToken *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (currentValue != (JToken *)0x0) {
    pJVar1 = currentValue->klass;
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->_1).typeHierarchyDepth) &&
       ((pJVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      iVar2 = (*(pJVar1->vtable).__unknown_2.methodPtr)
                        (currentValue,(pJVar1->vtable).__unknown_2.method);
      if ((iVar2 == 10) && (newValue == (JToken *)0x0)) {
        return 1;
      }
      bVar3 = (*(currentValue->klass->vtable).Equals.methodPtr)
                        (currentValue,newValue,(currentValue->klass->vtable).Equals.method);
      return bVar3;
    }
  }
  return 0;
}


/* Void ReadContentFrom(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReadContentFrom
               (JContainer *this,JsonReader *r,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&StringLiteral_r);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)r,StringLiteral_r,(MethodInfo *)0x0);
  lineInfo = (IJsonLineInfo *)func_?();
  pCVar1 = (CultureInfo *)this;
  do {
    if (((pCVar1 != (CultureInfo *)0x0) &&
        (pJVar2 = (JObject__Class *)pCVar1->klass,
        (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
        (pJVar2->_1).typeHierarchyDepth)) &&
       ((JProperty__Class *)
        (pJVar2->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
           (pJVar2->_1).typeHierarchyDepth) &&
         ((JProperty__Class *)
          (pJVar2->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
          TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
        pJVar3 = JProperty::JProperty_get_Value((JProperty *)pCVar1,(MethodInfo *)0x0);
        if (pJVar3 != (JToken *)0x0) {
          if (pCVar1 == (CultureInfo *)this) {
            return;
          }
          pCVar1 = *(CultureInfo **)&pCVar1->fields;
        }
        goto code_?;
      }
code_?:
      func_?();
code_?:
      func_?();
      this_00 = (InvalidOperationException *)func_?();
      func_?();
      pMVar4 = (MethodInfo *)0x0;
      pSVar5 = (String *)func_?();
      mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
                (this_00,pSVar5,pMVar4);
      func_?();
      func_?();
code_?:
      func_?();
      func_?();
      this_01 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      func_?();
      pOVar6 = (Object__Array *)func_?();
      func_?();
      this = (JContainer *)func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      pMVar4 = (MethodInfo *)0x0;
      pCVar1 = this_01;
      pSVar5 = (String *)func_?();
      message = (DateTimeFormatInfo *)
                Json::Utilities::StringUtils::StringUtils_FormatWith
                          (pSVar5,(IFormatProvider *)pCVar1,pOVar6,pMVar4);
      func_?();
      pCVar1 = (CultureInfo *)func_?();
      func_?();
      mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
                ((InvalidOperationException *)pCVar1,(String *)message,(MethodInfo *)0x0);
      func_?();
      cVar7 = (undefined1 *)0xffffffd3 < &stack0xffffffd8;
      cVar8 = &stack0x00000000 == (undefined1 *)0xfffffffc;
      func_?();
      goto code_?;
    }
code_?:
    cVar7 = '\0';
    cVar8 = '\x01';
    this_01 = (CultureInfo *)this;
    message = (DateTimeFormatInfo *)r;
    if (r == (JsonReader *)0x0) goto code_?;
    uVar9 = (*(r->klass->vtable).get_TokenType.methodPtr)();
    this_01 = pCVar1;
    switch(uVar9) {
    case 0:
      break;
    case 1:
      this_01 = (CultureInfo *)func_?();
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      JObject::JObject__ctor((JObject *)this_01,(MethodInfo *)0x0);
      goto code_?;
    case 2:
      this_01 = (CultureInfo *)func_?();
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      JArray::JArray__ctor((JArray *)this_01,(MethodInfo *)0x0);
code_?:
      JToken::JToken_SetLineInfo((JToken *)this_01,lineInfo,(MethodInfo *)0x0);
code_?:
      cVar7 = '\0';
      cVar8 = '\x01';
      if (pCVar1 == (CultureInfo *)0x0) goto code_?;
      (*(code *)pCVar1->klass[1].vtable.get_EnglishName.method)();
      break;
    case 3:
      piVar10 = (int *)(*(r->klass->vtable).get_Value.methodPtr)();
      cVar7 = '\0';
      cVar8 = '\x01';
      this_01 = (CultureInfo *)this;
      if (piVar10 == (int *)0x0) goto code_?;
      pSVar5 = (String *)(**(code **)(*piVar10 + 0xd4))();
      this_01 = (CultureInfo *)func_?();
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      JConstructor::JConstructor__ctor_4((JConstructor *)this_01,pSVar5,(MethodInfo *)0x0);
      JToken::JToken_SetLineInfo((JToken *)this_01,(IJsonLineInfo *)this_01,(MethodInfo *)0x0);
      goto code_?;
    case 4:
      piVar10 = (int *)(*(r->klass->vtable).get_Value.methodPtr)();
      cVar7 = '\0';
      cVar8 = '\x01';
      this_01 = (CultureInfo *)this;
      if (piVar10 == (int *)0x0) goto code_?;
      pSVar5 = (String *)(**(code **)(*piVar10 + 0xd4))();
      this_01 = (CultureInfo *)func_?();
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      JProperty::JProperty__ctor_1((JProperty *)this_01,pSVar5,(MethodInfo *)0x0);
      JToken::JToken_SetLineInfo((JToken *)this_01,lineInfo,(MethodInfo *)0x0);
      cVar7 = '\0';
      cVar8 = '\x01';
      if (pCVar1 == (CultureInfo *)0x0) goto code_?;
      if (((pCVar1->klass->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth) ||
         ((JObject__Class *)
          (pCVar1->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JObject->_1).typeHierarchyDepth - 1] !=
          TypeInfo__Newtonsoft__Json__Linq__JObject)) goto code_?;
      pJVar11 = JObject::JObject_Property((JObject *)pCVar1,pSVar5,(MethodInfo *)0x0);
      if (pJVar11 == (JProperty *)0x0) {
        in_stack_12 = CONCAT44(this_01,pCVar1);
        (*(code *)pCVar1->klass[1].vtable.get_EnglishName.method)();
      }
      else {
        if ((pJVar11->fields)._._._parent == (JContainer *)0x0) goto code_?;
        in_stack_12 = CONCAT44(this_01,pJVar11);
        (*(((pJVar11->fields)._._._parent)->klass->vtable).ReplaceItem.methodPtr)();
      }
      break;
    case 5:
      piVar10 = (int *)(*(r->klass->vtable).get_Value.methodPtr)();
      cVar7 = '\0';
      cVar8 = '\x01';
      this_01 = (CultureInfo *)this;
      if (piVar10 == (int *)0x0) goto code_?;
      pSVar5 = (String *)(**(code **)(*piVar10 + 0xd4))();
      this_01 = (CultureInfo *)JValue::JValue_CreateComment(pSVar5,(MethodInfo *)0x0);
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      JToken::JToken_SetLineInfo((JToken *)this_01,lineInfo,(MethodInfo *)0x0);
      goto code_?;
    default:
      goto code_?;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      message = (DateTimeFormatInfo *)(*(r->klass->vtable).get_Value.methodPtr)();
      pDVar13 = message;
      this_01 = (CultureInfo *)func_?();
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      in_stack_12 = 0;
      message = (DateTimeFormatInfo *)
                JValue::JValue_GetValueType
                          ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)message,
                           (MethodInfo *)0x0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_12);
      (this_01->fields).dateTimeInfo = pDVar13;
      func_?();
      (this_01->fields).numInfo = (NumberFormatInfo *)message;
      JToken::JToken_SetLineInfo((JToken *)this_01,lineInfo,(MethodInfo *)0x0);
      cVar7 = '\0';
      cVar8 = '\x01';
      if (pCVar1 == (CultureInfo *)0x0) goto code_?;
      (*(code *)pCVar1->klass[1].vtable.get_EnglishName.method)();
      this_01 = pCVar1;
      break;
    case 0xb:
      this_01 = (CultureInfo *)func_?();
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_12);
      (this_01->fields).dateTimeInfo = (DateTimeFormatInfo *)0x0;
      func_?();
      (this_01->fields).numInfo = (NumberFormatInfo *)0xa;
      JToken::JToken_SetLineInfo((JToken *)this_01,lineInfo,(MethodInfo *)0x0);
      goto code_?;
    case 0xc:
      this_01 = (CultureInfo *)func_?();
      cVar7 = '\0';
      cVar8 = '\x01';
      if (this_01 == (CultureInfo *)0x0) goto code_?;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this_01,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_12);
      (this_01->fields).dateTimeInfo = (DateTimeFormatInfo *)0x0;
      func_?();
      (this_01->fields).numInfo = (NumberFormatInfo *)0xb;
      JToken::JToken_SetLineInfo((JToken *)this_01,lineInfo,(MethodInfo *)0x0);
code_?:
      cVar7 = '\0';
      cVar8 = '\x01';
      if (pCVar1 == (CultureInfo *)0x0) {
code_?:
        uVar14 = func_?();
        uVar15 = (undefined2)((uint6)uVar14 >> 0x20);
        if ((int)uVar14 == 1 || cVar8 == '\0') {
          *(char *)&message->klass = *(char *)&message->klass + (char)this_01 + cVar7;
          pCVar16 = (CultureInfo__Class *)in(uVar15);
          pCVar1->klass = pCVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        in(uVar15);
        if (r != (JsonReader *)0x0) {
          iVar17 = (*(r->klass->vtable).get_Depth.methodPtr)();
          cVar8 = (*(r->klass->vtable).__unknown.methodPtr)(r,(r->klass->vtable).__unknown.method);
          if (cVar8 == '\0') {
            func_?();
            func_?();
            pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            func_?();
            pOVar6 = (Object__Array *)func_?();
            pTVar18 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0)
            ;
            func_?();
            uVar9 = func_?(7,pTVar18);
            func_?(pOVar6);
            func_?(pOVar6,uVar9);
            func_?();
            ppSVar19 = &StringLiteral_Error_reading__0__from_JsonReade;
          }
          else {
            JContainer_ReadContentFrom(this,r,(MethodInfo *)0x0);
            iVar20 = (*(r->klass->vtable).get_Depth.methodPtr)();
            if (iVar20 <= iVar17) {
              return;
            }
            func_?();
            func_?();
            pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            func_?();
            pOVar6 = (Object__Array *)func_?();
            mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
            func_?();
            uVar9 = func_?();
            func_?();
            func_?(pOVar6,uVar9);
            func_?();
            ppSVar19 = &StringLiteral_Unexpected_end_of_content_while_;
          }
          pMVar4 = (MethodInfo *)0x0;
          pSVar5 = (String *)func_?(ppSVar19);
          pSVar5 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (pSVar5,(IFormatProvider *)pCVar1,pOVar6,pMVar4);
          func_?();
          this_02 = (Exception *)func_?();
          func_?();
          mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar5,(MethodInfo *)0x0);
          func_?(&
                          MethodInfo__Newtonsoft__Json__Linq__JContainer__ReadTokenFrom_Newtonsoft__Json__JsonReader_
                         );
          func_?();
        }
        func_?();
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      (*(code *)pCVar1->klass[1].vtable.get_EnglishName.method)();
      this_01 = pCVar1;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      if (pCVar1 == (CultureInfo *)this) {
        return;
      }
      cVar7 = '\0';
      cVar8 = '\x01';
      this_01 = (CultureInfo *)this;
      if (pCVar1 == (CultureInfo *)0x0) goto code_?;
      this_01 = *(CultureInfo **)&pCVar1->fields;
    }
    cVar8 = (*(r->klass->vtable).__unknown.methodPtr)();
    pCVar1 = this_01;
    if (cVar8 == '\0') {
      return;
    }
  } while( true );
}


/* Void ReadTokenFrom(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReadTokenFrom
               (JContainer *this,JsonReader *r,MethodInfo *method)

{
  if (r != (JsonReader *)0x0) {
    iVar1 = (*(r->klass->vtable).get_Depth.methodPtr)(r,(r->klass->vtable).get_Depth.method);
    cVar2 = (*(r->klass->vtable).__unknown.methodPtr)(r,(r->klass->vtable).__unknown.method);
    if (cVar2 == '\0') {
      uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar3);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar3 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar3);
      pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      func_?(pTVar4);
      uVar3 = func_?(7,pTVar4);
      func_?(args);
      func_?(args,uVar3);
      func_?(0,uVar3);
      ppSVar5 = &StringLiteral_Error_reading__0__from_JsonReade;
    }
    else {
      JContainer_ReadContentFrom(this,r,(MethodInfo *)0x0);
      iVar6 = (*(r->klass->vtable).get_Depth.methodPtr)(r,(r->klass->vtable).get_Depth.method);
      if (iVar6 <= iVar1) {
        return;
      }
      uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar3);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar3 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar3);
      pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      func_?(pTVar4);
      uVar3 = func_?(7,pTVar4);
      func_?(args);
      func_?(args,uVar3);
      func_?();
      ppSVar5 = &StringLiteral_Unexpected_end_of_content_while_;
    }
    method_00 = (MethodInfo *)0x0;
    pSVar7 = (String *)func_?(ppSVar5);
    pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar7,(IFormatProvider *)provider,args,method_00);
    uVar3 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar3);
    func_?(this_00);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar7,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JContainer__ReadTokenFrom_Newtonsoft__Json__JsonReader_
                   );
    func_?();
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean RemoveItem(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_RemoveItem
               (JContainer *this,JToken *item,MethodInfo *method)

{
  iVar1 = JContainer_IndexOfItem(this,item,(MethodInfo *)0x0);
  if (iVar1 < 0) {
    return 0;
  }
  (*(this->klass->vtable).RemoveItemAt.methodPtr)(this,iVar1);
  return 1;
}


/* Void RemoveItemAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_RemoveItemAt
               (JContainer *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  if (index < 0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
    func_?(pAVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Index_is_less_than_0_);
    pSVar4 = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__Newtonsoft__Json__Linq__JContainer__RemoveItemAt_int_);
    func_?(pAVar2,uVar1);
  }
  else {
    iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                      (this,(this->klass->vtable).__unknown_5.method);
    if (iVar5 == 0) goto code_?;
    iVar5 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar5);
    if (index < iVar5) {
      JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
      iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                        (this,(this->klass->vtable).__unknown_5.method);
      if (iVar5 != 0) {
        iVar5 = func_?(0,
                                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                ,iVar5,index);
        if (index == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(this->klass->vtable).__unknown_5.methodPtr)
                            (this,(this->klass->vtable).__unknown_5.method);
          if (iVar6 == 0) goto code_?;
          iVar6 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                  ,iVar6,index + -1);
        }
        iVar7 = (*(this->klass->vtable).__unknown_5.methodPtr)
                          (this,(this->klass->vtable).__unknown_5.method);
        if (iVar7 != 0) {
          iVar7 = func_?(0,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                  ,iVar7);
          if (index == iVar7 + -1) {
            iVar7 = 0;
          }
          else {
            iVar7 = (*(this->klass->vtable).__unknown_5.methodPtr)
                              (this,(this->klass->vtable).__unknown_5.method);
            if (iVar7 == 0) goto code_?;
            iVar7 = func_?(0,
                                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                    ,iVar7,index + 1);
          }
          if (iVar6 != 0) {
            *(int *)(iVar6 + 0x10) = iVar7;
            func_?(iVar6 + 0x10,iVar7);
          }
          if (iVar7 != 0) {
            *(int *)(iVar7 + 0xc) = iVar6;
            func_?(iVar7 + 0xc,iVar6);
          }
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 8) = 0;
            func_?(iVar5 + 8,0);
            *(undefined4 *)(iVar5 + 0xc) = 0;
            func_?(iVar5 + 0xc,0);
            *(undefined4 *)(iVar5 + 0x10) = 0;
            func_?(iVar5 + 0x10,0);
            iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                              (this,(this->klass->vtable).__unknown_5.method);
            if (iVar5 != 0) {
              func_?(4,
                              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                              ,iVar5,index);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar2);
  pSVar3 = (String *)func_?(&StringLiteral_Index_is_equal_to_or_greater_tha);
  pSVar4 = (String *)func_?(&StringLiteral_index);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__Newtonsoft__Json__Linq__JContainer__RemoveItemAt_int_);
  func_?(pAVar2,uVar1);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ReplaceAll(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReplaceAll
               (JContainer *this,Object *content,MethodInfo *method)

{
  (*(this->klass->vtable).ClearItems.methodPtr)(this,(this->klass->vtable).ClearItems.method);
  (*(this->klass->vtable).Add.methodPtr)(this,content,(this->klass->vtable).Add.method);
  return;
}


/* Void ReplaceItem(JToken, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReplaceItem
               (JContainer *this,JToken *existing,JToken *replacement,MethodInfo *method)

{
  if ((existing != (JToken *)0x0) && ((existing->fields)._parent == this)) {
    iVar1 = JContainer_IndexOfItem(this,existing,(MethodInfo *)0x0);
    (*(this->klass->vtable).SetItem.methodPtr)
              (this,iVar1,replacement,(this->klass->vtable).SetItem.method);
  }
  return;
}


/* Void SetItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_SetItem
               (JContainer *this,int32_t index,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>);
    cRam_? = '\x01';
  }
  if (index < 0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
    func_?(pAVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Index_is_less_than_0_);
    pSVar4 = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Linq__JContainer__SetItem_int__Newtonsoft__Json__Linq__JToken_
                           );
    func_?(pAVar2,uVar1);
  }
  else {
    iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                      (this,(this->klass->vtable).__unknown_5.method);
    if (iVar5 == 0) goto code_?;
    iVar5 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar5);
    if (index < iVar5) {
      iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                        (this,(this->klass->vtable).__unknown_5.method);
      if (iVar5 != 0) {
        piVar6 = (int *)func_?(0,
                                        TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                        ,iVar5,index);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
          cRam_? = '\x01';
        }
        if ((((piVar6 != (int *)0x0) &&
             ((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
              *(byte *)(*piVar6 + 0xb4))) &&
            (*(JValue__Class **)
              (*(int *)(*piVar6 + 100) + -4 +
              (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
             TypeInfo__Newtonsoft__Json__Linq__JValue)) &&
           (((piVar7 = piVar6,
             iVar5 = (**(code **)(*piVar6 + 0x124))(piVar6,*(undefined4 *)(*piVar6 + 0x128)),
             iVar5 == 10 && (item == (JToken *)0x0)) ||
            (cVar8 = (**(code **)(*piVar7 + 0xbc))(piVar7,item,*(undefined4 *)(*piVar7 + 0xc0)),
            cVar8 != '\0')))) {
          return;
        }
        JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
        pIVar9 = (Il2CppClass *)JContainer_EnsureParentToken(this,item,(MethodInfo *)0x0);
        (*(this->klass->vtable).ValidateToken.methodPtr)
                  (this,pIVar9,piVar6,(this->klass->vtable).ValidateToken.method);
        if (index != 0) {
          iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                            (this,(this->klass->vtable).__unknown_5.method);
          if (iVar5 == 0) goto code_?;
          func_?(0,
                          TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                          ,iVar5,index + -1);
        }
        pMVar10 = (this->klass->vtable).__unknown_5.method;
        iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)(this);
        if (iVar5 != 0) {
          iVar5 = func_?(0,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                  ,iVar5);
          if (index == iVar5 + -1) {
            pJVar11 = (JToken *)0x0;
          }
          else {
            iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                              (this,(this->klass->vtable).__unknown_5.method);
            if (iVar5 == 0) goto code_?;
            pJVar11 = (JToken *)
                      func_?(0,
                                      TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                      ,iVar5,index + 1);
          }
          if (pIVar9 != (Il2CppClass *)0x0) {
            ((JToken__Fields *)&pIVar9->name)->_parent = this;
            func_?((JToken__Fields *)&pIVar9->name,this);
            pIVar9->namespaze = (char *)pMVar10;
            func_?(&pIVar9->namespaze,pMVar10);
            if (pMVar10 != (MethodInfo *)0x0) {
              pMVar10->klass = pIVar9;
              func_?(&pMVar10->klass,pIVar9);
            }
            (pIVar9->byval_arg).data.generic_class = (Il2CppGenericClass *)pJVar11;
            func_?(&pIVar9->byval_arg,pJVar11);
            if (pJVar11 != (JToken *)0x0) {
              (pJVar11->fields)._previous = (JToken *)pIVar9;
              func_?(&(pJVar11->fields)._previous,pIVar9);
            }
            iVar5 = (*(this->klass->vtable).__unknown_5.methodPtr)
                              (this,(this->klass->vtable).__unknown_5.method);
            if ((iVar5 != 0) &&
               (func_?(1,
                                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                ,iVar5,index,pIVar9), piVar6 != (int *)0x0)) {
              piVar6[2] = 0;
              func_?(piVar6 + 2,0);
              piVar6[3] = 0;
              func_?(piVar6 + 3,0);
              piVar6[4] = 0;
              func_?(piVar6 + 4,0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar2 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar2);
  pSVar3 = (String *)func_?(&StringLiteral_Index_is_equal_to_or_greater_tha);
  pSVar4 = (String *)func_?(&StringLiteral_index);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (pAVar2,pSVar4,pSVar3,(MethodInfo *)0x0);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Linq__JContainer__SetItem_int__Newtonsoft__Json__Linq__JToken_
                         );
  func_?(pAVar2,uVar1);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add
               (JContainer *this,JToken *item,MethodInfo *method)

{
  (*(this->klass->vtable).Add.methodPtr)(this,item,(this->klass->vtable).Add.method);
  return;
}


/* Boolean System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains
               (JContainer *this,JToken *item,MethodInfo *method)

{
  bVar1 = (*(this->klass->vtable).ContainsItem.methodPtr)
                    (this,item,(this->klass->vtable).ContainsItem.method);
  return bVar1;
}


/* Boolean System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove
               (JContainer *this,JToken *item,MethodInfo *method)

{
  bVar1 = (*(this->klass->vtable).RemoveItem.methodPtr)
                    (this,item,(this->klass->vtable).RemoveItem.method);
  return bVar1;
}


/* Int32 System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf(JToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
        JContainer_System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf
                  (JContainer *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer);
    cRam_? = '\x01';
  }
  list = (IEnumerable_1_System_Object_ *)
         (*(this->klass->vtable).__unknown_5.methodPtr)
                   (this,(this->klass->vtable).__unknown_5.method);
  if ((TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer);
  }
  iVar1 = Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_2
                    (list,(Object *)item,
                     (IEqualityComparer_1_System_Object_ *)
                     TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->
                     static_fields->Instance,
                     int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                    );
  return iVar1;
}


/* Void System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert
               (JContainer *this,int32_t index,JToken *item,MethodInfo *method)

{
  (*(this->klass->vtable).InsertItem.methodPtr)
            (this,index,item,(this->klass->vtable).InsertItem.method);
  return;
}


/* Void System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item
               (JContainer *this,int32_t index,JToken *value,MethodInfo *method)

{
  (*(this->klass->vtable).SetItem.methodPtr)(this,index,value,(this->klass->vtable).SetItem.method);
  return;
}


/* Void System.Collections.ICollection.CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_ICollection_CopyTo
               (JContainer *this,Array *array,int32_t index,MethodInfo *method)

{
  (*(this->klass->vtable).CopyItemsTo.methodPtr)
            (this,array,index,(this->klass->vtable).CopyItemsTo.method);
  return;
}


/* Object System.Collections.ICollection.get_SyncRoot() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
         JContainer_System_Collections_ICollection_get_SyncRoot(JContainer *this,MethodInfo *method)

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


/* Int32 System.Collections.IList.Add(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
        JContainer_System_Collections_IList_Add(JContainer *this,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  (*(this->klass->vtable).Add.methodPtr)(this,pJVar1,(this->klass->vtable).Add.method);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar2 = (*(this->klass->vtable).__unknown_5.methodPtr)(this);
  if (iVar2 != 0) {
    iVar2 = func_?(0);
    return iVar2 + -1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean System.Collections.IList.Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_Contains(JContainer *this,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  bVar2 = (*(this->klass->vtable).ContainsItem.methodPtr)
                    (this,pJVar1,(this->klass->vtable).ContainsItem.method);
  return bVar2;
}


/* Int32 System.Collections.IList.IndexOf(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
        JContainer_System_Collections_IList_IndexOf
                  (JContainer *this,Object *value,MethodInfo *method)

{
  JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  list = (IEnumerable_1_System_Object_ *)
         (**(code **)(*in_stack_1 + 0x254))(in_stack_1);
  if ((TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar2 = Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_2
                    (list,in_stack_3,
                     (IEqualityComparer_1_System_Object_ *)
                     TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->
                     static_fields->Instance,
                     int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__Newtonsoft__Json__Linq__JToken__System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
                    );
  return iVar2;
}


/* Void System.Collections.IList.Insert(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_Insert
               (JContainer *this,int32_t index,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  (*(this->klass->vtable).InsertItem.methodPtr)
            (this,index,pJVar1,(this->klass->vtable).InsertItem.method);
  return;
}


/* Void System.Collections.IList.Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_Remove(JContainer *this,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  (*(this->klass->vtable).RemoveItem.methodPtr)(this,pJVar1,(this->klass->vtable).RemoveItem.method)
  ;
  return;
}


/* Void System.Collections.IList.RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_RemoveAt(JContainer *this,int32_t index,MethodInfo *method)

{
  (*(this->klass->vtable).RemoveItemAt.methodPtr)
            (this,index,(this->klass->vtable).RemoveItemAt.method);
  return;
}


/* Object System.Collections.IList.get_Item(Int32) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
         JContainer_System_Collections_IList_get_Item
                   (JContainer *this,int32_t index,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*(this->klass->vtable).GetItem.methodPtr)
                     (this,index,(this->klass->vtable).GetItem.method);
  return pOVar1;
}


/* Void System.Collections.IList.set_Item(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_set_Item
               (JContainer *this,int32_t index,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  (*(this->klass->vtable).SetItem.methodPtr)(this,index,pJVar1,(this->klass->vtable).SetItem.method)
  ;
  return;
}


/* Void ValidateToken(JToken, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ValidateToken
               (JContainer *this,JToken *o,JToken *existing,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_o);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)o,StringLiteral_o,(MethodInfo *)0x0);
  if (o != (JToken *)0x0) {
    iVar1 = (*(o->klass->vtable).__unknown_2.methodPtr)(o,(o->klass->vtable).__unknown_2.method);
    if (iVar1 != 4) {
      return;
    }
    uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar2);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__Object,2);
    args = (Object__Array *)func_?(uVar2);
    func_?(o);
    pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)o,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pTVar3);
    func_?();
    pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)pTVar3,(MethodInfo *)0x0);
    func_?(args);
    func_?(args,pTVar3);
    func_?();
    method_00 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(&StringLiteral_Can_not_add__0__to__1__);
    pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar4,(IFormatProvider *)provider,args,method_00);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (ArgumentException *)func_?(uVar2);
    func_?(this_00);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this_00,pSVar4,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JContainer__ValidateToken_Newtonsoft__Json__Linq__JToken__Newtonsoft__Json__Linq__JToken_
                   );
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerable`1[System.Object] Values[Object]() */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Values
          (JContainer *this,MethodInfo *method)

{
  uVar1 = (*(this->klass->vtable).__unknown_5.methodPtr)
                    (this,(this->klass->vtable).__unknown_5.method);
  pIVar2 = (IEnumerable_1_System_Object_ *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (uVar1,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pIVar2;
}


/* JContainer(JContainer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer__ctor_1
               (JContainer *this,JContainer *other,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&StringLiteral_c);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)other,StringLiteral_c,(MethodInfo *)0x0);
  if (other != (JContainer *)0x0) {
    piVar4 = (int *)func_?();
    uStack_1 = 1;
    while( true ) {
      if (piVar4 == (int *)0x0) break;
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar4 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar4 == (int *)0x0) break;
      uVar6 = 0;
      uVar7 = *(ushort *)(*piVar4 + 0xb2);
      if (uVar7 != 0) {
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)
               (*(int *)(*piVar4 + 0x58) + (uint)uVar6 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar8 = (undefined4 *)
                     (*(int *)(*(int *)(*piVar4 + 0x58) + 4 + (uint)uVar6 * 8) * 8 + 0xbc + *piVar4)
            ;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      puVar8 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar8)();
      (*(this->klass->vtable).Add.methodPtr)();
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_get_Count
                  (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)
                &TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
    ;
    func_?();
    cRam_? = '\x01';
  }
  pMStack_1 = (this->klass->vtable).__unknown_5.method;
  pIStack_2 = (ICollection_1_Newtonsoft_Json_Linq_JToken___Class *)this;
  pMStack_1 = (MethodInfo *)(*(this->klass->vtable).__unknown_5.methodPtr)();
  if (pMStack_1 != (MethodInfo *)0x0) {
    pIStack_2 = TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>;
    puStack_3 = (undefined *)0x0;
    iVar4 = func_?();
    return iVar4;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  uVar5 = func_?(&puStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar4 = (*pcVar6)();
  return iVar4;
}


/* JToken get_First() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_get_First
                   (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Linq__JToken_MethodInfo__System__Linq__Enumerable__FirstOrDefault<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                   );
    cRam_? = '\x01';
  }
  source = (IEnumerable_1_System_Object_ *)
           (*(this->klass->vtable).__unknown_5.methodPtr)
                     (this,(this->klass->vtable).__unknown_5.method);
  pJVar1 = (JToken *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_1
                     (source,
                      Newtonsoft__Json__Linq__JToken_MethodInfo__System__Linq__Enumerable__FirstOrDefault<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pJVar1;
}


/* Boolean get_HasValues() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_get_HasValues
               (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)
                &TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
    ;
    func_?();
    cRam_? = '\x01';
  }
  pMStack_1 = (this->klass->vtable).__unknown_5.method;
  pIStack_2 = (ICollection_1_Newtonsoft_Json_Linq_JToken___Class *)this;
  pMStack_1 = (MethodInfo *)(*(this->klass->vtable).__unknown_5.methodPtr)();
  if (pMStack_1 != (MethodInfo *)0x0) {
    pIStack_2 = TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>;
    puStack_3 = (undefined *)0x0;
    iVar4 = func_?();
    return 0 < iVar4;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  uVar5 = func_?(&puStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* JToken get_Last() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_get_Last
                   (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__Linq__JToken_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                   );
    cRam_? = '\x01';
  }
  source = (IEnumerable_1_System_Object_ *)
           (*(this->klass->vtable).__unknown_5.methodPtr)
                     (this,(this->klass->vtable).__unknown_5.method);
  pJVar1 = (JToken *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_LastOrDefault
                     (source,
                      Newtonsoft__Json__Linq__JToken_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pJVar1;
}

