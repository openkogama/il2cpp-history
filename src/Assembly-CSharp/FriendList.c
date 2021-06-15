
/* Void AddFriend(Int32, Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::FriendList::FriendList_AddFriend
               (FriendList *this,int32_t friendID,int32_t profileID,int32_t friendProfileID,
               FriendStatus__Enum status,MethodInfo *method)

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
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 != (MVNetworkGame *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x0;
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar5,(MethodInfo *)0x0)
      ;
      if ((Object *)profileID == pOVar6) {
        pDVar7 = (this->fields).friends;
        if (pDVar7 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,friendID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            );
          if (bVar8 == 0) {
            this_07 = (ScaleAnimationBase *)func_?();
            (this_07->fields)._._._._.m_CachedPtr = (void *)0xffffffff;
            (this_07->fields).state = -1;
            (this_07->fields).originalScale.x = -NAN;
            ScaleAnimationBase::ScaleAnimationBase_Play(this_07,0.0,method_00);
            (this_07->fields)._._._._.m_CachedPtr = (void *)friendProfileID;
            (this_07->fields).state = friendID;
            (this_07->fields).originalScale.x = (float)status;
            pDVar7 = (this->fields).friends;
            if (pDVar7 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,friendID,(Object *)this_07
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                      );
          }
code_?:
          pAVar9 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnFriendListUpdated;
          if (pAVar9 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
            AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                      (pAVar9,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
           pMVar5 != (MVLocalPlayer *)0x0)) {
          pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar5,method_01);
          if ((Object *)friendProfileID != pOVar6) goto code_?;
          pDVar7 = (this->fields).pending;
          if (pDVar7 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
            bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,friendID,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                              );
            if (bVar8 != 0) goto code_?;
            this_02 = (Friend *)func_?();
            Friend::Friend__ctor(this_02,friendID,profileID,status,(MethodInfo *)0x0);
            this_00 = (this->fields).pending;
            if (this_00 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,friendID,
                         (Object *)this_02,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Add_int__Friend_
                        );
              this_01 = (List_1_UIPushOption_ *)(this->fields).pendingNotifications;
              if (this_01 != (List_1_UIPushOption_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          (this_01,profileID,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  pDVar7 = (Dictionary_2_System_Int32_Friend_ *)&UNK_?;
                  func_?();
                }
                this_03 = (MVAvatar *)
                          MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((this_03 != (MVAvatar *)0x0) &&
                    (this_04 = MVAvatar::MVAvatar_get_Shield(this_03,(MethodInfo *)0x0),
                    this_04 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
                   (this_05 = MVPlayerContainer::MVPlayerContainer_get_Values
                                        ((MVPlayerContainer *)this_04,(MethodInfo *)pDVar7),
                   this_05 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0
                   )) {
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                              *)&stack0xffffffbc,
                             (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                              *)this_05,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                            );
                  uStack_1 = 0;
                  while (cVar10 = func_?(), cVar10 != '\0') {
                    this_06 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
                    if (this_06 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)
                    goto code_?;
                    pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                       (this_06,(MethodInfo *)0x0);
                    if ((pOVar6 == (Object *)profileID) &&
                       (pAVar9 = (AvatarMotor_OnActiveBounceDelegate *)
                                 (this->fields).OnFriendRequestReceived,
                       pAVar9 != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
                      AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                                (pAVar9,(MethodInfo *)0x0);
                    }
                  }
                  uStack_1 = 0xffffffff;
                  func_?();
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Friend GetFriendByProfileID(Int32) */

