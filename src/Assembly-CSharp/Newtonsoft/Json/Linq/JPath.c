
/* JToken Evaluate(JToken, Boolean) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath_Evaluate
                   (JPath *this,JToken *root,bool errorWhenNoMatch,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pCStack_6 = (CultureInfo *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  pJStack_9 = root;
  pLVar10 = (List_1_UnityEngine_Color32_ *)(this->fields)._Parts_k__BackingField;
  if (pLVar10 == (List_1_UnityEngine_Color32_ *)0x0) {
    piStack_11 = (int *)&stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    func_?(0);
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar13 = (Object__Array *)func_?(TypeInfo__System__Object);
    func_?(pOVar13);
    func_?(pOVar13);
    func_?(0);
    func_?(root,0);
    pTVar14 = mscorlib.dll::System::Object::Object_GetType((Object *)root,(MethodInfo *)0x0);
    func_?(pTVar14);
    func_?(8);
    func_?(pOVar13);
    func_?(pOVar13);
    func_?(1);
    pSVar15 = StringLiteral_Property___0___not_valid_on__1__;
code_?:
    pSVar15 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (pSVar15,(IFormatProvider *)pCVar12,pOVar13,(MethodInfo *)0x0);
    auStack_16._8_4_ = TypeInfo__System__Exception;
    auStack_16._4_4_ = &UNK_?;
    pCVar12 = (CultureInfo *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1((IsolatedStorageException *)pCVar12,pSVar15,(MethodInfo *)0x0);
code_?:
    auStack_16._8_4_ =
         MethodInfo__Newtonsoft__Json__Linq__JPath__Evaluate_Newtonsoft__Json__Linq__JToken__bool_;
    auStack_16._0_4_ = pCVar12;
code_?:
    auStack_16._4_4_ = 0;
    func_?();
    pcVar17 = (code *)swi(3);
    pJVar18 = (JToken *)(*pcVar17)();
    return pJVar18;
  }
  piStack_11 = (int *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
           List_1_UnityEngine_Color32__GetEnumerator
                     ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,pLVar10,
                      MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                     );
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar19->l;
  CStack_7.monitor = (MonitorData *)pLVar19->next;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar19->ver;
  CStack_7.fields.syncRoot = (Object *)(pLVar19->current).rgba;
  uStack_1 = 0;
code_?:
  cVar20 = func_?();
  if (cVar20 == '\0') {
    *piStack_11 = 0x177;
  }
  else {
    pLVar10 = (List_1_UnityEngine_Color32_ *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       (&CStack_7,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__get_Current__
                       );
    if (pLVar10 != (List_1_UnityEngine_Color32_ *)0x0) {
      propertyName = (List_1_UnityEngine_Color32_ *)0x0;
      if (pLVar10->klass == (List_1_UnityEngine_Color32___Class *)TypeInfo__System__String) {
        propertyName = pLVar10;
      }
      if (propertyName == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      this_00 = (JObject *)func_?();
      if (this_00 == (JObject *)0x0) {
        if (errorWhenNoMatch == 0) {
          *piStack_11 = 0x179;
          goto code_?;
        }
        goto code_?;
      }
      root = JObject::JObject_get_Item_1(this_00,(String *)propertyName,(MethodInfo *)0x0);
      pJStack_9 = root;
      if ((root != (JToken *)0x0) || (errorWhenNoMatch == 0)) goto code_?;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      auStack_16._0_4_ = (List_1_UnityEngine_Color32_ *)0x1;
      pOVar13 = (Object__Array *)func_?();
      auStack_16._0_4_ = (List_1_UnityEngine_Color32_ *)0x0;
      func_?();
      auStack_16._0_4_ = propertyName;
      func_?();
      auStack_16._0_4_ = propertyName;
      func_?();
      pSVar15 = StringLiteral_Property___0___does_not_exist_on;
      goto code_?;
    }
code_?:
    piVar21 = (int *)func_?();
    index = *piVar21;
    this_01 = (JContainer *)func_?();
    if (this_01 != (JContainer *)0x0) {
      iVar22 = JContainer::JContainer_get_Count(this_01,(MethodInfo *)0x0);
      if (iVar22 <= index) {
        if (errorWhenNoMatch == 0) {
          *piStack_11 = 0x179;
          goto code_?;
        }
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCStack_6 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        pOVar13 = (Object__Array *)func_?(TypeInfo__System__Object);
        func_?(TypeInfo__System__Int32);
        func_?(pOVar13);
        func_?(pOVar13);
        func_?(0);
        pSVar15 = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (StringLiteral_Index__0__outside_the_bounds_of_,
                             (IFormatProvider *)pCStack_6,pOVar13,(MethodInfo *)0x0);
        pCVar12 = (CultureInfo *)func_?();
        mscorlib.dll::System::StackOverflowException::StackOverflowException__ctor_1
                  ((StackOverflowException *)pCVar12,pSVar15,(MethodInfo *)0x0);
        goto code_?;
      }
      root = (JToken *)
             JContainer::JContainer_System_Collections_IList_get_Item
                       (this_01,index,(MethodInfo *)0x0);
      pJStack_9 = root;
      goto code_?;
    }
    if (errorWhenNoMatch != 0) {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCStack_6 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      pOVar13 = (Object__Array *)func_?(TypeInfo__System__Object);
      func_?(TypeInfo__System__Int32);
      func_?(pOVar13);
      func_?(pOVar13);
      func_?(0);
      func_?(root,0);
      pTVar14 = mscorlib.dll::System::Object::Object_GetType((Object *)root,(MethodInfo *)0x0);
      func_?(pTVar14);
      func_?(8);
      func_?(pOVar13);
      func_?(pOVar13);
      func_?(1);
      pSVar15 = StringLiteral_Index__0__not_valid_on__1__;
      pCVar12 = pCStack_6;
      goto code_?;
    }
    *piStack_11 = 0x179;
  }
code_?:
  uStack_1 = 0xffffffff;
  func_?(&CStack_7,
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                 );
  if (pCStack_6 == (CultureInfo *)0x0) {
    if (*piStack_11 == 0x179) {
      *unaff_FS_OFFSET = uStack_3;
      return (JToken *)0x0;
    }
    *unaff_FS_OFFSET = uStack_3;
    return root;
  }
  auStack_16._8_4_ = (MethodInfo *)0x0;
  auStack_16._0_4_ = pCStack_6;
  goto code_?;
}


/* Void ParseIndexer(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath_ParseIndexer
               (JPath *this,uint16_t indexerOpenChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  startIndex = (CultureInfo *)((this->fields)._currentIndex + 1);
  (this->fields)._currentIndex = (int32_t)startIndex;
  bVar1 = indexerOpenChar == 0x5b;
  _indexerOpenChar = (CultureInfo *)0x29;
  if (bVar1) {
    _indexerOpenChar = (CultureInfo *)0x5d;
  }
  length = 0;
  this_00 = (Collection_1_VoxelHit_ *)(this->fields)._expression;
  this_02 = startIndex;
  do {
    if (this_00 == (Collection_1_VoxelHit_ *)0x0) {
code_?:
      func_?(0);
code_?:
      _indexerOpenChar = this_02;
      pOVar2 = (Object *)func_?(TypeInfo__System__Char,&indexerOpenChar);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Unexpected_character_while_parsi,pOVar2,
                          (MethodInfo *)0x0);
      pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
      func_?(pIVar4);
code_?:
      pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar4,StringLiteral_Empty_path_indexer_,(MethodInfo *)0x0);
      func_?(pIVar4,0,MethodInfo__Newtonsoft__Json__Linq__JPath__ParseIndexer_wchar_t_);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    if ((int)pIVar6 <= (int)this_02) {
      _indexerOpenChar = (CultureInfo *)((uint)_indexerOpenChar & 0xffff);
      pOVar2 = (Object *)func_?(TypeInfo__System__Char,&indexerOpenChar);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Path_ended_with_open_indexer__Ex,pOVar2,
                          (MethodInfo *)0x0);
      this_02 = (CultureInfo *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1((IsolatedStorageException *)this_02,pSVar3,(MethodInfo *)0x0)
      ;
      method = MethodInfo__Newtonsoft__Json__Linq__JPath__ParseIndexer_wchar_t_;
      _indexerOpenChar = (CultureInfo *)0x0;
      func_?();
      goto code_?;
    }
    pSVar3 = (this->fields)._expression;
    if (pSVar3 == (String *)0x0) goto code_?;
    c = mscorlib.dll::System::String::String_get_Chars
                  (pSVar3,(this->fields)._currentIndex,(MethodInfo *)0x0);
    this_02 = (CultureInfo *)(uint)c;
    if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Char->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::Char::Char_IsDigit(c,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      if (c != (uint16_t)_indexerOpenChar) goto code_?;
      if (length == 0) goto code_?;
      pSVar3 = (this->fields)._expression;
      if (pSVar3 != (String *)0x0) {
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar3,(int32_t)startIndex,length,(MethodInfo *)0x0);
        this_01 = (this->fields)._Parts_k__BackingField;
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        this_02 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        _indexerOpenChar =
             (CultureInfo *)
             mscorlib.dll::System::Convert::Convert_ToInt32_11
                       (pSVar3,(IFormatProvider *)this_02,(MethodInfo *)0x0);
        item = func_?(TypeInfo__System__Int32);
        if (this_01 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_01,item,
                     MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                    );
          return;
        }
      }
      goto code_?;
    }
    length = length + 1;
    piVar8 = &(this->fields)._currentIndex;
    *piVar8 = *piVar8 + 1;
    this_00 = (Collection_1_VoxelHit_ *)(this->fields)._expression;
    this_02 = (CultureInfo *)(this->fields)._currentIndex;
  } while( true );
}


/* Void ParseMain() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath_ParseMain
               (JPath *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = this;
  this = (JPath *)((uint)this & 0xffffff);
  this_00 = (Collection_1_VoxelHit_ *)(this_02->fields)._expression;
  pJVar1 = (JPath *)(this_02->fields)._currentIndex;
  startIndex = pJVar1;
  do {
    if (this_00 == (Collection_1_VoxelHit_ *)0x0) {
code_?:
      func_?(0);
code_?:
      this = pJVar1;
      pOVar2 = (Object *)func_?(TypeInfo__System__Char,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Unexpected_character_following_i,pOVar2,
                          (MethodInfo *)0x0);
      pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
      this = (JPath *)MethodInfo__Newtonsoft__Json__Linq__JPath__ParseMain__;
      func_?(pIVar4);
code_?:
      this = pJVar1;
      pOVar2 = (Object *)func_?(TypeInfo__System__Char,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Unexpected_character_while_parsi,pOVar2,
                          (MethodInfo *)0x0);
      pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
      this = (JPath *)MethodInfo__Newtonsoft__Json__Linq__JPath__ParseMain__;
      func_?(pIVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    if ((int)pIVar6 <= (int)pJVar1) {
      iVar7 = (this_02->fields)._currentIndex;
      if ((int)startIndex < iVar7) {
        pSVar3 = (this_02->fields)._expression;
        if (pSVar3 == (String *)0x0) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar3,(int32_t)startIndex,iVar7 - (int)startIndex,(MethodInfo *)0x0);
        this_01 = (this_02->fields)._Parts_k__BackingField;
        if (this_01 == (List_1_System_Object_ *)0x0) goto code_?;
        this = (JPath *)
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pSVar3,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
      }
      return;
    }
    pSVar3 = (this_02->fields)._expression;
    if (pSVar3 == (String *)0x0) goto code_?;
    indexerOpenChar =
         mscorlib.dll::System::String::String_get_Chars
                   (pSVar3,(this_02->fields)._currentIndex,(MethodInfo *)0x0);
    pJVar1 = (JPath *)(uint)indexerOpenChar;
    if (pJVar1 == (JPath *)0x28) {
code_?:
      iVar7 = (this_02->fields)._currentIndex;
      if ((int)startIndex < iVar7) {
        pSVar3 = (this_02->fields)._expression;
        if (pSVar3 == (String *)0x0) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar3,(int32_t)startIndex,iVar7 - (int)startIndex,(MethodInfo *)0x0);
        pMVar8 = (MethodInfo *)(this_02->fields)._Parts_k__BackingField;
        if (pMVar8 == (MethodInfo *)0x0) goto code_?;
        this = (JPath *)&UNK_?;
        method = pMVar8;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pMVar8,(UIPushOption__Enum)pSVar3,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
      }
      JPath_ParseIndexer(this_02,indexerOpenChar,(MethodInfo *)0x0);
      iVar7 = (this_02->fields)._currentIndex;
      this = (JPath *)CONCAT13(1,this._0_3_);
code_?:
      startIndex = (JPath *)(iVar7 + 1);
    }
    else {
      if (pJVar1 == (JPath *)0x29) goto code_?;
      if (pJVar1 == (JPath *)0x5b) goto code_?;
      if ((pJVar1 != (JPath *)0x5c) && (pJVar1 == (JPath *)0x5d)) goto code_?;
      if (pJVar1 == (JPath *)0x2e) {
        iVar7 = (this_02->fields)._currentIndex;
        if ((int)startIndex < iVar7) {
          pSVar3 = (this_02->fields)._expression;
          if (pSVar3 == (String *)0x0) goto code_?;
          pSVar3 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar3,(int32_t)startIndex,iVar7 - (int)startIndex,(MethodInfo *)0x0);
          pMVar8 = (MethodInfo *)(this_02->fields)._Parts_k__BackingField;
          if (pMVar8 == (MethodInfo *)0x0) goto code_?;
          this = (JPath *)&UNK_?;
          method = pMVar8;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pMVar8,(UIPushOption__Enum)pSVar3,
                     MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                    );
          iVar7 = (this_02->fields)._currentIndex;
        }
        this = (JPath *)((uint)this & 0xffffff);
        goto code_?;
      }
      if (this._3_1_ != '\0') goto code_?;
      iVar7 = (this_02->fields)._currentIndex;
    }
    pJVar1 = (JPath *)(iVar7 + 1);
    (this_02->fields)._currentIndex = (int32_t)pJVar1;
    this_00 = (Collection_1_VoxelHit_ *)(this_02->fields)._expression;
  } while( true );
}


/* JPath(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath__ctor
               (JPath *this,String *expression,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)expression,StringLiteral_expression,(MethodInfo *)0x0);
  (this->fields)._expression = expression;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  (this->fields)._Parts_k__BackingField = (List_1_System_Object_ *)this_00;
  JPath_ParseMain(this,(MethodInfo *)0x0);
  return;
}

