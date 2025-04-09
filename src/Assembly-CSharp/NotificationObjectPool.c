
/* Void AddToActiveInstances(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_AddToActiveInstances
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ActiveInstances;
  if (this_00 != (List_1_Notification_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)notification,
               MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
    pAVar1 = (this->fields).OnActiveInstancesChanged;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_Awake
               (NotificationObjectPool *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__GetEnumerator__
                   );
    func_?(&
                    Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).Elements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    do {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__Dispose__
                   ,unaff_EBX);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      iStack_10 = 0;
      RStack_11 = (RegexCharClass_SingleRange)LStack_8._current;
      while( true ) {
        if (RStack_11 == (RegexCharClass_SingleRange)0x0) goto code_?;
        if (*(int *)((int)RStack_11 + 0xc) <= iStack_10) break;
        pOStack_12 = *(Object **)((int)RStack_11 + 8);
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            (pOStack_12,parent,0,
                             Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification__UnityEngine__Transform__bool_
                            );
        if (this_02 == (Component *)0x0) goto code_?;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_02,(MethodInfo *)0x0);
        if (this_03 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_03,0,(MethodInfo *)0x0);
        this_02[1].fields._.m_CachedPtr = this;
        unaff_EBX = (MethodInfo *)this;
        func_?();
        this_01 = (this->fields).Instances;
        if (this_01 == (List_1_Notification_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
        iStack_10 = iStack_10 + 1;
      }
    } while( true );
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean CanInstantiateNotificationType(NotificationType) */

