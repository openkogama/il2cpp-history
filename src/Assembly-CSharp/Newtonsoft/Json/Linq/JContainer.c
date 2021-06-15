
/* Void Add(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Add
               (JContainer *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar1 != 0) {
    index = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    JContainer_AddInternal(this,index,content,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  bVar4 = JContainer_IsMultiContent(this,content,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    JContainer_CreateFromContent(this,content,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).InsertItem.method)(this);
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if (content != (Object *)0x0) {
    iVar5 = func_?();
    if (iVar5 == 0) {
      func_?();
    }
    else {
      content = (Object *)index;
      piVar6 = (int *)func_?();
      uStack_1 = 0;
      while (piVar6 != (int *)0x0) {
        cVar7 = func_?();
        if (cVar7 == '\0') {
          uStack_1 = 0xffffffff;
          iVar5 = func_?();
          if (iVar5 != 0) {
            func_?();
          }
          goto code_?;
        }
        uVar8 = 0;
        uVar9 = *(ushort *)(*piVar6 + 0xb6);
        if (uVar9 != 0) {
          iVar5 = *(int *)(*piVar6 + 0x58);
          do {
            if (*(IEnumerator__Class **)(iVar5 + (uint)uVar8 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar10 = (undefined4 *)(*piVar6 + (*(int *)(iVar5 + 4 + (uint)uVar8 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        puVar10 = (undefined4 *)func_?();
code_?:
        content_00 = (Object *)(*(code *)*puVar10)();
        JContainer_AddInternal(this,(int32_t)content,content_00,(MethodInfo *)0x0);
        content = (Object *)((int)&content->klass + 1);
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CheckReentrancy() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_CheckReentrancy
               (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._busy == 0) {
    return;
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar1);
  func_?(0,pTVar1);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_change__0__during_a_colle,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (InvalidOperationException *)
            func_?(TypeInfo__System__InvalidOperationException);
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  pMStack2 = MethodInfo__Newtonsoft__Json__Linq__JContainer__CheckReentrancy__;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JEnumerable`1[JToken] Children() */