Friend * Assembly-CSharp.dll::FriendList::FriendList_GetFriendByProfileID
                   (FriendList *this,int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FriendList___GetFriendByProfileID_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    pFVar2 = (Friend *)(*pcVar1)();
    return pFVar2;
  }
  (this_00->fields)._._._._.m_CachedPtr = (void *)profileID;
  pDVar3 = (this->fields).friends;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this_00,
             MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
            );
  bVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_9
                    ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                     (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                      *)pUVar4,
                     bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                    );
  if (bVar5 != 0) {
    pDVar3 = (this->fields).friends;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this_00,
               MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
              );
    System.Core.dll::System::Linq::Enumerable::Enumerable_Single_3
              ((IEnumerable_1_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_ *)
               pDVar3,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_
                       *)pUVar4,
               System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
              );
    pFVar2 = (Friend *)func_?();
    return pFVar2;
  }
  pDVar3 = (this->fields).pending;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this_00,
             MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
            );
  bVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_9
                    ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                     (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                      *)pUVar4,
                     bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                    );
  if (bVar5 == 0) {
    return (Friend *)0x0;
  }
  pFStack6 =
       TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>;
  pDVar3 = (this->fields).pending;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this_00,
             MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
            );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Single_3
            ((IEnumerable_1_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_ *)
             pDVar3,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_
                     *)pUVar4,
             System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
            );
  pFVar2 = (Friend *)func_?();
  return pFVar2;
}


/* Dictionary`2[System.Int32,MVPlayer] GetOnlineFriends() */

Dictionary_2_System_Int32_MVPlayer_ *
Assembly-CSharp.dll::FriendList::FriendList_GetOnlineFriends(FriendList *this,MethodInfo *method)

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
  pDVar4 = (Dictionary_2_System_Int32_MVPlayer_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVAvatar *)0x0) &&
      (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
      this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
     (this_02 = MVPlayerContainer::MVPlayerContainer_get_Values
                          ((MVPlayerContainer *)this_01,(MethodInfo *)0x0),
     this_02 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffb8,
               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
               this_02,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      do {
        cVar5 = func_?();
        if (cVar5 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return pDVar4;
        }
        this_03 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
        if (this_03 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) goto code_?;
        profileID = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                    TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                              (this_03,in_stack_6);
        in_stack_6 = (MethodInfo *)this;
        bVar7 = FriendList_IsFriend(this,(int32_t)profileID,(MethodInfo *)0x0);
      } while (bVar7 == 0);
      key = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
            NamedThemeAttribute_1_UnityEngine_Color__get_Name
                      ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0);
      if (pDVar4 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,(int32_t)key,(Object *)this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                );
    }
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pDVar4 = (Dictionary_2_System_Int32_MVPlayer_ *)(*pcVar8)();
  return pDVar4;
}


/* Boolean IsFriend(Int32) */

bool Assembly-CSharp.dll::FriendList::FriendList_IsFriend
               (FriendList *this,int32_t profileID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  _puStack_14 = (KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_)0x0;
  method_00 = TypeInfo__FriendList___GetFriendByProfileID_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  (this_00->fields)._._._._.m_CachedPtr = (void *)profileID;
  pDVar3 = (this->fields).friends;
  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this_00,
             MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<int,_Friend>_
             ,
             MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
            );
  bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_9
                    ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                     (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                      *)pUVar4,
                     bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                    );
  if (bVar2 == 0) {
    pDVar3 = (this->fields).pending;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    _puStack_14 = (KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_)
                  CONCAT44(pUVar4,&UNK_?);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this_00,
               MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__2_System__Collections__Generic__KeyValuePair<int,_Friend>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
              );
    stack0xfffffff0 = (int32_t)&UNK_?;
    bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_9
                      ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                       (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                        *)pUVar4,
                       bool_MethodInfo__System__Linq__Enumerable__Any<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                      );
    if (bVar2 == 0) {
      return 0;
    }
    pDVar3 = (this->fields).pending;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this_00,
               MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__3_System__Collections__Generic__KeyValuePair<int,_Friend>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
              );
    System.Core.dll::System::Linq::Enumerable::Enumerable_Single_3
              ((IEnumerable_1_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_ *)
               pDVar3,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_
                       *)pUVar4,
               System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
              );
    ppuStack5 = (undefined **)&stack0xfffffff4;
  }
  else {
    pDVar3 = (this->fields).friends;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this_00,
               MethodInfo__FriendList___GetFriendByProfileID_c__AnonStorey0____m__1_System__Collections__Generic__KeyValuePair<int,_Friend>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>__Func_System__Object__void__
              );
    _puStack_14 = System.Core.dll::System::Linq::Enumerable::Enumerable_Single_3
                            ((IEnumerable_1_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_
                              *)pDVar3,
                             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_
                              *)pUVar4,
                             System__Collections__Generic__KeyValuePair<int,_Friend>_MethodInfo__System__Linq__Enumerable__First<System::Collections::Generic::KeyValuePair<int,_Friend>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_Friend>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_Friend>,_bool>_
                            );
    ppuStack5 = &puStack_6;
  }
  pMStack7 = MethodInfo__System__Collections__Generic__KeyValuePair<int,_Friend>__get_Value__
  ;
  iVar8 = func_?();
  if (iVar8 == 0) {
    return 0;
  }
  return *(int *)(iVar8 + 0x10) == 2;
}