bool Assembly-CSharp.dll::NotificationObjectPool::
     NotificationObjectPool_CanInstantiateNotificationType
               (NotificationObjectPool *this,NotificationType__Enum notificationType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Predicate<Notification>);
    func_?(&
                    MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__0_Notification_
                   );
    func_?(&
                    MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__1_Notification_
                   );
    func_?(&TypeInfo__NotificationObjectPool____c__DisplayClass6_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationObjectPool____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)notificationType;
    pLVar1 = (this->fields).Instances;
    pPVar2 = (Predicate_1_Object_ *)func_?(TypeInfo__System__Predicate<Notification>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (pPVar2,value,
               MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__0_Notification_
               ,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_Notification_ *)0x0) {
      pOVar3 = (Object_1 *)
               mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
               List_1_System_UInt32__Find
                         ((List_1_System_UInt32_ *)pLVar1,(Predicate_1_UInt32_ *)pPVar2,
                          MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        (pOVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pLVar1 = (this->fields).ActiveInstances;
        pPVar2 = (Predicate_1_Object_ *)func_?();
        mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                  (pPVar2,value,
                   MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__1_Notification_
                   ,(MethodInfo *)0x0);
        if (pLVar1 == (List_1_Notification_ *)0x0) goto code_?;
        pOVar3 = (Object_1 *)
                 mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                 List_1_System_UInt32__Find
                           ((List_1_System_UInt32_ *)pLVar1,(Predicate_1_UInt32_ *)pPVar2,
                            MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          (pOVar3,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Notification CreateTempPanel(NotificationType) */

Notification *
Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_CreateTempPanel
          (NotificationObjectPool *this,NotificationType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    NotificationObjectPoolElement_MethodInfo__System__Linq__Enumerable__First<NotificationObjectPoolElement>_System__Collections__Generic__IEnumerable<NotificationObjectPoolElement>__System__Func<NotificationObjectPoolElement,_bool>_
                   );
    func_?(&TypeInfo__System__Func<NotificationObjectPoolElement,_bool>);
    func_?(&TypeInfo__MV__Common__NotificationType);
    func_?(&
                    Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__NotificationObjectPool____c__DisplayClass11_0___CreateTempPanel_b__0_NotificationObjectPoolElement_
                   );
    func_?(&TypeInfo__NotificationObjectPool____c__DisplayClass11_0);
    func_?(&StringLiteral_Couldn_t_find_temp_panel_type_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationObjectPool____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)type;
    source = (this->fields).Elements;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<NotificationObjectPoolElement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_00,value,
               MethodInfo__NotificationObjectPool____c__DisplayClass11_0___CreateTempPanel_b__0_NotificationObjectPoolElement_
               ,(MethodInfo *)0x0);
    pOVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_First_4
                       ((IEnumerable_1_System_Object_ *)source,this_00,
                        NotificationObjectPoolElement_MethodInfo__System__Linq__Enumerable__First<NotificationObjectPoolElement>_System__Collections__Generic__IEnumerable<NotificationObjectPoolElement>__System__Func<NotificationObjectPoolElement,_bool>_
                       );
    if (pOVar1 != (Object *)0x0) {
      original = pOVar1[1].klass;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pNVar2 = (Notification *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                         );
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pNVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        EStack_4.klass = (Enum__Class *)TypeInfo__MV__Common__NotificationType;
        pOStack_5 = value[1].klass;
        EStack_4.monitor = (MonitorData *)0xffffffff;
        pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Couldn_t_find_temp_panel_type_,pSVar6,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        return (Notification *)0x0;
      }
      if (pNVar2 != (Notification *)0x0) {
        ppNVar7 = &(pNVar2->fields).pool;
        *ppNVar7 = this;
        func_?(ppNVar7,this);
        NotificationObjectPool_AddToActiveInstances(this,pNVar2,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pNVar2,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
          return pNVar2;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pNVar2 = (Notification *)(*pcVar8)();
  return pNVar2;
}


/* Notification GetPanel(NotificationType) */

Notification *
Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_GetPanel
          (NotificationObjectPool *this,NotificationType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Notification>__FindIndex_System__Predicate<Notification>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_);
    func_?(&TypeInfo__MV__Common__NotificationType);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Predicate<Notification>);
    func_?(&
                    MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__0_Notification_
                   );
    func_?(&
                    MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__1_Notification_
                   );
    func_?(&TypeInfo__NotificationObjectPool____c__DisplayClass9_0);
    func_?(&StringLiteral_Could_not_find_notification_type);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NotificationObjectPool____c__DisplayClass9_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)type;
    pLVar1 = (this->fields).Instances;
    pPVar2 = (Predicate_1_Object_ *)func_?(TypeInfo__System__Predicate<Notification>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (pPVar2,value,
               MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__0_Notification_
               ,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_Notification_ *)0x0) {
      exists = (Object_1 *)
               mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
               List_1_System_UInt32__Find
                         ((List_1_System_UInt32_ *)pLVar1,(Predicate_1_UInt32_ *)pPVar2,
                          MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        (exists,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Could_not_find_notification_type,pSVar4,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        pNVar5 = NotificationObjectPool_CreateTempPanel
                           (this,(NotificationType__Enum)value[1].klass,(MethodInfo *)0x0);
        return pNVar5;
      }
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).Instances;
      pPVar2 = (Predicate_1_Object_ *)func_?();
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (pPVar2,value,
                 MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__1_Notification_
                 ,(MethodInfo *)0x0);
      if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        index = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__FindIndex
                          (pLVar6,(Predicate_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)pPVar2,
                           MethodInfo__System__Collections__Generic__List<Notification>__FindIndex_System__Predicate<Notification>_
                          );
        pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).Instances;
        if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar6,index,
                               MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_
                              );
          if (this_00 != (RegexCharClass_SingleRange)0x0) {
            *(undefined4 *)((int)this_00 + 0x14) = this;
            func_?((undefined4 *)((int)this_00 + 0x14),this);
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (this_01 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_01,1,(MethodInfo *)0x0);
              pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).Instances;
              if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                notification = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (pLVar6,index,
                                          MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_
                                         );
                NotificationObjectPool_AddToActiveInstances
                          (this,(Notification *)notification,(MethodInfo *)0x0);
                pLVar1 = (this->fields).Instances;
                if (pLVar1 != (List_1_Notification_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            ((List_1_System_Object_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<Notification>__RemoveAt_int_
                            );
                  return (Notification *)this_00;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pNVar5 = (Notification *)(*pcVar7)();
  return pNVar5;
}


/* Void RemoveFromActiveInstances(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_RemoveFromActiveInstances
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ActiveInstances;
  if (this_00 != (List_1_Notification_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)notification,
               MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_);
    pAVar1 = (this->fields).OnActiveInstancesChanged;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Return(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_Return
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
                   );
    cRam_? = '\x01';
  }
  if (notification != (Notification *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)notification,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_00,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        this = (NotificationObjectPool *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)notification,(MethodInfo *)0x0);
        if (this == (NotificationObjectPool *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this,0,(MethodInfo *)0x0);
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)notification,(MethodInfo *)0x0);
      p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                  (this_01,p,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pLVar2 = (this->fields).ActiveInstances;
        if (pLVar2 != (List_1_Notification_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Remove
                    ((List_1_System_Object_ *)pLVar2,(Object *)notification,
                     MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                    );
          pAVar3 = (this->fields).OnActiveInstancesChanged;
          if (pAVar3 != (Action *)0x0) {
            (*(pAVar3->fields)._._.invoke_impl)();
          }
          pLVar2 = (this->fields).Instances;
          if (pLVar2 != (List_1_Notification_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar2,(Object *)notification,
                       MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReturnAllExistingNotifications() */

void Assembly-CSharp.dll::NotificationObjectPool::
     NotificationObjectPool_ReturnAllExistingNotifications
               (NotificationObjectPool *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ActiveInstances;
  if (pLVar1 != (List_1_Notification_ *)0x0) {
    this = (NotificationObjectPool *)((pLVar1->fields)._size + -1);
    while( true ) {
      if ((int)this < 0) {
        return;
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this_01->fields).ActiveInstances;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,(int32_t)this,
                           MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_
                          );
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
                       );
        cRam_? = '\x01';
      }
      if ((this_02 == (RegexCharClass_SingleRange)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_02,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      break;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_02,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) break;
        this = (NotificationObjectPool *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_02,(MethodInfo *)0x0);
      p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_01,(MethodInfo *)0x0);
      if (this_03 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                (this_03,p,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                       );
        cRam_? = '\x01';
      }
      pLVar1 = (this_01->fields).ActiveInstances;
      if (pLVar1 == (List_1_Notification_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)pLVar1,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_)
      ;
      pAVar4 = (this_01->fields).OnActiveInstancesChanged;
      if (pAVar4 != (Action *)0x0) {
        (*(pAVar4->fields)._._.invoke_impl)
                  ((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
      }
      pLVar1 = (this_01->fields).Instances;
      if (pLVar1 == (List_1_Notification_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)this_02,
                 MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
      this = (NotificationObjectPool *)((int)&this[-1].fields.OnActiveInstancesChanged + 3);
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* NotificationObjectPool() */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool__ctor
               (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Notification>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<NotificationObjectPoolElement>);
    func_?(&TypeInfo__System__Collections__Generic__List<Notification>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_NotificationObjectPoolElement_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<NotificationObjectPoolElement>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__List__);
  ppLVar1 = &(this->fields).Elements;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  pLVar2 = (List_1_Notification_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Notification>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<Notification>__List__);
  ppLVar3 = &(this->fields).Instances;
  *ppLVar3 = pLVar2;
  func_?(ppLVar3,pLVar2);
  pLVar2 = (List_1_Notification_ *)
           func_?(TypeInfo__System__Collections__Generic__List<Notification>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<Notification>__List__);
  ppLVar3 = &(this->fields).ActiveInstances;
  *ppLVar3 = pLVar2;
  func_?(ppLVar3,pLVar2);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_ActivateInstancesCount() */

int32_t Assembly-CSharp.dll::NotificationObjectPool::
        NotificationObjectPool_get_ActivateInstancesCount
                  (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<Notification>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).ActiveInstances;
  if (pLVar2 != (List_1_Notification_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