JEnumerable_1_JToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Children
          (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  this = (JContainer *)0x0;
  func_?(&this,uVar1,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
  iVar4 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar4 != 0) {
    piVar5 = (int *)func_?(0);
    uStack_1 = 0;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?(1);
      unaff_EDI = 
      TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>;
      if (cVar6 == '\0') {
        unaff_EDI = (IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class *)0x0;
        uStack_1 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          func_?(0);
        }
        iVar4 = (*(code *)(this->klass->vtable).__unknown_5.method)();
        if (iVar4 != 0) {
          func_?(3);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      uVar7 = 0;
      uVar8 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar8 != 0) {
        iVar4 = *(int *)(*piVar5 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar4 + (uint)uVar7 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar9 = (undefined4 *)(*piVar5 + (*(int *)(iVar4 + 4 + (uint)uVar7 * 8) + 0x18) * 8);
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
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
  }
  func_?();
  func_?(unaff_EDI);
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
  piVar1 = (int *)(*(code *)(this->klass->vtable).get_First.method)
                            (this,(this->klass->vtable).get_Last.methodPtr);
  if (container == (JContainer *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  piVar4 = (int *)(*(code *)(container->klass->vtable).get_First.method)
                            (container,(container->klass->vtable).get_Last.methodPtr);
  if (piVar1 != piVar4) {
    while (piVar1 != (int *)0x0) {
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      cVar5 = (**(code **)(*piVar1 + 0x120))(piVar1,piVar4,*(undefined4 *)(*piVar1 + 0x124));
      if (cVar5 == '\0') {
        return 0;
      }
      piVar6 = (int *)(*(code *)(this->klass->vtable).get_Last.method)
                                (this,(this->klass->vtable).Children.methodPtr);
      if (piVar1 == piVar6) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)piVar1[4];
      }
      piVar6 = (int *)(*(code *)(container->klass->vtable).get_Last.method)
                                (container,(container->klass->vtable).Children.methodPtr);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_4 = 0;
  iVar5 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar5 != 0) {
    piVar6 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                    ,iVar5);
    uStack_1 = 0;
    while (piVar6 != (int *)0x0) {
      cVar7 = func_?(1,TypeInfo__System__Collections__IEnumerator,piVar6);
      unaff_EDI = 
      TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>;
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar6 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar6);
        }
        *unaff_FS_OFFSET = uStack_3;
        return uStack_4;
      }
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar6 + 0xb6);
      if (uVar9 != 0) {
        iVar5 = *(int *)(*piVar6 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar5 + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar10 = (undefined4 *)(*piVar6 + (*(int *)(iVar5 + 4 + (uint)uVar8 * 8) + 0x18) * 8);
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
      uVar12 = (**(code **)(*piVar11 + 0x178))(piVar11,*(undefined4 *)(*piVar11 + 0x17c));
      uStack_4 = uStack_4 ^ uVar12;
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (array == (Array *)0x0) {
    this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,StringLiteral_array,(MethodInfo *)0x0);
  }
  else if (arrayIndex < 0) {
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,StringLiteral_arrayIndex,StringLiteral_arrayIndex_is_less_than_0_,
               (MethodInfo *)0x0);
  }
  else {
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(array,(MethodInfo *)0x0);
    if (arrayIndex < iVar4) {
      iVar4 = JContainer_get_Count(this,(MethodInfo *)0x0);
      iVar5 = mscorlib.dll::System::Array::Array_get_Length(array,(MethodInfo *)0x0);
      if (iVar4 <= iVar5 - arrayIndex) {
        iVar6 = 0;
        iVar7 = (*(code *)(this->klass->vtable).__unknown_5.method)();
        if (iVar7 != 0) {
          puVar8 = (undefined4 *)func_?();
          uStack_1 = 0;
          while (puVar8 != (undefined4 *)0x0) {
            cVar9 = func_?();
            if (cVar9 == '\0') {
              *puVar8 = 0xa2;
              uStack_1 = 0xffffffff;
              if (puVar8 != (undefined4 *)0x0) {
                func_?();
              }
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            value = (Object *)func_?();
            mscorlib.dll::System::Array::Array_SetValue_4
                      (array,value,iVar6 + arrayIndex,(MethodInfo *)0x0);
            iVar6 = iVar6 + 1;
          }
        }
        func_?();
        func_?();
      }
      this_02 = (ArgumentException *)func_?();
      message = StringLiteral_The_number_of_elements_in_the_so;
    }
    else {
      this_02 = (ArgumentException *)func_?();
      message = StringLiteral_arrayIndex_is_equal_to_or_greate;
    }
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this_02,message,(MethodInfo *)0x0);
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* JToken CreateFromContent(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_CreateFromContent
                   (JContainer *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (content != (Object *)0x0) {
    pOVar1 = content->klass;
    bVar2 = (pOVar1->_1).naturalAligment;
    bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JToken->_1).naturalAligment;
    if ((bVar2 < bVar3) ||
       ((pOVar1->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pOVar5 = (Object *)0x0;
    if (bVar4) {
      pOVar5 = content;
    }
    if (pOVar5 != (Object *)0x0) {
      bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JToken->_1).naturalAligment;
      if ((bVar2 < bVar3) ||
         ((pOVar1->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pJVar6 = (JToken *)0x0;
      if (bVar4) {
        pJVar6 = (JToken *)content;
      }
      if (pJVar6 != (JToken *)0x0) {
        return pJVar6;
      }
      func_?(content,TypeInfo__Newtonsoft__Json__Linq__JToken);
      pcVar7 = (code *)swi(3);
      pJVar6 = (JToken *)(*pcVar7)();
      return pJVar6;
    }
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this_00 = (ScaleAnimationBase *)func_?();
  pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           JValue::JValue_GetValueType
                     ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,content,(MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  this_00[1].klass = (ScaleAnimationBase__Class *)content;
  (this_00->fields).OnScaleAnimationStopped = pSVar8;
  return (JToken *)this_00;
}


/* JsonWriter CreateWriter() */

JsonWriter *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_CreateWriter
          (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  JsonWriter::JsonWriter__ctor(this_00,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)this,StringLiteral_container,(MethodInfo *)0x0);
  this_00[1].klass = (JsonWriter__Class *)this;
  this_00[1].monitor = (MonitorData *)this;
  return this_00;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] Descendants() */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Descendants
          (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).target = (Transform *)this;
    this_00[1].klass = (ScaleAnimationBase__Class *)0xfffffffe;
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* JToken EnsureParentToken(JToken) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_EnsureParentToken
                   (JContainer *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item == (JToken *)0x0) {
    method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    this_00 = (ScaleAnimationBase *)func_?();
    pSVar1 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             JValue::JValue_GetValueType
                       ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)0x0,
                        (MethodInfo *)0x0);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    (this_00->fields).OnScaleAnimationStopped = pSVar1;
    this_00[1].klass = (ScaleAnimationBase__Class *)0x0;
    return (JToken *)this_00;
  }
  if ((item->fields)._parent != (JContainer *)0x0) {
code_?:
    pJVar2 = (JToken *)
             (*(code *)(item->klass->vtable).__unknown.method)
                       (item,(item->klass->vtable).__unknown_1.methodPtr);
    return pJVar2;
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
  func_?(0);
  pcVar3 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar3)();
  return pJVar2;
}


/* JToken EnsureValue(Object) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_EnsureValue
                   (JContainer *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    return (JToken *)0x0;
  }
  bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JToken->_1).naturalAligment;
  if (((value->klass->_1).naturalAligment < bVar1) ||
     ((value->klass->_1).typeHierarchy[bVar1 - 1] !=
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pOVar3 = (Object *)0x0;
  if (bVar2) {
    pOVar3 = value;
  }
  if (pOVar3 != (Object *)0x0) {
    pJVar4 = (JToken *)func_?(value,TypeInfo__Newtonsoft__Json__Linq__JToken);
    return pJVar4;
  }
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,StringLiteral_Argument_is_not_a_JToken_,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar5 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar5)();
  return pJVar4;
}


/* JToken GetItem(Int32) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_GetItem
                   (JContainer *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar1 != 0) {
    pJVar2 = (JToken *)
             func_?(3,
                             TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                             ,iVar1,index);
    return pJVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pJVar2 = (JToken *)(*pcVar3)();
  return pJVar2;
}


/* Int32 IndexOfItem(JToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_IndexOfItem
                  (JContainer *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  list = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
         (*(code *)(this->klass->vtable).__unknown_5.method)
                   (this,(this->klass->vtable).InsertItem.methodPtr);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->vtable
              ).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->_1).
      cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer);
  }
  iVar1 = Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_3
                    (list,item,
                     (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar1 != 0) {
    iVar1 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    if (iVar1 < index) goto code_?;
    JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
    pJVar2 = JContainer_EnsureParentToken(this,item,(MethodInfo *)0x0);
    if (index == 0) {
      pJVar3 = (JToken *)0x0;
    }
    else {
      iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)(this);
      if (iVar1 == 0) goto code_?;
      pJVar3 = (JToken *)
               func_?(3,
                               TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                               ,iVar1,index + -1);
    }
    iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)(this);
    if (iVar1 != 0) {
      iVar1 = func_?(0,
                              TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                              ,iVar1);
      if (index == iVar1) {
        pJVar4 = (JToken *)0x0;
      }
      else {
        iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                          (this,(this->klass->vtable).InsertItem.methodPtr);
        if (iVar1 == 0) goto code_?;
        pJVar4 = (JToken *)
                 func_?(3,
                                 TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                 ,iVar1,index);
      }
      (*(code *)(this->klass->vtable).ValidateToken.method)
                (this,pJVar2,0,(this->klass->vtable).Add.methodPtr);
      if (pJVar2 != (JToken *)0x0) {
        (pJVar2->fields)._parent = this;
        (pJVar2->fields)._previous = pJVar3;
        if (pJVar3 != (JToken *)0x0) {
          (pJVar3->fields)._next = pJVar2;
        }
        (pJVar2->fields)._next = pJVar4;
        if (pJVar4 != (JToken *)0x0) {
          (pJVar4->fields)._previous = pJVar2;
        }
        iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                          (this,(this->klass->vtable).InsertItem.methodPtr);
        if (iVar1 != 0) {
          func_?(1,
                          TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                          ,iVar1,index,pJVar2);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_00,StringLiteral_index,StringLiteral_Index_must_be_within_the_bounds_,
             (MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Linq__JContainer__InsertItem_int__Newtonsoft__Json__Linq__JToken_
                 );
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsMultiContent(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_IsMultiContent
               (JContainer *this,Object *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(content,TypeInfo__System__Collections__IEnumerable);
  if (iVar1 != 0) {
    if (content != (Object *)0x0) {
      pOVar2 = (Object *)0x0;
      if ((String__Class *)content->klass == TypeInfo__System__String) {
        pOVar2 = content;
      }
      if (pOVar2 != (Object *)0x0) {
        return 0;
      }
    }
    iVar1 = func_?(content,TypeInfo__Newtonsoft__Json__Linq__JToken);
    if (iVar1 == 0) {
      iVar1 = func_?(content,TypeInfo__System__Byte);
      return 1 - (iVar1 != 0);
    }
  }
  return 0;
}


/* Boolean IsTokenUnchanged(JToken, JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_IsTokenUnchanged
               (JToken *currentValue,JToken *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (currentValue != (JToken *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
    if (((currentValue->klass->_1).naturalAligment < bVar1) ||
       ((currentValue->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pJVar3 = (JToken *)0x0;
    if (bVar2) {
      pJVar3 = currentValue;
    }
    if (pJVar3 != (JToken *)0x0) {
      iVar4 = (*(code *)(pJVar3->klass->vtable).__unknown_2.method)
                        (pJVar3,(pJVar3->klass->vtable).__unknown_3.methodPtr);
      if ((iVar4 == 10) && (newValue == (JToken *)0x0)) {
        return 1;
      }
      bVar5 = (*(code *)(pJVar3->klass->vtable).Equals.method)
                        (pJVar3,newValue,(pJVar3->klass->vtable).Finalize.methodPtr);
      return bVar5;
    }
  }
  return 0;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void ReadContentFrom(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReadContentFrom
               (JContainer *this,JsonReader *r,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)r;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)r,StringLiteral_r,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)&UNK_?;
  lineInfo = (IJsonLineInfo *)func_?(this_01,TypeInfo__Newtonsoft__Json__IJsonLineInfo);
  provider = (Il2CppClass *)this;
  do {
    if (provider != (Il2CppClass *)0x0) {
      pJVar2 = (JObject__Class *)((Il2CppClass_0 *)&provider->image)->image;
      bVar3 = (pJVar2->_1).naturalAligment;
      bVar4 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
      _auStack_8 = (uint3)bVar3 << 0x10;
      iVar5 = _auStack_8;
      uStack_6 = (ushort)bVar3;
      if ((bVar3 < bVar4) ||
         ((JProperty__Class *)(pJVar2->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pIVar8 = (Il2CppClass *)0x0;
      if (bVar7) {
        pIVar8 = provider;
      }
      if (pIVar8 == (Il2CppClass *)0x0) goto code_?;
      bVar4 = (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment;
      if (bVar3 < bVar4) {
code_?:
        uStack_6 = uStack_6 & 0xff;
      }
      else {
        _auStack_8 = CONCAT13(1,iVar5);
        if ((JProperty__Class *)(pJVar2->_1).typeHierarchy[bVar4 - 1] !=
            TypeInfo__Newtonsoft__Json__Linq__JProperty) goto code_?;
      }
      pIVar8 = (Il2CppClass *)0x0;
      if (uStack_6._1_1_ != '\0') {
        pIVar8 = provider;
      }
      if (pIVar8 != (Il2CppClass *)0x0) {
        if (((byte)uStack_6 < (TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).naturalAligment) ||
           ((JProperty__Class *)(pJVar2->_1).typeHierarchy[bVar4 - 1] !=
            TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pIVar8 = (Il2CppClass *)0x0;
        if (bVar7) {
          pIVar8 = provider;
        }
        if (pIVar8 != (Il2CppClass *)0x0) {
          pJVar9 = JProperty::JProperty_get_Value((JProperty *)pIVar8,(MethodInfo *)0x0);
          if (pJVar9 != (JToken *)0x0) {
            if (provider == (Il2CppClass *)this) {
              return;
            }
            provider = (Il2CppClass *)((Il2CppClass_0 *)&provider->name)->image;
          }
          goto code_?;
        }
      }
code_?:
      func_?();
code_?:
      this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)func_?();
      mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
                ((InvalidOperationException *)this_01,StringLiteral_The_parent_is_missing_,
                 (MethodInfo *)0x0);
      func_?();
code_?:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      provider = (Il2CppClass *)
                 mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      pOVar10 = (Object__Array *)func_?();
      func_?(this_01,0);
      this = (JContainer *)func_?(7,this_01);
      uVar11 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
      func_?(pOVar10,0);
      func_?(pOVar10,uVar11);
      func_?();
      this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_The_JsonReader_should_not_be_on_,
                           (IFormatProvider *)provider,pOVar10,(MethodInfo *)0x0);
      pIVar8 = (Il2CppClass *)func_?();
      mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
                ((InvalidOperationException *)pIVar8,(String *)this_01,(MethodInfo *)0x0);
      bVar3 = (undefined1 *)0xffffffdf < &stack0xffffffe0;
      func_?();
      goto code_?;
    }
code_?:
    pJVar12 = this;
    bVar3 = 0;
    pIVar8 = (Il2CppClass *)pJVar12;
    if (this_01 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) goto code_?;
    uVar11 = (*(code *)(((String__Class *)this_01->klass)->vtable).System_IConvertible_ToChar.method)
                      ();
    pIVar8 = provider;
    switch(uVar11) {
    case 0:
      break;
    case 1:
      pIVar8 = (Il2CppClass *)func_?();
      JObject::JObject__ctor((JObject *)pIVar8,(MethodInfo *)0x0);
      goto code_?;
    case 2:
      pIVar8 = (Il2CppClass *)func_?();
      JArray::JArray__ctor((JArray *)pIVar8,(MethodInfo *)0x0);
code_?:
      bVar3 = 0;
      if (pIVar8 != (Il2CppClass *)0x0) {
        pIVar1 = pIVar8;
        JToken::JToken_SetLineInfo((JToken *)pIVar8,lineInfo,(MethodInfo *)0x0);
        bVar3 = 0;
        if (provider != (Il2CppClass *)0x0) {
          (*(code *)(((JObject__Class *)((Il2CppClass_0 *)&provider->image)->image)->vtable).Add.
                    method)(provider);
          break;
        }
      }
      goto code_?;
    case 3:
      piVar13 = (int *)(*(code *)(((String__Class *)this_01->klass)->vtable).
                                 System_IConvertible_ToDateTime.method)();
      bVar3 = 0;
      pIVar8 = (Il2CppClass *)pJVar12;
      if (piVar13 != (int *)0x0) {
        this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                  (**(code **)(*piVar13 + 0xd8))();
        pIVar8 = (Il2CppClass *)func_?(TypeInfo__Newtonsoft__Json__Linq__JConstructor);
        in_stack_14 = pIVar8;
        JConstructor::JConstructor__ctor_4
                  ((JConstructor *)pIVar8,(String *)this_01,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pIVar8 != (Il2CppClass *)0x0) {
          pIVar1 = pIVar8;
          JToken::JToken_SetLineInfo((JToken *)pIVar8,(IJsonLineInfo *)pIVar8,(MethodInfo *)0x0);
          bVar3 = 0;
          if (provider != (Il2CppClass *)0x0) {
            (*(code *)(((JObject__Class *)((Il2CppClass_0 *)&provider->image)->image)->vtable).Add.
                      method)(provider);
            this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)r;
            break;
          }
        }
      }
      goto code_?;
    case 4:
      piVar13 = (int *)(*(code *)(((String__Class *)this_01->klass)->vtable).
                                 System_IConvertible_ToDateTime.method)();
      bVar3 = 0;
      pIVar8 = (Il2CppClass *)pJVar12;
      if (piVar13 != (int *)0x0) {
        pSVar15 = (String *)(**(code **)(*piVar13 + 0xd8))();
        pIVar8 = (Il2CppClass *)func_?(TypeInfo__Newtonsoft__Json__Linq__JProperty);
        in_stack_14 = pIVar8;
        JProperty::JProperty__ctor_1((JProperty *)pIVar8,pSVar15,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pIVar8 != (Il2CppClass *)0x0) {
          pIVar1 = pIVar8;
          JToken::JToken_SetLineInfo((JToken *)pIVar8,lineInfo,(MethodInfo *)0x0);
          bVar3 = 0;
          if (provider != (Il2CppClass *)0x0) {
            pJVar2 = (JObject__Class *)((Il2CppClass_0 *)&provider->image)->image;
            bVar3 = (TypeInfo__Newtonsoft__Json__Linq__JObject->_1).naturalAligment;
            if (((pJVar2->_1).naturalAligment < bVar3) ||
               ((JObject__Class *)(pJVar2->_1).typeHierarchy[bVar3 - 1] !=
                TypeInfo__Newtonsoft__Json__Linq__JObject)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pIVar16 = (Il2CppClass *)0x0;
            if (bVar7) {
              pIVar16 = provider;
            }
            if (pIVar16 == (Il2CppClass *)0x0) goto code_?;
            pJVar17 = JObject::JObject_Property((JObject *)pIVar16,pSVar15,(MethodInfo *)0x0);
            pJVar18 = _UNK_?;
            if (pJVar17 == (JProperty *)0x0) {
              (*(code *)(((JObject__Class *)((Il2CppClass_0 *)&provider->image)->image)->vtable).Add
                        .method)();
            }
            else {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
                pJVar17 = pJVar18;
              }
              pJVar12 = (pJVar17->fields)._._._parent;
              if (pJVar12 == (JContainer *)0x0) goto code_?;
              (*(code *)(pJVar12->klass->vtable).ReplaceItem.method)();
            }
            break;
          }
        }
      }
      goto code_?;
    case 5:
      piVar13 = (int *)(*(code *)(((String__Class *)this_01->klass)->vtable).
                                 System_IConvertible_ToDateTime.method)();
      bVar3 = 0;
      pIVar8 = (Il2CppClass *)pJVar12;
      if (piVar13 != (int *)0x0) {
        pIVar16 = (Il2CppClass *)(**(code **)(*piVar13 + 0xd8))();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pIVar8 = (Il2CppClass *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play
                  ((ScaleAnimationBase *)pIVar8,0.0,(MethodInfo *)pIVar1);
        ((Il2CppClass_0 *)&pIVar8->declaringType)->image = (Il2CppImage *)pIVar16;
        ((Il2CppClass_0 *)&pIVar8->castClass)->image = (Il2CppImage *)0x5;
        goto code_?;
      }
code_?:
      uVar19 = func_?();
      pIVar1 = (Il2CppClass *)uVar19;
      bVar20 = (byte)((ulonglong)uVar19 >> 0x20);
      pbVar21 = (byte *)CONCAT22((short)((ulonglong)uVar19 >> 0x30),CONCAT11(0x75,bVar20));
      r_00 = &this_01->monitor;
      out((String__Class *)this_01->klass,CONCAT11(0x75,bVar20));
      bVar4 = *(byte *)r_00;
      cVar22 = *(char *)r_00;
      *(byte *)r_00 = cVar22 + 0x75U + bVar3;
      if (0x8a < bVar4 || CARRY1(cVar22 + 0x75U,bVar3)) {
        pIVar1 = (((ScaleAnimationBase__Class *)((int)pIVar1->vtable + 0x28))->_0).parent;
code_?:
        pIVar16 = (Il2CppClass *)(*(code *)pIVar1)();
        pMVar23 = *r_00;
        goto code_?;
      }
      bVar3 = (byte)uVar19;
      uVar24 = (undefined3)((ulonglong)uVar19 >> 8);
      if (CARRY1(in_stack_25,bVar3)) {
        pIVar1 = (Il2CppClass *)CONCAT31(uVar24,0x14);
        ((Il2CppClass_0 *)&pIVar1->image)->image =
             (Il2CppImage *)
             ((int)&(((JObject__Class *)((Il2CppClass_0 *)&pIVar1->image)->image)->_0).image +
             (int)&((Il2CppClass_0 *)&pIVar1->image)->image);
code_?:
        *(char *)((int)(provider + 0x9c) + 0x1f0U) =
             *(char *)((int)(provider + 0x9c) + 0x1f0U) + (char)extraout_ECX;
code_?:
        pcVar26 = (char *)((int)&this_01->klass + 3);
        *pcVar26 = *pcVar26 + bVar20;
        pSVar27 = (ScaleAnimationBase__Class *)((int)(provider + 0xfffffbb3) + 0x9a);
        *(byte *)&pSVar27->_0 = *(byte *)&pSVar27->_0 >> 1 | *(char *)&pSVar27->_0 << 7;
        ((Il2CppClass_0 *)&pIVar1->image)->image =
             (Il2CppImage *)
             ((int)&(((JObject__Class *)((Il2CppClass_0 *)&pIVar1->image)->image)->_0).image +
             (int)&((Il2CppClass_0 *)&pIVar1->image)->image);
        *(char *)&((ScaleAnimationBase__Class *)((int)(provider + 0xa1) + 0x14dU))->_0 =
             *(char *)&((ScaleAnimationBase__Class *)((int)(provider + 0xa1) + 0x14dU))->_0 + '\x1c'
        ;
        pcVar26 = (char *)((int)&this_01->klass + 3);
        *pcVar26 = *pcVar26 + bVar20;
        bVar7 = *pcVar26 == '\0';
code_?:
        uVar11 = (int)(provider + 0xffdb6583) + 400;
        *(uint *)uVar11 = *(int *)uVar11 << 1 | (uint)(*(int *)uVar11 < 0);
code_?:
        if (bVar7) goto code_?;
code_?:
        JContainer_ReadContentFrom(this,(JsonReader *)r_00,(MethodInfo *)0x0);
        pIVar1 = (Il2CppClass *)*r_00;
      }
      else {
        bVar4 = (byte)provider;
        bVar7 = CARRY1(*(byte *)&((Il2CppClass_0 *)&provider->image)->image,bVar4);
        *(byte *)&((Il2CppClass_0 *)&provider->image)->image =
             *(char *)&((Il2CppClass_0 *)&provider->image)->image + bVar4;
        if (!bVar7) goto code_?;
        bVar28 = (byte)((uint)provider >> 8);
        bVar29 = CARRY1((byte)*extraout_ECX,bVar28) || CARRY1((char)*extraout_ECX + bVar28,bVar7);
        *extraout_ECX = (MonitorData)((char)*extraout_ECX + bVar28 + bVar7);
        if (*extraout_ECX == (MonitorData)0x0) {
          ((Il2CppClass_0 *)&pIVar1->image)->image =
               (Il2CppImage *)
               ((int)&(((JObject__Class *)((Il2CppClass_0 *)&pIVar1->image)->image)->_0).image +
               (int)&((Il2CppClass_0 *)&pIVar1->image)->image);
          goto code_?;
        }
        bVar30 = *(char *)&((Il2CppClass_0 *)&pIVar1->image)->image + bVar20;
        bVar7 = CARRY1(*(byte *)&((Il2CppClass_0 *)&pIVar1->image)->image,bVar20) ||
                 CARRY1(bVar30,bVar29);
        *(byte *)&((Il2CppClass_0 *)&pIVar1->image)->image = bVar30 + bVar29;
        if (bVar7 || *(char *)&((Il2CppClass_0 *)&pIVar1->image)->image == '\0')
        goto code_?;
        bVar29 = CARRY1(*pbVar21,bVar28) || CARRY1(*pbVar21 + bVar28,bVar7);
        *pbVar21 = *pbVar21 + bVar28 + bVar7;
        pMVar23 = extraout_ECX;
        pIVar16 = pIVar1;
        if (*pbVar21 != 0) {
code_?:
          pMVar23 = *(MonitorData **)(pMVar23 + 0x118);
code_?:
          pIVar1 = (Il2CppClass *)(*(code *)pMVar23)();
code_?:
          bVar7 = (char)pIVar1 == '\0';
          pIVar8 = pIVar16;
          goto code_?;
        }
        bVar7 = CARRY1(*pbVar21,bVar28) || CARRY1(*pbVar21 + bVar28,bVar29);
        *pbVar21 = *pbVar21 + bVar28 + bVar29;
        pIVar16 = pIVar8;
        if (*pbVar21 != 0) {
          cVar22 = (bVar3 - 1) - bVar7;
          pcVar26 = (char *)CONCAT31(uVar24,cVar22);
          *pcVar26 = *pcVar26 + cVar22;
          goto code_?;
        }
        bVar29 = CARRY1(*pbVar21,bVar28) || CARRY1(*pbVar21 + bVar28,bVar7);
        *pbVar21 = *pbVar21 + bVar28 + bVar7;
        if (*pbVar21 != 0) goto code_?;
        bVar7 = CARRY1(*pbVar21,bVar28) || CARRY1(*pbVar21 + bVar28,bVar29);
        *pbVar21 = *pbVar21 + bVar28 + bVar29;
        if (*pbVar21 != 0) {
          *(byte *)&((Il2CppClass_0 *)&pIVar1->image)->image =
               *(char *)&((Il2CppClass_0 *)&pIVar1->image)->image + bVar3;
          goto code_?;
        }
        bVar29 = CARRY1(bVar4,bVar4) || CARRY1(bVar4 * '\x02',bVar7);
        cVar22 = bVar4 * '\x02' + bVar7;
        provider = (Il2CppClass *)CONCAT31((int3)((uint)provider >> 8),cVar22);
        bVar7 = true;
        if (cVar22 == '\0') goto code_?;
        bVar4 = *(char *)&((Il2CppClass_0 *)&pIVar1->image)->image + bVar3;
        bVar7 = CARRY1(*(byte *)&((Il2CppClass_0 *)&pIVar1->image)->image,bVar3) ||
                 CARRY1(bVar4,bVar29);
        *(byte *)&((Il2CppClass_0 *)&pIVar1->image)->image = bVar4 + bVar29;
        if (*(char *)&((Il2CppClass_0 *)&pIVar1->image)->image != '\0') goto code_?;
        bVar3 = (byte)((ulonglong)uVar19 >> 8);
        bVar29 = CARRY1(bRam_?,bVar3) || CARRY1(bRam_? + bVar3,bVar7);
        bRam_? = bRam_? + bVar3 + bVar7;
        if (bRam_? != 0) goto code_?;
        bVar7 = CARRY1(bRam_?,bVar3);
        bVar3 = bRam_? + bVar3;
        bRam_? = bVar3 + bVar29;
        if (bRam_? != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *pbVar21 = *pbVar21 + bVar28 + (bVar7 || CARRY1(bVar3,bVar29));
        if (*pbVar21 == 0) {
          pcVar31 = (code *)swi(3);
          (*pcVar31)();
          return;
        }
      }
      iVar32 = (*(code *)(((ScaleAnimationBase__Class *)((int)pIVar1->vtable + 0x28))->_0).parent)
                         (r_00,(((ScaleAnimationBase__Class *)((int)pIVar1->vtable + 0x28))->_0).
                               generic_class);
      if (iVar32 <= (int)pIVar8) {
        return;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar33 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar10 = (Object__Array *)func_?();
      pTVar34 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      func_?(pTVar34);
      uVar11 = func_?(8,pTVar34);
      func_?(pOVar10,0);
      func_?(pOVar10,uVar11);
      func_?();
      pSVar15 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Unexpected_end_of_content_while_,(IFormatProvider *)pCVar33
                           ,pOVar10,(MethodInfo *)0x0);
      pIVar35 = (IsolatedStorageException *)func_?();
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar35,pSVar15,(MethodInfo *)0x0);
      r = (JsonReader *)
          MethodInfo__Newtonsoft__Json__Linq__JContainer__ReadTokenFrom_Newtonsoft__Json__JsonReader_
      ;
      this = (JContainer *)0x0;
      func_?();
code_?:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar33 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar10 = (Object__Array *)func_?(TypeInfo__System__Object);
      pTVar34 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      func_?(pTVar34,0);
      uVar11 = func_?(8,pTVar34);
      func_?(pOVar10,0);
      func_?(pOVar10,uVar11);
      func_?();
      pSVar15 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Error_reading__0__from_JsonReade,(IFormatProvider *)pCVar33
                           ,pOVar10,(MethodInfo *)0x0);
      pIVar35 = (IsolatedStorageException *)func_?();
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar35,pSVar15,(MethodInfo *)0x0);
      func_?();
      func_?();
      pcVar31 = (code *)swi(3);
      (*pcVar31)();
      return;
    default:
      goto code_?;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      pIVar8 = (Il2CppClass *)
                (*(code *)(((String__Class *)this_01->klass)->vtable).System_IConvertible_ToDateTime
                          .method)();
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
      this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                JValue::JValue_GetValueType
                          ((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,(Object *)pIVar8,
                           (MethodInfo *)0x0);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)in_stack_14);
      this_00[1].klass = (ScaleAnimationBase__Class *)pIVar8;
      (this_00->fields).OnScaleAnimationStopped = this_01;
      JToken::JToken_SetLineInfo((JToken *)this_00,lineInfo,(MethodInfo *)0x0);
      bVar3 = 0;
      if (provider == (Il2CppClass *)0x0) goto code_?;
      (*(code *)(((JObject__Class *)((Il2CppClass_0 *)&provider->image)->image)->vtable).Add.method)
                (provider);
      pIVar8 = provider;
      this_01 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)r;
      break;
    case 0xb:
      pIVar8 = (Il2CppClass *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play
                ((ScaleAnimationBase *)pIVar8,0.0,(MethodInfo *)pIVar1);
      ((Il2CppClass_0 *)&pIVar8->declaringType)->image = (Il2CppImage *)0x0;
      ((Il2CppClass_0 *)&pIVar8->castClass)->image = (Il2CppImage *)0xa;
      goto code_?;
    case 0xc:
      pIVar8 = (Il2CppClass *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play
                ((ScaleAnimationBase *)pIVar8,0.0,(MethodInfo *)pIVar1);
      ((Il2CppClass_0 *)&pIVar8->declaringType)->image = (Il2CppImage *)0x0;
      ((Il2CppClass_0 *)&pIVar8->castClass)->image = (Il2CppImage *)0xb;
code_?:
      JToken::JToken_SetLineInfo((JToken *)pIVar8,lineInfo,(MethodInfo *)0x0);
      bVar3 = 0;
      if (provider == (Il2CppClass *)0x0) goto code_?;
      (*(code *)(((JObject__Class *)((Il2CppClass_0 *)&provider->image)->image)->vtable).Add.method)
                (provider);
      pIVar8 = provider;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      if (provider == (Il2CppClass *)pJVar12) {
        return;
      }
      bVar3 = 0;
      pIVar8 = (Il2CppClass *)pJVar12;
      if (provider == (Il2CppClass *)0x0) goto code_?;
      pIVar8 = (Il2CppClass *)((Il2CppClass_0 *)&provider->name)->image;
    }
    cVar22 = (*(code *)(((String__Class *)this_01->klass)->vtable).System_IConvertible_ToInt16.
                       method)();
    provider = pIVar8;
    if (cVar22 == '\0') {
      return;
    }
  } while( true );
}


/* Void ReadTokenFrom(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReadTokenFrom
               (JContainer *this,JsonReader *r,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (r != (JsonReader *)0x0) {
    iVar1 = (*(code *)(r->klass->vtable).get_Depth.method)(r,(r->klass->vtable).__unknown.methodPtr)
    ;
    cVar2 = (*(code *)(r->klass->vtable).__unknown.method)
                      (r,(r->klass->vtable).__unknown_1.methodPtr);
    if (cVar2 != '\0') {
      JContainer_ReadContentFrom(this,r,(MethodInfo *)0x0);
      iVar3 = (*(code *)(r->klass->vtable).get_Depth.method)
                        (r,(r->klass->vtable).__unknown.methodPtr);
      if (iVar3 <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar5 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      func_?(pTVar6,0);
      this = (JContainer *)func_?(8,pTVar6);
      func_?(pOVar5,0);
      func_?(pOVar5,this);
      func_?();
      pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (StringLiteral_Unexpected_end_of_content_while_,(IFormatProvider *)pCVar4,
                          pOVar5,(MethodInfo *)0x0);
      pIVar8 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar8,pSVar7,(MethodInfo *)0x0);
      func_?();
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar5 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    func_?(pTVar6,0);
    uVar9 = func_?(8,pTVar6);
    func_?(pOVar5,0);
    func_?(pOVar5,uVar9);
    func_?(0,uVar9);
    pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Error_reading__0__from_JsonReade,(IFormatProvider *)pCVar4,
                        pOVar5,(MethodInfo *)0x0);
    pIVar8 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar8,pSVar7,(MethodInfo *)0x0);
    func_?();
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  (*(code *)(this->klass->vtable).RemoveItemAt.method)(this,iVar1);
  return 1;
}


/* Void RemoveItemAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_RemoveItemAt
               (JContainer *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index < 0) {
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    message = StringLiteral_Index_is_less_than_0_;
  }
  else {
    iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                      (this,(this->klass->vtable).InsertItem.methodPtr);
    if (iVar1 == 0) goto code_?;
    iVar1 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    if (index < iVar1) {
      JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
      iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                        (this,(this->klass->vtable).InsertItem.methodPtr);
      if (iVar1 != 0) {
        iVar1 = func_?(3,
                                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                ,iVar1,index);
        if (index == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*(code *)(this->klass->vtable).__unknown_5.method)
                            (this,(this->klass->vtable).InsertItem.methodPtr);
          if (iVar2 == 0) goto code_?;
          iVar2 = func_?(3,
                                  TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                  ,iVar2,index + -1);
        }
        iVar3 = (*(code *)(this->klass->vtable).__unknown_5.method)
                          (this,(this->klass->vtable).InsertItem.methodPtr);
        if (iVar3 != 0) {
          iVar3 = func_?(0,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                  ,iVar3);
          if (index == iVar3 + -1) {
            iVar3 = 0;
          }
          else {
            iVar3 = (*(code *)(this->klass->vtable).__unknown_5.method)
                              (this,(this->klass->vtable).InsertItem.methodPtr);
            if (iVar3 == 0) goto code_?;
            iVar3 = func_?(3,
                                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                    ,iVar3,index + 1);
          }
          if (iVar2 != 0) {
            *(int *)(iVar2 + 0x10) = iVar3;
          }
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0xc) = iVar2;
          }
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 8) = 0;
            *(undefined4 *)(iVar1 + 0xc) = 0;
            *(undefined4 *)(iVar1 + 0x10) = 0;
            iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                              (this,(this->klass->vtable).InsertItem.methodPtr);
            if (iVar1 != 0) {
              func_?(2,
                              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                              ,iVar1,index);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    message = StringLiteral_Index_is_equal_to_or_greater_tha;
  }
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_00,StringLiteral_index,message,(MethodInfo *)0x0);
  func_?(this_00);
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReplaceAll(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReplaceAll
               (JContainer *this,Object *content,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ClearItems.method)
            (this,(this->klass->vtable).ReplaceItem.methodPtr);
  (*(code *)(this->klass->vtable).Add.method)(this,content,this->klass[1]._0.image);
  return;
}


/* Void ReplaceItem(JToken, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ReplaceItem
               (JContainer *this,JToken *existing,JToken *replacement,MethodInfo *method)

{
  if ((existing != (JToken *)0x0) && ((existing->fields)._parent == this)) {
    iVar1 = JContainer_IndexOfItem(this,existing,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).SetItem.method)
              (this,iVar1,replacement,(this->klass->vtable).ClearItems.methodPtr);
  }
  return;
}


/* Void SetItem(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_SetItem
               (JContainer *this,int32_t index,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index < 0) {
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    message = StringLiteral_Index_is_less_than_0_;
  }
  else {
    iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                      (this,(this->klass->vtable).InsertItem.methodPtr);
    if (iVar1 == 0) goto code_?;
    iVar1 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    if (index < iVar1) {
      iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                        (this,(this->klass->vtable).InsertItem.methodPtr);
      if (iVar1 != 0) {
        currentValue = (JToken *)
                       func_?(3,
                                       TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                       ,iVar1,index);
        bVar2 = JContainer_IsTokenUnchanged(currentValue,item,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        JContainer_CheckReentrancy(this,(MethodInfo *)0x0);
        pJVar3 = JContainer_EnsureParentToken(this,item,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).ValidateToken.method)
                  (this,pJVar3,currentValue,(this->klass->vtable).Add.methodPtr);
        if (index != 0) {
          iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)();
          if (iVar1 == 0) goto code_?;
          func_?(3,
                          TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                          ,iVar1,index + -1);
        }
        pJVar4 = (JToken *)(this->klass->vtable).InsertItem.methodPtr;
        iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)();
        if (iVar1 != 0) {
          iVar1 = func_?(0,
                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                  ,iVar1);
          if (index == iVar1 + -1) {
            pJVar5 = (JToken *)0x0;
          }
          else {
            iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                              (this,(this->klass->vtable).InsertItem.methodPtr);
            if (iVar1 == 0) goto code_?;
            pJVar5 = (JToken *)
                     func_?(3,
                                     TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                     ,iVar1,index + 1);
          }
          if (pJVar3 != (JToken *)0x0) {
            (pJVar3->fields)._parent = this;
            (pJVar3->fields)._previous = pJVar4;
            if (pJVar4 != (JToken *)0x0) {
              (pJVar4->fields)._next = pJVar3;
            }
            (pJVar3->fields)._next = pJVar5;
            if (pJVar5 != (JToken *)0x0) {
              (pJVar5->fields)._previous = pJVar3;
            }
            iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                              (this,(this->klass->vtable).InsertItem.methodPtr);
            if ((iVar1 != 0) &&
               (func_?(4,
                                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Linq::JToken>
                                ,iVar1,index,pJVar3), currentValue != (JToken *)0x0)) {
              (currentValue->fields)._parent = (JContainer *)0x0;
              (currentValue->fields)._previous = (JToken *)0x0;
              (currentValue->fields)._next = (JToken *)0x0;
              return;
            }
          }
        }
      }
      goto code_?;
    }
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    message = StringLiteral_Index_is_equal_to_or_greater_tha;
  }
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_00,StringLiteral_index,message,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Linq__JContainer__SetItem_int__Newtonsoft__Json__Linq__JToken_
                 );
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add
               (JContainer *this,JToken *item,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).Add.method)(this,item,this->klass[1]._0.image);
  return;
}


/* Boolean System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains
               (JContainer *this,JToken *item,MethodInfo *method)

{
  bVar1 = (*(code *)(this->klass->vtable).ContainsItem.method)
                    (this,item,(this->klass->vtable).CopyItemsTo.methodPtr);
  return bVar1;
}


/* Boolean System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove
               (JContainer *this,JToken *item,MethodInfo *method)

{
  bVar1 = (*(code *)(this->klass->vtable).RemoveItem.method)
                    (this,item,(this->klass->vtable).GetItem.methodPtr);
  return bVar1;
}


/* Int32 System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf(JToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
        JContainer_System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf
                  (JContainer *this,JToken *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  list = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
         (*(code *)(this->klass->vtable).__unknown_5.method)
                   (this,(this->klass->vtable).InsertItem.methodPtr);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->vtable
              ).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->_1).
      cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer);
  }
  iVar1 = Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_3
                    (list,item,
                     (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)
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
  (*(code *)(this->klass->vtable).InsertItem.method)
            (this,index,item,(this->klass->vtable).RemoveItemAt.methodPtr);
  return;
}


/* Void System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item(Int32, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item
               (JContainer *this,int32_t index,JToken *value,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).SetItem.method)
            (this,index,value,(this->klass->vtable).ClearItems.methodPtr);
  return;
}


/* Void System.Collections.ICollection.CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_ICollection_CopyTo
               (JContainer *this,Array *array,int32_t index,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).CopyItemsTo.method)
            (this,array,index,(this->klass->vtable).ValidateToken.methodPtr);
  return;
}


/* Object System.Collections.ICollection.get_SyncRoot() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
         JContainer_System_Collections_ICollection_get_SyncRoot(JContainer *this,MethodInfo *method)

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


/* Int32 System.Collections.IList.Add(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
        JContainer_System_Collections_IList_Add(JContainer *this,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).Add.method)(this,pJVar1,this->klass[1]._0.image);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar2 = (*(code *)(this->klass->vtable).__unknown_5.method)(this);
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
  bVar2 = (*(code *)(this->klass->vtable).ContainsItem.method)
                    (this,pJVar1,(this->klass->vtable).CopyItemsTo.methodPtr);
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
    cRam_? = '\x01';
  }
  list = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
         (**(code **)(*in_stack_1 + 600))(in_stack_1);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->vtable
              ).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->_1).
      cctor_started == 0)) {
    func_?();
  }
  iVar2 = Json::Utilities::CollectionUtils::CollectionUtils_IndexOf_3
                    (list,in_stack_3,
                     (IEqualityComparer_1_Newtonsoft_Json_Linq_JToken_ *)
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
  (*(code *)(this->klass->vtable).InsertItem.method)
            (this,index,pJVar1,(this->klass->vtable).RemoveItemAt.methodPtr);
  return;
}


/* Void System.Collections.IList.Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_Remove(JContainer *this,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).RemoveItem.method)
            (this,pJVar1,(this->klass->vtable).GetItem.methodPtr);
  return;
}


/* Void System.Collections.IList.RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_RemoveAt(JContainer *this,int32_t index,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).RemoveItemAt.method)
            (this,index,(this->klass->vtable).RemoveItem.methodPtr);
  return;
}


/* Object System.Collections.IList.get_Item(Int32) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
         JContainer_System_Collections_IList_get_Item
                   (JContainer *this,int32_t index,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*(code *)(this->klass->vtable).GetItem.method)
                     (this,index,(this->klass->vtable).SetItem.methodPtr);
  return pOVar1;
}


/* Void System.Collections.IList.set_Item(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::
     JContainer_System_Collections_IList_set_Item
               (JContainer *this,int32_t index,Object *value,MethodInfo *method)

{
  pJVar1 = JContainer_EnsureValue(this,value,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).SetItem.method)
            (this,index,pJVar1,(this->klass->vtable).ClearItems.methodPtr);
  return;
}


/* Void ValidateToken(JToken, JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_ValidateToken
               (JContainer *this,JToken *o,JToken *existing,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)o,StringLiteral_o,(MethodInfo *)0x0);
  if (o != (JToken *)0x0) {
    iVar1 = (*(code *)(o->klass->vtable).__unknown_2.method)
                      (o,(o->klass->vtable).__unknown_3.methodPtr);
    if (iVar1 != 4) {
      return;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    func_?(o,0);
    pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)o,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pTVar2);
    func_?();
    pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)pTVar2,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pTVar2);
    func_?();
    message = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Can_not_add__0__to__1__,(IFormatProvider *)provider,args,
                         (MethodInfo *)0x0);
    this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this_00,message,(MethodInfo *)0x0);
    func_?();
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerable`1[System.Object] Values[Object]() */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_Values
          (JContainer *this,MethodInfo *method)

{
  if (this != (JContainer *)0x0) {
    (*(code *)(this->klass->vtable).__unknown_5.method)
              (this,(this->klass->vtable).InsertItem.methodPtr);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar1 = (IEnumerable_1_System_Object_ *)(*(code *)(*method->parameters)->data)();
    return pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar1 = (IEnumerable_1_System_Object_ *)(*pcVar2)();
  return pIVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)other,StringLiteral_c,(MethodInfo *)0x0);
  if (other != (JContainer *)0x0) {
    piVar4 = (int *)func_?();
    uStack_1 = 0;
    while (piVar4 != (int *)0x0) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
        *piVar4 = 0x48;
        uStack_1 = 0xffffffff;
        if (piVar4 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uVar6 = 0;
      uVar7 = *(ushort *)(*piVar4 + 0xb6);
      if (uVar7 != 0) {
        iVar8 = *(int *)(*piVar4 + 0x58);
        do {
          if (*(IEnumerator_1_Newtonsoft_Json_Linq_JToken___Class **)(iVar8 + (uint)uVar6 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
            puVar9 = (undefined4 *)(*piVar4 + (*(int *)(iVar8 + 4 + (uint)uVar6 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      puVar9 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar9)();
      (*(code *)(this->klass->vtable).Add.method)();
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_get_Count
                  (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar1 != 0) {
    iVar2 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    return iVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* JToken get_First() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_get_First
                   (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
           (*(code *)(this->klass->vtable).__unknown_5.method)
                     (this,(this->klass->vtable).InsertItem.methodPtr);
  pJVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_5
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).__unknown_5.method)
                    (this,(this->klass->vtable).InsertItem.methodPtr);
  if (iVar1 != 0) {
    iVar1 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                            ,iVar1);
    return 0 < iVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* JToken get_Last() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer::JContainer_get_Last
                   (JContainer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)
           (*(code *)(this->klass->vtable).__unknown_5.method)
                     (this,(this->klass->vtable).InsertItem.methodPtr);
  pJVar1 = (JToken *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_LastOrDefault_3
                     (source,
                      Newtonsoft__Json__Linq__JToken_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pJVar1;
}

