
/* Void DestroyNotification() */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_DestroyNotification
               (WinningWarningNotification *this,MethodInfo *method)

{
  iVar1 = (*(code *)(this->klass->vtable).get_Lifetime.method)
                    (this,(this->klass->vtable).Initialize.methodPtr);
  (this->fields)._.timeSinceStart = (float)iVar1;
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_Initialize
               (WinningWarningNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_02 = (Action__Class *)data;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__GameStatCounterType);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&MethodInfo__WinningWarningNotification__DestroyNotification__);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  pSVar3 = (String__Class *)TypeInfo__System__Int32;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
     ) {
    piVar4 = (int32_t *)func_?(TVar2.m_Index);
    actorNr = *piVar4;
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) goto code_?;
    pSVar3 = (String__Class *)TypeInfo__GameStatCounterType;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
        (TypeInfo__GameStatCounterType->_0).element_class) {
      pbVar5 = (byte *)func_?(TVar2.m_Index);
      data = (Dictionary_2_System_Object_System_Object_ *)((uint)*pbVar5 << 0x18);
      pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      pSVar3 = (String__Class *)TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        func_?(TVar2.m_Index);
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 == (MVNetworkGame *)0x0) ||
           (this_00 = (pMVar6->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
        goto code_?;
        bVar7 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                          (this_00,actorNr,(MVPlayer **)&stack0xfffffff4,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          return;
        }
        Notification::Notification_Initialize
                  ((Notification *)this,(Dictionary_2_System_Object_System_Object_ *)this_02,
                   (MethodInfo *)0x0);
        pTVar8 = (this->fields).scoreText;
        pBVar9 = TypeInfo__System__Byte;
        pOVar1 = (Object *)func_?();
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (pTVar8 == (Text *)0x0) goto code_?;
        TVar10.m_Index = 0;
        if (TVar2.m_Index != 0) {
          if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
            TVar10 = TVar2;
          }
          pSVar3 = TypeInfo__System__String;
          if (TVar10.m_Index == 0) goto code_?;
        }
        (*(code *)(pTVar8->klass->vtable).set_text.method)
                  (pTVar8,TVar10.m_Index,
                   (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        if (((pBVar9 != (Byte__Class *)0x0) &&
            (pIVar11 = (pBVar9->_0).klass, pIVar11 != (Il2CppClass *)0x0)) &&
           (pTVar8 = (this->fields).userNameText, pTVar8 != (Text *)0x0)) {
          ppSVar12 = (String **)(pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          (*(code *)(pTVar8->klass->vtable).set_text.method)(pTVar8,pIVar11->namespaze);
          pNVar13 = (this->fields).fader;
          if (pNVar13 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Activate(pNVar13,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              ppMVar14 = &
                         MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Count__
              ;
              func_?();
              func_?(&
                              MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                             );
              cRam_? = '\x01';
              ppSVar12 = (String **)ppMVar14;
            }
            pLVar15 = (this->fields).winningConditionImages;
            this_02 = (Action__Class *)0x0;
            if (pLVar15 != (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) {
              while ((int)this_02 < (pLVar15->fields)._size) {
                pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this->fields).winningConditionImages;
                if ((pLVar16 ==
                     (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                   (RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar16,(int32_t)this_02,
                                        MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                       ), RVar17 == (RegexCharClass_SingleRange)0x0))
                goto code_?;
                pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this->fields).winningConditionImages;
                if (*(char *)((int)RVar17 + 8) == data._3_1_) {
                  if (pLVar16 ==
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                  goto code_?;
                  ppSVar12 = (String **)&UNK_?;
                  RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar16,(int32_t)this_02,
                                      MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                     );
                  if (((RVar17 == (RegexCharClass_SingleRange)0x0) ||
                      (*(Component **)((int)RVar17 + 0xc) == (Component *)0x0)) ||
                     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject
                                          (*(Component **)((int)RVar17 + 0xc),(MethodInfo *)0x0),
                     this_01 == (GameObject *)0x0)) goto code_?;
                  data = (Dictionary_2_System_Object_System_Object_ *)
                         CONCAT31((int3)((uint)pLVar16 >> 8),1);
                }
                else {
                  if (pLVar16 ==
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                  goto code_?;
                  ppSVar12 = (String **)&UNK_?;
                  RVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar16,(int32_t)this_02,
                                      MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                     );
                  if (((RVar17 == (RegexCharClass_SingleRange)0x0) ||
                      (*(Component **)((int)RVar17 + 0xc) == (Component *)0x0)) ||
                     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject
                                          (*(Component **)((int)RVar17 + 0xc),(MethodInfo *)0x0),
                     this_01 == (GameObject *)0x0)) goto code_?;
                  data = (Dictionary_2_System_Object_System_Object_ *)((uint)pLVar16 & 0xffffff00);
                }
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_01,(bool)data,(MethodInfo *)0x0);
                pLVar15 = (this->fields).winningConditionImages;
                this_02 = (Action__Class *)((int)&(this_02->_0).image + 1);
                if (pLVar15 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0)
                goto code_?;
              }
              if (cRam_? == '\0') {
                ppSVar12 = &StringLiteral_S;
                func_?();
                func_?(&StringLiteral_KILL);
                func_?(&StringLiteral_STAR);
                func_?(&StringLiteral__LEFT_);
                func_?(&::StringLiteral__);
                cRam_? = '\x01';
              }
              if ((data._3_1_ == '\x01') ||
                 ((pSVar18 = StringLiteral_STAR, data._3_1_ != '\x03' &&
                  (pSVar18 = ::StringLiteral__, data._3_1_ == '\x06')))) {
                pSVar18 = StringLiteral_KILL;
              }
              if (1 < (int)ppSVar12) {
                pSVar18 = mscorlib.dll::System::String::String_Concat_3
                                    (pSVar18,StringLiteral_S,(MethodInfo *)0x0);
              }
              pSVar18 = mscorlib.dll::System::String::String_Concat_3
                                  (pSVar18,StringLiteral__LEFT_,(MethodInfo *)0x0);
              pTVar8 = (this->fields).warningText;
              if (pTVar8 != (Text *)0x0) {
                (*(code *)(pTVar8->klass->vtable).set_text.method)
                          (pTVar8,pSVar18,
                           (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                pNVar13 = (this->fields).fader;
                if (pNVar13 != (NotificationFade *)0x0) {
                  pAVar19 = (pNVar13->fields).OnFinished;
                  this_02 = (Action__Class *)func_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            ((NavMesh_OnNavMeshPreUpdate *)this_02,(Object *)this,
                             MethodInfo__WinningWarningNotification__DestroyNotification__,
                             (MethodInfo *)0x0);
                  TVar2.m_Index =
                       (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pAVar19,(Delegate *)this_02,(MethodInfo *)0x0
                                          );
                  if ((Action *)TVar2.m_Index == (Action *)0x0) {
                    (pNVar13->fields).OnFinished = (Action *)0x0;
                    func_?(&(pNVar13->fields).OnFinished,0);
                    return;
                  }
                  pAVar19 = (Action *)0x0;
                  if (((Action *)TVar2.m_Index)->klass == TypeInfo__System__Action) {
                    pAVar19 = (Action *)TVar2.m_Index;
                  }
                  pSVar3 = (String__Class *)TypeInfo__System__Action;
                  if (pAVar19 == (Action *)0x0) goto code_?;
                  (pNVar13->fields).OnFinished = pAVar19;
                  pAVar19 = (Action *)0x0;
                  if (((Action *)TVar2.m_Index)->klass == TypeInfo__System__Action) {
                    pAVar19 = (Action *)TVar2.m_Index;
                  }
                  this_02 = TypeInfo__System__Action;
                  if (pAVar19 != (Action *)0x0) {
                    func_?(&(pNVar13->fields).OnFinished,pAVar19);
                    return;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?(TVar2.m_Index,pSVar3);
code_?:
  TVar2.m_Index = func_?();
code_?:
  func_?(TVar2.m_Index,this_02);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SelectWinningConditionImage(GameStatCounterType, MVPlayer) */

void Assembly-CSharp.dll::WinningWarningNotification::
     WinningWarningNotification_SelectWinningConditionImage
               (WinningWarningNotification *this,GameStatCounterType__Enum winningConditionType,
               MVPlayer *player,MethodInfo *method)

{
  pWVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar2 = (this->fields).winningConditionImages;
  if (pLVar2 != (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pWVar1->fields).winningConditionImages;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pWVar1->fields).winningConditionImages;
      if (*(char *)((int)RVar4 + 8) == (undefined1)winningConditionType) {
        if ((((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar3,index,
                                    MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                   ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
            (*(Component **)((int)RVar4 + 0xc) == (Component *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (*(Component **)((int)RVar4 + 0xc),(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        this._0_1_ = 1;
      }
      else {
        if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,index,
                                MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                               ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
           ((*(Component **)((int)RVar4 + 0xc) == (Component *)0x0 ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)((int)RVar4 + 0xc),(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)))) break;
        this._0_1_ = 0;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(bool)this,(MethodInfo *)0x0);
      pLVar2 = (pWVar1->fields).winningConditionImages;
      index = index + 1;
      if (pLVar2 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetWarningText(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_SetWarningText
               (WinningWarningNotification *this,GameStatCounterType__Enum winningConditionType,
               int32_t scoreLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_S);
    func_?(&StringLiteral_KILL);
    func_?(&StringLiteral_STAR);
    func_?(&StringLiteral__LEFT_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (((undefined1)winningConditionType == GameStatCounterType__Enum_Kill) ||
     ((str0 = StringLiteral_STAR,
      (undefined1)winningConditionType != GameStatCounterType__Enum_Collectible &&
      (str0 = ::StringLiteral__,
      (undefined1)winningConditionType == GameStatCounterType__Enum_OculusKill)))) {
    str0 = StringLiteral_KILL;
  }
  if (1 < scoreLeft) {
    str0 = mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral_S,(MethodInfo *)0x0);
  }
  mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__LEFT_,(MethodInfo *)0x0);
  pTVar1 = (this->fields).warningText;
  if (pTVar1 == (Text *)0x0) {
    uVar2 = func_?(&stack0xfffffffc);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(pTVar1->klass->vtable).set_text.method)();
  return;
}