/* Void OnPlayersLoaded() */

void Assembly-CSharp.dll::FriendList::FriendList_OnPlayersLoaded
               (FriendList *this,MethodInfo *method)

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
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar4 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 != (MVAvatar *)0x0) {
    pMVar5 = (MethodInfo *)&UNK_?;
    pMVar6 = MVAvatar::MVAvatar_get_Shield(pMVar4,(MethodInfo *)0x0);
    if (pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pDVar7 = (Delegate *)(pMVar6->fields)._._.lastSendTime;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__FriendList__OnPlayersLoaded__,(MethodInfo *)0x0)
      ;
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar7,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar7 = (Delegate *)0x0;
      if (pDVar8 != (Delegate *)0x0) {
        if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
          pDVar7 = pDVar8;
        }
        pAVar9 = TypeInfo__System__Action;
        if (pDVar7 == (Delegate *)0x0) goto code_?;
      }
      (pMVar6->fields)._._.lastSendTime = (float)pDVar7;
      pMVar4 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVAvatar *)0x0) &&
         (pMVar6 = MVAvatar::MVAvatar_get_Shield(pMVar4,pMVar5),
         pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
        pMVar5 = (MethodInfo *)&UNK_?;
        method_00 = (MethodInfo *)
                    MVPlayerContainer::MVPlayerContainer_get_Values
                              ((MVPlayerContainer *)pMVar6,(MethodInfo *)0x0);
        if (method_00 != (MethodInfo *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                      *)&stack0xffffffb8,
                     (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *
                     )method_00,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                    );
          uStack_1 = 0;
          while( true ) {
            cVar10 = func_?();
            if (cVar10 == '\0') {
              uStack_1 = 0xffffffff;
              func_?();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_02 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
            this_03 = (MethodInfo *)(this->fields).pendingNotifications;
            if ((this_02 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) ||
               (pOVar11 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   (this_02,pMVar5), this_03 == (MethodInfo *)0x0)) break;
            item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
            item.rgba = (int32_t)pOVar11;
            bVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                    List_1_UnityEngine_Color32__Contains
                              ((List_1_UnityEngine_Color32_ *)this_03,item,method_00);
            pMVar5 = this_03;
            if ((bVar12 != 0) &&
               (this_00 = (AvatarMotor_OnActiveBounceDelegate *)
                          (this->fields).OnFriendRequestReceived,
               this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
              method_00 = (MethodInfo *)&UNK_?;
              AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                        (this_00,(MethodInfo *)0x0);
              pMVar5 = this_03;
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pDVar8 = extraout_ECX;
  pAVar9 = extraout_EDX;
code_?:
  func_?(pDVar8,pAVar9);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RemoveFromPendingByProfileID(Int32) */

void Assembly-CSharp.dll::FriendList::FriendList_RemoveFromPendingByProfileID
               (FriendList *this,int32_t profileID,MethodInfo *method)

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
  this_04 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_04,MethodInfo__System__Collections__Generic__List<int>__List__);
  this_05 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_05,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  this_00 = (this->fields).pending;
  if ((this_00 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
     (this_06 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Keys__
                          ),
     this_06 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                         *)&stack0xffffffa8,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_06,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_Friend>__GetEnumerator__
                       );
    this_07 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(pDVar4->host_enumerator).next;
    uStack_1 = 0;
    do {
      cVar5 = func_?();
      if (cVar5 == '\0') goto code_?;
      item_00 = func_?();
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).pending;
      if ((this_01 ==
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) ||
         (pTVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_01,item_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                             ), pTVar6 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
    } while ((pTVar6->fields).m_patchSize.x != (float)profileID);
    if ((this_04 != (List_1_UnityEngine_Vector4_ *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_04,item_00,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_),
       this_05 !=
       (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
       0x0)) {
      this_07 = this_05;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_05,profileID,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      iStack_7 = 0;
      if (this_04 != (List_1_UnityEngine_Vector4_ *)0x0) {
        for (; pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_04,
                                   MethodInfo__System__Collections__Generic__List<int>__get_Count__)
            , iStack_7 < (int)pOVar8; iStack_7 = iStack_7 + 1) {
          this_07 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).pending;
          iVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__get_Item
                            ((List_1_System_Int32_ *)this_04,iStack_7,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
          if (this_07 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (this_07,iVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_)
          ;
        }
        iStack_7 = 0;
        if (this_05 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          while( true ) {
            pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_05,
                                MethodInfo__System__Collections__Generic__List<int>__get_Count__);
            if ((int)pOVar8 <= iStack_7) {
              this_03 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnFriendListUpdated;
              if (this_03 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
                AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                          (this_03,(MethodInfo *)0x0);
              }
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_02 = (List_1_UnityEngine_Color32_ *)(this->fields).pendingNotifications;
            iVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__get_Item
                              ((List_1_System_Int32_ *)this_05,iStack_7,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
            if (this_02 == (List_1_UnityEngine_Color32_ *)0x0) break;
            item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Remove_int_;
            item.rgba = iVar9;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__Remove(this_02,item,(MethodInfo *)this_07);
            iStack_7 = iStack_7 + 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateFriend(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::FriendList::FriendList_UpdateFriend
               (FriendList *this,int32_t friendID,int32_t profileID,FriendStatus__Enum status,
               MethodInfo *method)

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
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar5,(MethodInfo *)0x0);
    if ((Object *)profileID == pOVar6) {
      this_01 = (this->fields).friends;
      if (this_01 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)this_01,friendID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                          );
        if (bVar7 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
          this_03 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnFriendListUpdated;
          if (this_03 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
            AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                      (this_03,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (status == FriendStatus__Enum_Deleted) {
          pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).friends;
          if (pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      (pDVar8,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
            goto code_?;
          }
        }
        else {
          this_02 = (MVWorldInventory_OnWorldInventoryChangeDelegate *)
                    (this->fields).OnFriendRequestAccepted;
          if (this_02 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).friends;
            if ((pDVar8 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) ||
               (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (pDVar8,friendID,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                    ),
               this_02 == (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0))
            goto code_?;
            MVWorldInventory+OnWorldInventoryChangeDelegate::
            MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke
                      (this_02,(MVWorldInventory *)pTVar9,(MethodInfo *)0x0);
          }
          pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).friends;
          if ((pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) &&
             (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  (pDVar8,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ), pTVar9 != (TerrainUtility_TerrainMap *)0x0)) {
            (pTVar9->fields).m_patchSize.z = (float)status;
            data = (Dictionary_2_System_Object_System_Object_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pSVar10 = (String *)func_?();
            pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).friends;
            if ((pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) &&
               (value = (CrossPlatformInputManager_VirtualButton *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  (pDVar8,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ), data != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)data,pSVar10,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                func_?();
              }
              NotificationController::NotificationController_OnNotificationReceived
                        (NotificationType__Enum_FriendRequestAccepted,data,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    else {
      pMVar11 = (MethodInfo *)this;
      FriendList_RemoveFromPendingByProfileID(this,profileID,(MethodInfo *)0x0);
      if (status == FriendStatus__Enum_Deleted) goto code_?;
      this_00 = (Action_1_UIPushOption_ *)(this->fields).OnPendingCountChanged;
      if (this_00 != (Action_1_UIPushOption_ *)0x0) {
        this_04 = FriendList_GetOnlineFriends(this,(MethodInfo *)0x0);
        if ((this_04 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) ||
           (pOVar6 = System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                     KeyValuePair`2[System::Object,System::Object],System::Object]::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                 *)this_04,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                               ), this_00 == (Action_1_UIPushOption_ *)0x0)) goto code_?;
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_00,(UIPushOption__Enum)pOVar6,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_05 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((this_05 != (MVAvatar *)0x0) &&
          (this_06 = MVAvatar::MVAvatar_get_Shield(this_05,(MethodInfo *)0x0),
          this_06 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
         (this_07 = MVPlayerContainer::MVPlayerContainer_get_Values
                              ((MVPlayerContainer *)this_06,pMVar11),
         this_07 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                    *)&stack0xffffffb4,
                   (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                   this_07,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                  );
        uStack_1 = 0;
        do {
          cVar12 = func_?();
          if (cVar12 == '\0') {
            this_08 = (GamePointGainEffect *)0x0;
            break;
          }
          this_08 = (GamePointGainEffect *)func_?();
          if (this_08 == (GamePointGainEffect *)0x0) goto code_?;
          pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_08,
                              (MethodInfo *)0x0);
        } while ((Object *)profileID != pOVar6);
        uStack_1 = 0xffffffff;
        pMVar11 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
        ;
        func_?();
        if (this_08 != (GamePointGainEffect *)0x0) {
          pSVar10 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
          iVar13 = GamePointGainEffect::GamePointGainEffect_get_ID(this_08,(MethodInfo *)0x0);
          if (iVar13 == 0) goto code_?;
          pOVar6 = *(Object **)(iVar13 + 0xc);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar10 = mscorlib.dll::System::String::String_Format(pSVar10,pOVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar11 = (MethodInfo *)0x3;
          NotificationController::NotificationController_PushNotification
                    (pSVar10,(Sprite *)0x0,3,(MethodInfo *)0x0);
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
           pMVar5 != (MVLocalPlayer *)0x0)) {
          pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar5,pMVar11);
          FriendList_AddFriend(this,friendID,(int32_t)pOVar6,profileID,status,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* FriendList() */

void Assembly-CSharp.dll::FriendList::FriendList__ctor(FriendList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_Friend_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__);
  (this->fields).friends = pDVar1;
  pDVar1 = (Dictionary_2_System_Int32_Friend_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_Friend>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Dictionary__);
  (this->fields).pending = pDVar1;
  method_00 = TypeInfo__System__Collections__Generic__List<int>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).pendingNotifications = (List_1_System_Int32_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVAvatar *)0x0) {
    pMVar2 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
    if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pAStack3 = TypeInfo__System__Action;
      pDVar4 = (Delegate *)(pMVar2->fields)._._.lastSendTime;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,MethodInfo__FriendList__OnPlayersLoaded__,(MethodInfo *)0x0)
      ;
      pDStack5 =
           mscorlib.dll::System::Delegate::Delegate_Combine
                     (pDVar4,(Delegate *)this_02,(MethodInfo *)0x0);
      pDVar4 = (Delegate *)0x0;
      if (pDStack5 == (Delegate *)0x0) {
code_?:
        (pMVar2->fields)._._.lastSendTime = (float)pDVar4;
        return;
      }
      if ((Action__Class *)pDStack5->klass == TypeInfo__System__Action) {
        pDVar4 = pDStack5;
      }
      pAStack6 = TypeInfo__System__Action;
      if (pDVar4 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDStack5 = extraout_ECX;
  pAStack6 = extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Friend get_Item(Int32) */

Friend * Assembly-CSharp.dll::FriendList::FriendList_get_Item
                   (FriendList *this,int32_t friendID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).friends;
  if (pDVar1 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).pending;
      if (pDVar1 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        return (Friend *)0x0;
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).pending;
    }
    else {
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).friends;
    }
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_00,friendID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                         );
      return (Friend *)pTVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pFVar5 = (Friend *)(*pcVar4)();
  return pFVar5;
}

