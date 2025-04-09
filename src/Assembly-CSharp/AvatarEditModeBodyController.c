
/* Void CaptureScreenshotForBody(Int32, Action`2[Int32,UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_CaptureScreenshotForBody
               (AvatarEditModeBodyController *this,int32_t index,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).pictureTaker;
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).bodies;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    avatar = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_01,index,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (this_00 != (AvatarPictureTakerUGUI *)0x0) {
      AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                (this_00,(MVWorldObjectClient *)avatar,index,OnPictureTaken,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CaptureScreenshotsForAllAvatars(Action`2[Int32,UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_CaptureScreenshotsForAllAvatars
               (AvatarEditModeBodyController *this,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).Picture2DTakenCallback;
  *ppAVar1 = OnPictureTaken;
  func_?(ppAVar1,OnPictureTaken);
  pLVar2 = (this->fields).bodies;
  index = 0;
  if (pLVar2 != (List_1_MVBody_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        cRam_? = '\x01';
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      this_00 = (this->fields).pictureTaker;
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      avatar = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar3,index,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      OnPictureTaken_00 = (this->fields).Picture2DTakenCallback;
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar3,index,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,(this->fields).currentBodyIndex,
                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
         this_00 == (AvatarPictureTakerUGUI *)0x0)) break;
      AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                (this_00,(MVWorldObjectClient *)avatar,index,OnPictureTaken_00,RVar4 == RVar5,
                 (MethodInfo *)0x0);
      pLVar2 = (this->fields).bodies;
      index = index + 1;
      if (pLVar2 == (List_1_MVBody_ *)0x0) break;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ExecuteReset() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_ExecuteReset
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pWVar2 = (pMVar1->fields).worldNetwork;
    if (pWVar2 != (WorldNetwork *)0x0) {
      pEVar3 = (pWVar2->fields)._.InitializedGameQueryData;
      ppEVar4 = &(pWVar2->fields)._.InitializedGameQueryData;
      this_00 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pEVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        *ppEVar4 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      }
      else {
        pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
        if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
        goto code_?;
        *ppEVar4 = pEVar3;
        iVar6 = func_?();
        if (iVar6 == 0) goto code_?;
      }
      func_?();
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        cRam_? = '\x01';
      }
      if (_UNK_? != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      {
        RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (_UNK_?,_UNK_?,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if ((RVar7 != (RegexCharClass_SingleRange)0x0) &&
           (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetAvatar
                    (this_01,*(int32_t *)((int)RVar7 + 8),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void GenerateIconForBody(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_GenerateIconForBody
               (AvatarEditModeBodyController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).bodies;
  this_00 = (this->fields).pictureTaker;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
              (pLVar1,index,MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).bodies;
    avatar = (MVWorldObjectClient *)(this->fields).Picture2DTakenCallback;
    if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar1,(this->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if (this_00 != (AvatarPictureTakerUGUI *)0x0) {
          AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                    (this_00,avatar,index,(Action_2_Int32_UnityEngine_Texture2D_ *)avatar,
                     RVar2 == RVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_Initialize
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationState);
    func_?(&TypeInfo__AvatarEditModeBodyController);
    func_?(&TypeInfo__CloudyThemeBase);
    func_?(&
                    UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_int>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_int>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                   );
    func_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    func_?(&TypeInfo__System__Func<MVWorldObjectClient,_int>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVWorldObjectClient>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVBody>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVBody>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVWorldObjectClient>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_);
    func_?(&TypeInfo__MVBody);
    func_?(&TypeInfo__MVSpawnPointRed);
    func_?(&
                    AvatarPictureTakerUGUI_MethodInfo__UnityEngine__Object__Instantiate<AvatarPictureTakerUGUI>_AvatarPictureTakerUGUI_
                   );
    func_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_0_MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_1_MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_2_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    func_?(&StringLiteral_Normal);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMStack_6 = (MVSpawnPointRed *)(this->fields).pictureTaker;
  ppAVar7 = &(this->fields).pictureTaker;
  pIStack_8 = (IEnumerator *)0x0;
  pMStack_9 = (MVSpawnPointRed *)0x0;
  pMStack_10 = (MVSpawnPointRed *)0x0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar11 = (AvatarPictureTakerUGUI *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pMStack_6,
                       AvatarPictureTakerUGUI_MethodInfo__UnityEngine__Object__Instantiate<AvatarPictureTakerUGUI>_AvatarPictureTakerUGUI_
                      );
  *ppAVar7 = pAVar11;
  func_?(ppAVar7,pAVar11);
  pMStack_12 = (MVSpawnPointRed__Class *)
               MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar13 = (MVSpawnPointRed *)TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_0
  ;
  if (pMVar13 == (MVSpawnPointRed *)0x0) {
    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar14 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    pMVar13 = (MVSpawnPointRed *)func_?();
    pMStack_6 = pMVar13;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)pMVar13,(Object *)pAVar14,
               MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_0 =
         (Func_2_MVWorldObjectClient_Boolean_ *)pMVar13;
    func_?();
  }
  if (pMStack_12 != (MVSpawnPointRed__Class *)0x0) {
    pMStack_6 = (MVSpawnPointRed *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                           ((MVWorldObjectClientManager *)pMStack_12,
                            (Func_2_MVWorldObjectClient_Boolean_ *)pMVar13,(MethodInfo *)0x0);
    if (pMStack_6 == (MVSpawnPointRed *)0x0) {
      (this->fields).bodySpawnPoint = (MVSpawnPointRed *)0x0;
    }
    else {
      bVar15 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
      if (((pMStack_6->klass->_1).naturalAligment < bVar15) ||
         ((MVSpawnPointRed__Class *)(pMStack_6->klass->_1).typeHierarchy[bVar15 - 1] !=
          TypeInfo__MVSpawnPointRed)) {
        func_?();
        goto code_?;
      }
      (this->fields).bodySpawnPoint = pMStack_6;
      bStack_16 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
      if (((pMStack_6->klass->_1).naturalAligment < bStack_16) ||
         ((MVSpawnPointRed__Class *)(pMStack_6->klass->_1).typeHierarchy[bStack_16 - 1] !=
          TypeInfo__MVSpawnPointRed)) goto code_?;
    }
    ppMVar17 = &(this->fields).bodySpawnPoint;
    func_?();
    if (*ppMVar17 != (MVSpawnPointRed *)0x0) {
      puVar18 = (ulonglong *)(*(code *)((*ppMVar17)->klass->vtable).get_WorldPosition_1.method)();
      QStack_19._4_8_ = *puVar18;
      QStack_19.w = *(float *)(puVar18 + 1);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_21._0_4_ = (pVVar20->upVector).x;
      uStack_21._4_4_ = (pVVar20->upVector).y;
      ppMStack_22 = (MVSpawnPointRed__Class **)(pVVar20->upVector).z;
      QStack_19.w = QStack_19.w - (float)ppMStack_22;
      pMVar13 = *ppMVar17;
      (this->fields).displayPos.x = QStack_19.y - (float)uStack_21;
      (this->fields).displayPos.y = QStack_19.z - uStack_21._4_4_;
      (this->fields).displayPos.z = QStack_19.w;
      if (pMVar13 != (MVSpawnPointRed *)0x0) {
        puVar18 = (ulonglong *)(*(code *)(pMVar13->klass->vtable).get_WorldPosition_1.method)();
        uStack_21 = *puVar18;
        ppMStack_22 = *(MVSpawnPointRed__Class ***)(puVar18 + 1);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
        QStack_19.y = (pVVar20->upVector).x;
        QStack_19.z = (pVVar20->upVector).y;
        fVar23 = QStack_19.z * _UNK_?;
        QStack_19.w = (float)ppMStack_22 - (pVVar20->upVector).z * _UNK_?;
        (this->fields).hidePos.x = (float)uStack_21 - QStack_19.y * _UNK_?;
        (this->fields).hidePos.y = uStack_21._4_4_ - fVar23;
        (this->fields).hidePos.z = QStack_19.w;
        if (*ppMVar17 != (MVSpawnPointRed *)0x0) {
          pQVar24 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                              (&QStack_19,(MVWorldObjectClient *)*ppMVar17,(MethodInfo *)0x0);
          fVar23 = pQVar24->y;
          fVar25 = pQVar24->z;
          fVar26 = pQVar24->w;
          pMVar13 = *ppMVar17;
          (this->fields).displayRotation.x = pQVar24->x;
          (this->fields).displayRotation.y = fVar23;
          (this->fields).displayRotation.z = fVar25;
          (this->fields).displayRotation.w = fVar26;
          if ((pMVar13 != (MVSpawnPointRed *)0x0) &&
             (this_00 = (pMVar13->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,0,(MethodInfo *)0x0);
            pMVar13 = (MVSpawnPointRed *)
                      MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMStack_6 = pMVar13;
            if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
              QStack_19.z = (float)TypeInfo__AvatarEditModeBodyController____c;
              QStack_19.y = (float)&UNK_?;
              func_?();
            }
            this_04 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_1;
            if (this_04 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?();
              }
              pAVar14 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              this_04 = (Func_2_MVWorldObjectClient_Boolean_ *)func_?();
              mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                        ((Func_2_Object_Boolean_ *)this_04,(Object *)pAVar14,
                         MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_1_MVWorldObjectClient_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_1 = this_04;
              func_?();
              pMVar13 = pMStack_6;
            }
            if (pMVar13 != (MVSpawnPointRed *)0x0) {
              pMStack_6 = (MVSpawnPointRed *)
                           MVWorldObjectClientManager::
                           MVWorldObjectClientManager_GetWorldObjectClientsWhere
                                     ((MVWorldObjectClientManager *)pMVar13,this_04,
                                      (MethodInfo *)0x0);
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?();
              }
              this_05 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_2;
              if (this_05 == (Func_2_MVWorldObjectClient_Int32_ *)0x0) {
                if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?(TypeInfo__AvatarEditModeBodyController____c);
                }
                pAVar14 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                this_05 = (Func_2_MVWorldObjectClient_Int32_ *)
                          func_?(TypeInfo__System__Func<MVWorldObjectClient,_int>);
                Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::
                IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
                ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                            *)this_05,(Object *)pAVar14,
                           MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_2_MVWorldObjectClient_
                           ,(MethodInfo *)0x0);
                TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_2 = this_05;
                func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                 __9__23_2,this_05);
              }
              pIVar27 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                                  ((IEnumerable_1_System_Object_ *)pMStack_6,
                                   (Func_2_Object_Int32_ *)this_05,
                                   System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_int>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_int>_
                                  );
              if (pIVar27 != (IOrderedEnumerable_1_System_Object_ *)0x0) {
                pMStack_28 = (MVSpawnPointRed__Class *)func_?();
                ppMStack_22 = &pMStack_28;
                uStack_21 = uStack_21 & 0xffffffff;
                uStack_1._0_1_ = 1;
                uStack_1._1_3_ = 0;
                while (pMStack_28 != (MVSpawnPointRed__Class *)0x0) {
                  cVar29 = func_?();
                  if (cVar29 == '\0') {
                    uStack_1 = 0xffffffff;
                    if (*ppMStack_22 != (MVSpawnPointRed__Class *)0x0) {
                      func_?();
                    }
                    uStack_1._0_1_ = 0xff;
                    uStack_1._1_3_ = 0xffffff;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).bodies;
                    if ((pLVar30 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)0x0) &&
                       (RVar31 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                 RegularExpressions::RegexCharClass+SingleRange]::
                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                           (pLVar30,(this->fields).currentBodyIndex,
                                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                           ), RVar31 != (RegexCharClass_SingleRange)0x0)) {
                      (**(code **)(*(int *)RVar31 + 400))();
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               (this->fields).bodies;
                      if ((pLVar30 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)0x0) &&
                         (RVar31 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                   RegularExpressions::RegexCharClass+SingleRange]::
                                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                             (pLVar30,(this->fields).currentBodyIndex,
                                              MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                             ), RVar31 != (RegexCharClass_SingleRange)0x0)) {
                        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                                  ((MVWorldObjectClient *)RVar31,(this->fields).displayRotation,
                                   (MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          pIStack_32 = (IEnumerable_1_System_Object_ *)
                                       &
                                       MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                          ;
                          QStack_19.w = (float)&UNK_?;
                          func_?();
                          cRam_? = '\x01';
                        }
                        pLVar30 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)(this->fields).bodies;
                        if ((pLVar30 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)0x0) &&
                           (RVar31 = mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                     ::RegularExpressions::RegexCharClass+SingleRange]::
                                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                               (pLVar30,(this->fields).currentBodyIndex,
                                                MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                               ), RVar31 != (RegexCharClass_SingleRange)0x0)) {
                          MVBody::MVBody_set_Visible((MVBody *)RVar31,1,(MethodInfo *)0x0);
                          pIVar33 = System.Core.dll::System::Linq::Enumerable::Enumerable_Skip
                                              ((IEnumerable_1_System_Object_ *)(this->fields).bodies
                                               ,1,
                                               System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                                              );
                          if (pIVar33 != (IEnumerable_1_System_Object_ *)0x0) {
                            QStack_19.w = (float)
                                          TypeInfo__System__Collections__Generic__IEnumerable<MVBody>
                            ;
                            QStack_19.y = 3.641162e-29;
                            QStack_19.z = 0.0;
                            pIStack_32 = pIVar33;
                            pMStack_10 = (MVSpawnPointRed *)func_?();
                            QStack_19.w = (float)&pMStack_10;
                            QStack_19._4_8_ = QStack_19._4_8_ & 0xffffffff;
                            uStack_1._1_3_ = 0;
                            uStack_1._0_1_ = 7;
                            goto code_?;
                          }
                        }
                      }
                    }
                    break;
                  }
                  pMStack_12 = pMStack_28;
                  if (pMStack_28 == (MVSpawnPointRed__Class *)0x0) break;
                  pMStack_34 = (MVBody *)(pMStack_28->_0).image;
                  uVar35 = 0;
                  pMStack_6 = (MVSpawnPointRed *)0x0;
                  uVar36 = *(ushort *)&(pMStack_34->fields)._._._.field_0xae;
                  if (uVar36 != 0) {
                    pDVar37 = (pMStack_34->fields)._._._._.data;
                    do {
                      if ((&pDVar37->klass)[(uint)uVar35 * 2] ==
                          (Dictionary_2_System_Object_System_Object___Class *)
                          TypeInfo__System__Collections__Generic__IEnumerator<MVWorldObjectClient>)
                      {
                        piVar38 = &(pMStack_34->fields)._._._.eliteRequiredFlags +
                                  (int)(&pDVar37->monitor)[(uint)uVar35 * 2];
                        goto code_?;
                      }
                      uVar35 = uVar35 + 1;
                    } while (uVar35 < uVar36);
                  }
                  piVar38 = (int64_t *)func_?();
code_?:
                  this_06 = (MVBody *)(**(code **)piVar38)();
                  if (this_06 == (MVBody *)0x0) break;
                  bVar15 = (TypeInfo__MVBody->_1).naturalAligment;
                  if (((this_06->klass->_1).naturalAligment < bVar15) ||
                     ((MVBody__Class *)(this_06->klass->_1).typeHierarchy[bVar15 - 1] !=
                      TypeInfo__MVBody)) break;
                  MVBody::MVBody_set_ShadowVisible(this_06,0,(MethodInfo *)0x0);
                  MVBody::MVBody_set_Visible(this_06,0,(MethodInfo *)0x0);
                  this_07 = MVBody::MVBody_get_Animation(this_06,(MethodInfo *)0x0);
                  if ((this_07 == (BoneAnimation *)0x0) ||
                     (this_08 = (Animation *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)this_07,
                                           UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                          ), this_08 == (Animation *)0x0)) break;
                  pIStack_8 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                               Animation_GetEnumerator(this_08,(MethodInfo *)0x0);
                  QStack_19._4_8_ = ZEXT48(&pIStack_8) << 0x20;
                  QStack_19.w = (float)&pMStack_9;
                  uStack_1._0_1_ = 3;
                  pMStack_34 = this_06;
                  while( true ) {
                    if (pIStack_8 == (IEnumerator *)0x0) goto code_?;
                    cVar29 = func_?();
                    if (cVar29 == '\0') break;
                    if ((pIStack_8 == (IEnumerator *)0x0) ||
                       (pAVar39 = (AnimationState *)func_?(),
                       pAVar39 == (AnimationState *)0x0)) goto code_?;
                    pAVar40 = (AnimationState *)0x0;
                    if (pAVar39->klass == TypeInfo__UnityEngine__AnimationState) {
                      pAVar40 = pAVar39;
                    }
                    if (pAVar40 == (AnimationState *)0x0) goto code_?;
                    pAVar40 = (AnimationState *)0x0;
                    if (pAVar39->klass == TypeInfo__UnityEngine__AnimationState) {
                      pAVar40 = pAVar39;
                    }
                    UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_set_wrapMode(pAVar40,WrapMode__Enum_Loop,(MethodInfo *)0x0);
                  }
                  uStack_1._0_1_ = 1;
                  func_?();
                  uStack_1._0_1_ = 1;
                  this_01 = (this->fields).bodies;
                  if (this_01 == (List_1_MVBody_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)this_01,(Object *)this_06,
                             MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_);
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
code_?:
  func_?();
  uVar41 = func_?();
  func_?(uVar41);
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
  return;
code_?:
  if (pMStack_10 == (MVSpawnPointRed *)0x0) goto code_?;
  cVar29 = func_?();
  if (cVar29 == '\0') {
    uStack_1 = 0xffffffff;
    if (pMStack_10 != (MVSpawnPointRed *)0x0) {
      func_?();
    }
    uStack_1._0_1_ = 0xff;
    uStack_1._1_3_ = 0xffffff;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_02 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
    if (this_02 != (ThemeRepository *)0x0) {
      original = ThemeRepository::ThemeRepository_GetThemePrefab
                           (this_02,StringLiteral_Normal,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar43 = (CloudyThemeBase *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
      if (pCVar43 == (CloudyThemeBase *)0x0) {
        TypeInfo__AvatarEditModeBodyController->static_fields->Theme = (CloudyThemeBase *)0x0;
        QStack_19.x = (float)(CloudyThemeBase *)0x0;
      }
      else {
        bVar15 = (TypeInfo__CloudyThemeBase->_1).naturalAligment;
        if (((pCVar43->klass->_1).naturalAligment < bVar15) ||
           ((pCVar43->klass->_1).typeHierarchy[bVar15 - 1] !=
            (Il2CppClass *)TypeInfo__CloudyThemeBase)) {
          bVar44 = false;
        }
        else {
          bVar44 = true;
        }
        pCVar45 = (CloudyThemeBase *)0x0;
        if (bVar44) {
          pCVar45 = pCVar43;
        }
        TypeInfo__AvatarEditModeBodyController->static_fields->Theme = pCVar45;
        bVar15 = (TypeInfo__CloudyThemeBase->_1).naturalAligment;
        if (((pCVar43->klass->_1).naturalAligment < bVar15) ||
           ((pCVar43->klass->_1).typeHierarchy[bVar15 - 1] !=
            (Il2CppClass *)TypeInfo__CloudyThemeBase)) {
          bVar44 = false;
        }
        else {
          bVar44 = true;
        }
        QStack_19.x = (float)(CloudyThemeBase *)0x0;
        if (bVar44) {
          QStack_19.x = (float)pCVar43;
        }
      }
      func_?();
      pCVar43 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
      if (pCVar43 != (CloudyThemeBase *)0x0) {
        Theme::Theme_InitializeForPreview((Theme *)pCVar43,(MethodInfo *)0x0);
        pCVar43 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
        if ((pCVar43 != (CloudyThemeBase *)0x0) &&
           (this_03 = (pCVar43->fields)._._Settings_k__BackingField,
           this_03 != (SettingsWrapper *)0x0)) {
          ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_03,(MethodInfo *)0x0);
          pCVar43 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
          if (pCVar43 != (CloudyThemeBase *)0x0) {
            Theme::Theme_Activate((Theme *)pCVar43,(MethodInfo *)0x0);
            pCVar43 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
            if ((pCVar43 != (CloudyThemeBase *)0x0) &&
               (pTVar46 = (pCVar43->fields).skybox, pTVar46 != (ThemeSkybox *)0x0)) {
              ThemeSkybox::ThemeSkybox_set_SunLightIntensity(pTVar46,0.3,(MethodInfo *)0x0);
              pCVar43 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
              if ((pCVar43 != (CloudyThemeBase *)0x0) &&
                 (pTVar46 = (pCVar43->fields).skybox, pTVar46 != (ThemeSkybox *)0x0)) {
                ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar46,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  pMStack_6 = pMStack_10;
  if (pMStack_10 == (MVSpawnPointRed *)0x0) goto code_?;
  pMStack_12 = pMStack_10->klass;
  uVar35 = 0;
  pMStack_34 = (MVBody *)0x0;
  uVar36._0_1_ = (pMStack_12->_1).rank;
  uVar36._1_1_ = (pMStack_12->_1).minimumAlignment;
  ppMStack_22 = (MVSpawnPointRed__Class **)(uint)uVar36;
  if (uVar36 != 0) {
    do {
      if (pMStack_12->interfaceOffsets[uVar35].interfaceType ==
          (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerator<MVBody>) {
        ppMVar47 = &(&(pMStack_12->vtable).Equals)[pMStack_12->interfaceOffsets[uVar35].offset].
                    method;
        goto code_?;
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 < uVar36);
  }
  ppMVar47 = (MethodInfo **)func_?();
code_?:
  pMStack_6 = (MVSpawnPointRed *)(*(code *)*ppMVar47)();
  if (pMStack_6 == (MVSpawnPointRed *)0x0) goto code_?;
  uVar48._0_4_ = (this->fields).hidePos.x;
  uVar48._4_4_ = (this->fields).hidePos.y;
  (*(code *)(pMStack_6->klass->vtable).set_WorldPosition.method)(pMStack_6,uVar48);
  pMVar13 = (this->fields).bodySpawnPoint;
  if (pMVar13 == (MVSpawnPointRed *)0x0) goto code_?;
  pQVar24 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xffffff94,(MVWorldObjectClient *)pMVar13,
                       (MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
            ((MVWorldObjectClient *)pMStack_6,*pQVar24,(MethodInfo *)0x0);
  goto code_?;
}


/* Void InitializedPurchasedAvatar(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_InitializedPurchasedAvatar
               (AvatarEditModeBodyController *this,Object *sender,
               InitializedGameQueryDataEventArgs *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pAStack_3 = (Action__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pAStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__AnimationState);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController___InitializedPurchasedAvatar_b__38_1_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    func_?(&TypeInfo__MVBody);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___InitializedPurchasedAvatar_b__38_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    func_?(&StringLiteral_Purchased_avatar_has_been_added_);
    cRam_? = '\x01';
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 == (MVNetworkGame *)0x0) ||
     (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 == (WorldNetwork *)0x0))
  goto code_?;
  pEVar6 = (pWVar5->fields)._.InitializedGameQueryData;
  ppEVar7 = &(pWVar5->fields)._.InitializedGameQueryData;
  this_00 = (EventHandler_1_Object_ *)func_?();
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pEVar6,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar8 == (Delegate *)0x0) {
    *ppEVar7 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
    func_?();
    pSVar9 = StringLiteral_Purchased_avatar_has_been_added_;
    if (e != (InitializedGameQueryDataEventArgs *)0x0) {
      pMVar10 = (e->fields).RootWO;
      if (pMVar10 == (MVWorldObjectClient *)0x0) {
code_?:
        *unaff_FS_OFFSET = pAStack_3;
        return;
      }
      str1 = (String *)
             (*(code *)(pMVar10->klass->vtable).ToString.method)
                       (pMVar10,(pMVar10->klass->vtable).get_Position.methodPtr);
      pSVar9 = mscorlib.dll::System::String::String_Concat_3(pSVar9,str1,in_stack_11);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar9,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pMVar10 = (e->fields).RootWO;
      if ((pMVar10 != (MVWorldObjectClient *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0))
      {
        this_02 = (MVBody *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,(pMVar10->fields)._.id,(MethodInfo *)0x0);
        if (this_02 != (MVBody *)0x0) {
          bVar12 = (TypeInfo__MVBody->_1).naturalAligment;
          if ((bVar12 <= (this_02->klass->_1).naturalAligment) &&
             ((MVBody__Class *)(this_02->klass->_1).typeHierarchy[bVar12 - 1] == TypeInfo__MVBody)) {
            item = this_02;
            MVBody::MVBody_set_ShadowVisible(this_02,0,(MethodInfo *)0x0);
            MVBody::MVBody_set_Visible(this_02,0,(MethodInfo *)0x0);
            this_03 = MVBody::MVBody_get_Animation(this_02,(MethodInfo *)0x0);
            if (this_03 != (BoneAnimation *)0x0) {
              this_04 = (Animation *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)this_03,
                                   UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                  );
              if (this_04 != (Animation *)0x0) {
                pIVar13 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                          Animation_GetEnumerator(this_04,(MethodInfo *)0x0);
                uStack_1 = 1;
                while (pIVar13 != (IEnumerator *)0x0) {
                  cVar14 = func_?(0,TypeInfo__System__Collections__IEnumerator);
                  if (cVar14 == '\0') {
                    uStack_1 = 0xffffffff;
                    iVar15 = func_?(pIVar13);
                    if (iVar15 != 0) {
                      func_?(0,TypeInfo__System__IDisposable);
                    }
                    uStack_1 = 0xffffffff;
                    pLVar16 = (this->fields).bodies;
                    if (pLVar16 != (List_1_MVBody_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLVar16,(Object *)item,
                                 MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_
                                );
                      pLVar16 = (this->fields).bodies;
                      if (pLVar16 != (List_1_MVBody_ *)0x0) {
                        iVar15 = (pLVar16->fields)._size + -1;
                        AvatarEditModeBodyController_GenerateIconForBody
                                  (this,iVar15,(MethodInfo *)0x0);
                        AvatarEditModeBodyController_SetCurrentBody(this,iVar15,(MethodInfo *)0x0);
                        AvatarSelectionController::
                        AvatarSelectionController_set_CurrentlySelectedSlotIndex
                                  (iVar15,(MethodInfo *)0x0);
                        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (pMVar4 != (MVNetworkGame *)0x0) {
                          pAStack_3 = TypeInfo__System__Action;
                          pAVar17 = (pMVar4->fields).OnActiveAvatarSet;
                          ppAVar18 = &(pMVar4->fields).OnActiveAvatarSet;
                          this_05 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (this_05,(Object *)this,
                                     MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__
                                     ,(MethodInfo *)0x0);
                          pAVar17 = (Action *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar17,(Delegate *)this_05,
                                               (MethodInfo *)0x0);
                          if (pAVar17 == (Action *)0x0) {
                            *ppAVar18 = (Action *)0x0;
                          }
                          else {
                            pAVar19 = (Action *)0x0;
                            if (pAVar17->klass == TypeInfo__System__Action) {
                              pAVar19 = pAVar17;
                            }
                            if (pAVar19 == (Action *)0x0) goto code_?;
                            *ppAVar18 = pAVar19;
                            pAVar19 = (Action *)0x0;
                            if (pAVar17->klass == TypeInfo__System__Action) {
                              pAVar19 = pAVar17;
                            }
                            if (pAVar19 == (Action *)0x0) goto code_?;
                          }
                          func_?();
                          pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)0x0,(MethodInfo *)0x0);
                          if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          callbackFunction =
                               TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__38_0
                          ;
                          if (callbackFunction ==
                              (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
                            if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9
                            ;
                            callbackFunction =
                                 (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                                 func_?();
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                      ((UnityAction_2_System_Object_System_Object_ *)
                                       callbackFunction,(Object *)object,
                                       MethodInfo__AvatarEditModeBodyController____c___InitializedPurchasedAvatar_b__38_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                                       ,(MethodInfo *)0x0);
                            TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__38_0 =
                                 callbackFunction;
                            func_?();
                          }
                          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_ExecuteHierarchy
                                    (pGVar20,(BaseEventData *)0x0,
                                     (ExecuteEvents_EventFunction_1_System_Object_ *)
                                     callbackFunction,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                                    );
                          pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject
                                              ((Component *)&UNK_?,(MethodInfo *)0x0);
                          callbackFunction_00 =
                               (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    ((UnityAction_2_System_Object_System_Object_ *)
                                     callbackFunction_00,(Object *)&UNK_?,
                                     MethodInfo__AvatarEditModeBodyController___InitializedPurchasedAvatar_b__38_1_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_ExecuteHierarchy
                                    (pGVar20,(BaseEventData *)0x0,callbackFunction_00,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                                    );
                          this_06 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                              ((MethodInfo *)0x0);
                          if ((_UNK_? != 0) &&
                             (this_06 != (MVNetworkGame_OperationRequests *)0x0)) {
                            MVNetworkGame+OperationRequests::
                            MVNetworkGame_OperationRequests_SetActiveAvatar
                                      (this_06,*(int32_t *)(_UNK_? + 8),(MethodInfo *)0x0);
                            goto code_?;
                          }
                        }
                      }
                    }
                    break;
                  }
                  if (pIVar13 == (IEnumerator *)0x0) break;
                  pIVar21 = pIVar13->klass;
                  uVar22 = 0;
                  uVar23._0_1_ = (pIVar21->_1).rank;
                  uVar23._1_1_ = (pIVar21->_1).minimumAlignment;
                  pIVar24 = pIVar13;
                  if (uVar23 != 0) {
                    do {
                      if (pIVar21->interfaceOffsets[uVar22].interfaceType ==
                          (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                        ppMVar25 = &(&(pIVar13->klass->vtable).get_Current)
                                    [pIVar21->interfaceOffsets[uVar22].offset].method;
                        goto code_?;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < uVar23);
                  }
                  ppMVar25 = (MethodInfo **)
                             func_?(pIVar13,TypeInfo__System__Collections__IEnumerator);
code_?:
                  pAVar26 = (AnimationState *)(*(code *)*ppMVar25)(pIVar13);
                  if (pAVar26 == (AnimationState *)0x0) break;
                  pAVar27 = (AnimationState *)0x0;
                  if (pAVar26->klass == TypeInfo__UnityEngine__AnimationState) {
                    pAVar27 = pAVar26;
                  }
                  if (pAVar27 == (AnimationState *)0x0) goto code_?;
                  pAVar27 = (AnimationState *)0x0;
                  if (pAVar26->klass == TypeInfo__UnityEngine__AnimationState) {
                    pAVar27 = pAVar26;
                  }
                  UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_set_wrapMode(pAVar27,WrapMode__Enum_Loop,(MethodInfo *)0x0);
                  pIVar13 = pIVar24;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pEVar6 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
    if (pEVar6 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      *ppEVar7 = pEVar6;
      iVar15 = func_?();
      if (iVar15 != 0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pAVar26 = extraout_ECX;
code_?:
  func_?(pAVar26);
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void MVNetworGame_ScreenshotUploadedHandler(Object, ScreenshotUploadedEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_MVNetworGame_ScreenshotUploadedHandler
               (AvatarEditModeBodyController *this,Object *sender,ScreenshotUploadedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                   );
    func_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseSoundManager>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_0_UnityEngine__EventSystems__IPurchaseSoundManager__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_3_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c__DisplayClass43_0___MVNetworGame_ScreenshotUploadedHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass43_0);
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    func_?(&StringLiteral_There_was_a_server_communication);
    func_?(&StringLiteral_Success_);
    func_?(&StringLiteral_Action_failed_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarEditModeBodyController____c__DisplayClass43_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
              (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_01,(MethodInfo *)0x0);
    pNVar2 = (this->fields).notificationPopup;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pNVar2,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    if (this_01 != (EventHandler_1_Object_ *)0x0) {
      pEVar3 = &this_01->fields;
      (pEVar3->_)._.method_ptr = pOVar1;
      object = this_01;
      func_?();
      if (pEVar3 != (EventHandler_1_Object___Fields *)0x0) {
        if (*(char *)&(this_01->fields)._._.m_target == '\0') {
          pNVar2 = (pEVar3->_)._.method_ptr;
          if (pNVar2 == (NotificationPopup *)0x0) goto code_?;
          e = (ScreenshotUploadedEventArgs *)StringLiteral_Action_failed_;
          sender = (Object *)StringLiteral_There_was_a_server_communication;
        }
        else {
          if ((this->fields).playingPurchaseSoundAfterScreenshot != 0) {
            (this->fields).playingPurchaseSoundAfterScreenshot = 0;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_0
            ;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)0x0) {
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?();
              }
              pAVar5 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)pAVar5,
                         MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_0_UnityEngine__EventSystems__IPurchaseSoundManager__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_0 =
                   callbackFunction;
              func_?();
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseSoundManager>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>_
                      );
          }
          pNVar2 = (pEVar3->_)._.method_ptr;
          if (pNVar2 == (NotificationPopup *)0x0) goto code_?;
          e = (ScreenshotUploadedEventArgs *)StringLiteral_Success_;
          sender = (Object *)(this->fields).currentActionSuccessMessage;
        }
        NotificationPopup::NotificationPopup_Initialize
                  (pNVar2,(String *)sender,(String *)e,(MethodInfo *)0x0);
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_00 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_1;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pAVar5 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
          callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)pAVar5,
                     MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_1 =
               callbackFunction_00;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                   (Object *)object,
                   MethodInfo__AvatarEditModeBodyController____c__DisplayClass43_0___MVNetworGame_ScreenshotUploadedHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,callbackFunction_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_02 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_3;
        if (callbackFunction_02 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
          if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pAVar5 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
          callbackFunction_02 =
               (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_02,
                     (Object *)pAVar5,
                     MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_3_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_3 =
               callbackFunction_02;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnActiveAvatarSetAfterPurchase() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnActiveAvatarSetAfterPurchase
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pMVar1->fields).OnActiveAvatarSet;
    this_00 = &(pMVar1->fields).OnActiveAvatarSet;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      *this_00 = (Action *)0x0;
code_?:
      func_?();
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      pGVar4 = pGVar3;
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pGVar3 = pGVar4;
        if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar3 = pGVar4;
        }
        pAVar5 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar5,
                   MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction_00 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1;
      if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar5 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
        callbackFunction_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?()
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                   (Object *)pAVar5,
                   MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1 = callbackFunction_00;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar2;
    }
    if (pAVar6 != (Action *)0x0) {
      *this_00 = pAVar6;
      pAVar6 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar2;
      }
      if (pAVar6 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnProductPurchaseAvatarResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnProductPurchaseAvatarResponse
               (AvatarEditModeBodyController *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MV__Common__MVPurchaseReturnCode);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___OnProductPurchaseAvatarResponse_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c__DisplayClass37_0___OnProductPurchaseAvatarResponse_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass37_0);
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    func_?(&StringLiteral_Avatar_purchase_response__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarEditModeBodyController____c__DisplayClass37_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    value[1].klass = (Object__Class *)returnCode;
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
      pCVar4 = (Component *)0x0;
code_?:
      func_?();
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (pCVar4,(MethodInfo *)0x0);
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AvatarEditModeBodyController____c);
      }
      callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarEditModeBodyController____c);
        }
        object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__AvatarEditModeBodyController____c___OnProductPurchaseAvatarResponse_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0 = callbackFunction;
        func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar5,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Avatar_purchase_response__,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar6,(MethodInfo *)0x0);
      if (value[1].klass == (Object__Class *)0x0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pWVar7 = (pMVar1->fields).worldNetwork, pWVar7 == (WorldNetwork *)0x0))
      goto code_?;
      pEVar8 = (pWVar7->fields)._.InitializedGameQueryData;
      this_01 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)pCVar4,
                 MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pEVar8,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pWVar7->fields)._.InitializedGameQueryData =
             (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
        pCVar4 = (Component *)0x0;
code_?:
        func_?();
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (pCVar4,(MethodInfo *)0x0);
        callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                   MethodInfo__AvatarEditModeBodyController____c__DisplayClass37_0___OnProductPurchaseAvatarResponse_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar5,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
      if (pEVar8 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
      (pWVar7->fields)._.InitializedGameQueryData = pEVar8;
      pCVar4 = (Component *)func_?();
      if (pCVar4 != (Component *)0x0) goto code_?;
      goto code_?;
    }
    pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             func_?();
    if (pAVar2 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
      pCVar4 = (Component *)func_?();
      if (pCVar4 == (Component *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPurchaseAvatarConfirmation(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnPurchaseAvatarConfirmation
               (AvatarEditModeBodyController *this,bool confirmed,
               ConfirmationPopup *confirmationPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___OnPurchaseAvatarConfirmation_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c__DisplayClass36_0___OnPurchaseAvatarConfirmation_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass36_0);
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pGVar2 = pGVar1;
  if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pGVar1 = pGVar2;
    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarEditModeBodyController____c);
      pGVar1 = pGVar2;
    }
    object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarEditModeBodyController____c___OnPurchaseAvatarConfirmation_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0 = callbackFunction;
    func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (confirmed == 0) {
    return;
  }
  method_00 = TypeInfo__AvatarEditModeBodyController____c__DisplayClass36_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).pleaseWaitPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar3 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (value == (Object *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    value[1].klass = pOVar3;
    func_?();
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
               MethodInfo__AvatarEditModeBodyController____c__DisplayClass36_0___OnPurchaseAvatarConfirmation_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    a = (pMVar4->fields).PurchaseProductResponseHandler;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      this_00[2].fields._.delegates = (Delegate__Array *)0x0;
code_?:
      func_?();
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pWVar6 = (pMVar4->fields).worldNetwork, pWVar6 == (WorldNetwork *)0x0))
      goto code_?;
      a_00 = (pWVar6->fields)._.InitializedGameQueryData;
      this_01 = (EventHandler_1_Object_ *)func_?();
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a_00,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        (this_01->fields)._._.method = (void *)0x0;
code_?:
        func_?();
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pAVar7 = (this->fields).purchasingItem;
        if ((pAVar7 != (AvatarRepositoryItem *)0x0) &&
           (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseAvatar
                    (this_02,(pAVar7->fields).itemID,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pvVar8 = (void *)func_?();
      if (pvVar8 == (void *)0x0) goto code_?;
      (this_01->fields)._._.method = pvVar8;
      iVar9 = func_?();
      if (iVar9 != 0) goto code_?;
      goto code_?;
    }
    pDVar10 = (Delegate__Array *)func_?();
    if (pDVar10 != (Delegate__Array *)0x0) {
      this_00[2].fields._.delegates = pDVar10;
      iVar9 = func_?();
      if (iVar9 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PurchaseAvatar(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_PurchaseAvatar
               (AvatarEditModeBodyController *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).purchasingItem;
  *ppAVar1 = item;
  func_?(ppAVar1,item);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void ResetCallback(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_ResetCallback
               (AvatarEditModeBodyController *this,Object *sender,
               InitializedGameQueryDataEventArgs *e,MethodInfo *method)

{
  _Stack_8.__klassIndex = -1;
  pcStack_1 = &DAT_?;
  pcStack_2 = (char *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pcStack_2;
  puStack_3 = &stack0xffffffbc;
  puVar4 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationState);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController___ResetCallback_b__27_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__set_Item_int__MVBody_);
    func_?(&TypeInfo__MVBody);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    cRam_? = '\x01';
    puVar4 = puStack_3;
  }
  puStack_3 = puVar4;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 == (MVNetworkGame *)0x0) ||
     (pWVar6 = (pMVar5->fields).worldNetwork, pWVar6 == (WorldNetwork *)0x0)) {
code_?:
    func_?();
    pAVar7 = extraout_ECX;
code_?:
    func_?(pAVar7);
    this_04 = extraout_EDX;
  }
  else {
    pEVar8 = (pWVar6->fields)._.InitializedGameQueryData;
    this_02 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = (MVBody__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pEVar8,(Delegate *)this_02,(MethodInfo *)0x0);
    if (unaff_ESI == (MVBody__Class *)0x0) {
      (pWVar6->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    }
    else {
      pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
      if (pEVar8 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        func_?();
        goto code_?;
      }
      (pWVar6->fields)._.InitializedGameQueryData = pEVar8;
      iVar9 = func_?();
      if (iVar9 == 0) goto code_?;
    }
    func_?();
    if ((e == (InitializedGameQueryDataEventArgs *)0x0) ||
       (pMVar10 = (e->fields).RootWO, pMVar10 == (MVWorldObjectClient *)0x0)) goto code_?;
    pMVar11 = (MVBody__Class *)(pMVar10->fields)._.id;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_ESI = pMVar11;
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_04 = (MVBody *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,(int32_t)pMVar11,(MethodInfo *)0x0);
    unaff_ESI = TypeInfo__MVBody;
    if (this_04 == (MVBody *)0x0) {
      this_04 = (MVBody *)0x0;
code_?:
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        unaff_ESI = (MVBody__Class *)(pMVar5->fields)._AvatarMetaDataWoMap_k__BackingField;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).bodies;
        if (((this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            && (RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_00,(this->fields).currentBodyIndex,
                                    MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                   ), RVar12 != (RegexCharClass_SingleRange)0x0)) &&
           (unaff_ESI != (MVBody__Class *)0x0)) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::
          MvAvatarMetaDataWoMap_ResetAvatar
                    ((MvAvatarMetaDataWoMap *)unaff_ESI,*(int32_t *)((int)RVar12 + 8),
                     (int32_t)pMVar11,(MethodInfo *)0x0);
          this_01 = (this->fields).bodies;
          if (this_01 != (List_1_MVBody_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__set_Item
                      ((List_1_System_Object_ *)this_01,(this->fields).currentBodyIndex,
                       (Object *)this_04,
                       MethodInfo__System__Collections__Generic__List<MVBody>__set_Item_int__MVBody_
                      );
            AvatarEditModeBodyController_SetCurrentBody
                      (this,(this->fields).currentBodyIndex,(MethodInfo *)0x0);
            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this
                       ,
                       MethodInfo__AvatarEditModeBodyController___ResetCallback_b__27_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar13,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                      );
            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__AvatarEditModeBodyController____c);
            }
            unaff_ESI = (MVBody__Class *)
                        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_1;
            if (unaff_ESI == (MVBody__Class *)0x0) {
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              pAVar14 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              unaff_ESI = (MVBody__Class *)
                          func_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                                         );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)unaff_ESI,(Object *)pAVar14,
                         MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_1 =
                   (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)unaff_ESI;
              func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_1
                              ,unaff_ESI);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar13,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)unaff_ESI,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                      );
            this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetActiveAvatar
                        (this_05,(int32_t)pMVar11,(MethodInfo *)0x0);
              pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              pEVar15 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_2;
              if (pEVar15 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?(TypeInfo__AvatarEditModeBodyController____c);
                }
                pAVar14 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                pEVar15 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                          func_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pEVar15,(Object *)pAVar14,
                           MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_2 = pEVar15;
                func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                 __9__27_2,pEVar15);
              }
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar13,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar15,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              unaff_ESI = (MVBody__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
              pMVar11 = unaff_ESI;
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              pEVar15 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_3;
              if (pEVar15 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                unaff_ESI = pMVar11;
                if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?(TypeInfo__AvatarEditModeBodyController____c);
                  unaff_ESI = pMVar11;
                }
                pAVar14 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                pEVar15 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                          func_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pEVar15,(Object *)pAVar14,
                           MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_3 = pEVar15;
                func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                 __9__27_3,pEVar15);
              }
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        ((GameObject *)unaff_ESI,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar15,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              if (this_04 != (MVBody *)0x0) {
                MVBody::MVBody_set_ShadowVisible(this_04,0,(MethodInfo *)0x0);
                this_06 = MVBody::MVBody_get_Animation(this_04,(MethodInfo *)0x0);
                if ((this_06 != (BoneAnimation *)0x0) &&
                   (this_07 = (Animation *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_GetComponent_1
                                        ((Component *)this_06,
                                         UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                        ), this_07 != (Animation *)0x0)) {
                  pIStack_16 = (Il2CppImage *)
                               UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                               Animation_GetEnumerator(this_07,(MethodInfo *)0x0);
                  unaff_ESI = (MVBody__Class *)&pIStack_16;
                  _Stack_8.__klassIndex = 1;
                  while (pIStack_16 != (Il2CppImage *)0x0) {
                    cVar17 = func_?(0,TypeInfo__System__Collections__IEnumerator);
                    pIVar18 = pIStack_16;
                    pIVar19 = TypeInfo__System__Collections__IEnumerator;
                    if (cVar17 == '\0') {
                      _Stack_8.__klassIndex = -1;
                      iVar9 = func_?(pIStack_16);
                      if (iVar9 != 0) {
                        func_?(0,TypeInfo__System__IDisposable);
                      }
                      *unaff_FS_OFFSET = pcStack_2;
                      return;
                    }
                    if (pIStack_16 == (Il2CppImage *)0x0) break;
                    pIVar20 = (IEnumerator__Class *)pIStack_16->name;
                    uVar21 = 0;
                    uVar22._0_1_ = (pIVar20->_1).rank;
                    uVar22._1_1_ = (pIVar20->_1).minimumAlignment;
                    if (uVar22 != 0) {
                      do {
                        if (pIVar20->interfaceOffsets[uVar21].interfaceType ==
                            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                          ppMVar23 = &(&(((IEnumerator__Class *)pIStack_16->name)->vtable).
                                        get_Current)[pIVar20->interfaceOffsets[uVar21].offset].method
                          ;
                          goto code_?;
                        }
                        uVar21 = uVar21 + 1;
                      } while (uVar21 < uVar22);
                    }
                    ppMVar23 = (MethodInfo **)
                               func_?(pIStack_16,TypeInfo__System__Collections__IEnumerator
                                              );
code_?:
                    pAVar7 = (AnimationState *)(*(code *)*ppMVar23)(pIVar18);
                    unaff_ESI = (MVBody__Class *)pIVar19;
                    if (pAVar7 == (AnimationState *)0x0) break;
                    unaff_ESI = (MVBody__Class *)pAVar7->klass;
                    pAVar24 = (AnimationState *)0x0;
                    if (unaff_ESI == (MVBody__Class *)TypeInfo__UnityEngine__AnimationState) {
                      pAVar24 = pAVar7;
                    }
                    if (pAVar24 == (AnimationState *)0x0) goto code_?;
                    pAVar24 = (AnimationState *)0x0;
                    if (unaff_ESI == (MVBody__Class *)TypeInfo__UnityEngine__AnimationState) {
                      pAVar24 = pAVar7;
                    }
                    UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_set_wrapMode(pAVar24,WrapMode__Enum_Loop,(MethodInfo *)0x0);
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar25 = (TypeInfo__MVBody->_1).naturalAligment;
    if ((bVar25 <= (this_04->klass->_1).naturalAligment) &&
       ((MVBody__Class *)(this_04->klass->_1).typeHierarchy[bVar25 - 1] == TypeInfo__MVBody))
    goto code_?;
  }
  func_?(this_04,unaff_ESI);
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void ResetCurrentBody() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_ResetCurrentBody
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarEditModeBodyController__ExecuteReset__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).resetAvatarHandler;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = pOVar2->klass;
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).bodies;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(this->fields).currentBodyIndex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__AvatarEditModeBodyController__ExecuteReset__,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__GameObject);
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        ppIVar5 = &(pOVar1->_0).interopData;
        *ppIVar5 = (Il2CppInteropData *)this_02;
        func_?(ppIVar5,this_02);
        ppIVar6 = &(pOVar1->_0).klass;
        *ppIVar6 = (Il2CppClass *)RVar4;
        func_?(ppIVar6,RVar4);
        pFVar7 = (pOVar1->_0).fields;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pFVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                    (pGVar3,(MethodInfo *)0x0);
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          pFVar7 = (FieldInfo *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar3,(MethodInfo *)0x0);
          ppFVar9 = &(pOVar1->_0).fields;
          *ppFVar9 = pFVar7;
          func_?(ppFVar9,pFVar7);
        }
        if (RVar4 != (RegexCharClass_SingleRange)0x0) {
          avatarWoID = *(int32_t *)((int)RVar4 + 8);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
            func_?(&
                            MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                           );
            cRam_? = '\x01';
          }
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          this_03 = (EventHandler_1_Object_ *)
                    func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (this_03,(Object *)pOVar1,
                     MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                     ,(MethodInfo *)0x0);
          if (pMVar10 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                      (pMVar10,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,
                       (MethodInfo *)0x0);
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar10 != (MVNetworkGame *)0x0) &&
               (this_01 = (pMVar10->fields).operationRequests,
               this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetResetAvatar
                        (this_01,avatarWoID,(MethodInfo *)0x0);
              return;
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


/* Void ScreenShotCallback(Texture2D, String) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_ScreenShotCallback
               (AvatarEditModeBodyController *this,Texture2D *screenshotTex,String *successMessage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarEditModeBodyController__UploadedImageData__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).currentActionSuccessMessage;
  *ppSVar1 = successMessage;
  func_?(ppSVar1,successMessage);
  pBVar2 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
           ImageConversion_EncodeToPNG(screenshotTex,(MethodInfo *)0x0);
  pBVar2 = MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_AddToArray
                     (pBVar2,(MethodInfo *)0x0);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__AvatarEditModeBodyController__UploadedImageData__,
             (MethodInfo *)0x0);
  DataUploadManager::DataUploadManager_UploadData(pBVar2,(UnityAction *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void SellCurrentAvatar(SellAvatarController) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SellCurrentAvatar
               (AvatarEditModeBodyController *this,SellAvatarController *avatarSeller,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).bodies;
  if ((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
     (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,(this->fields).currentBodyIndex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
     RVar3 != (RegexCharClass_SingleRange)0x0)) {
    woID = *(int32_t *)((int)RVar3 + 8);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      cRam_? = '\x01';
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (pAVar1->fields).bodies;
    if ((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar2,(pAVar1->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       pSVar4 = avatarSeller, avatarSeller != (SellAvatarController *)0x0)) {
      if (cRam_? == '\0') {
        this = (AvatarEditModeBodyController *)&StringLiteral_Update;
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this = (AvatarEditModeBodyController *)0x0;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar5->fields)._AvatarMetaDataWoMap_k__BackingField,
         this_00 != (MvAvatarMetaDataWoMap *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
                  (this_00,woID,(MvAvatarMetaData **)&this,(MethodInfo *)0x0);
        ppMVar6 = &(pSVar4->fields).body;
        *ppMVar6 = (MVBody *)RVar3;
        func_?(ppMVar6,RVar3);
        ppMVar7 = &(pSVar4->fields).metaData;
        *ppMVar7 = (MvAvatarMetaData *)this;
        func_?(ppMVar7,this);
        (pSVar4->fields).woID = woID;
        pTVar8 = (pSVar4->fields).sellButtonText;
        if (this != (AvatarEditModeBodyController *)0x0) {
          pSVar9 = StringLiteral_Sell;
          if (*(char *)&(this->fields).bodySpawnPoint != '\0') {
            pSVar9 = StringLiteral_Update;
          }
          pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
          if (pTVar8 != (Text *)0x0) {
            (*(code *)(pTVar8->klass->vtable).set_text.method)
                      (pTVar8,pSVar9,
                       (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            this_01 = (pSVar4->fields).removeButton;
            if ((((this_01 != (Button *)0x0) &&
                 (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                 this != (AvatarEditModeBodyController *)0x0)) && (this_03 != (GameObject *)0x0)) &&
               ((UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                           (this_03,*(bool *)&(this->fields).bodySpawnPoint,(MethodInfo *)0x0),
                this != (AvatarEditModeBodyController *)0x0 &&
                (this_02 = (pSVar4->fields).nameField, this_02 != (InputField *)0x0)))) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (this_02,(String *)(this->fields)._.m_CancellationTokenSource,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Set(String) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_Set
               (AvatarEditModeBodyController *this,String *animation,MethodInfo *method)

{
  pSVar1 = animation;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryAnimationHandler);
    func_?(&
                    ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).bodies;
  if (((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
      (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar2,(this->fields).currentBodyIndex,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
      RVar3 != (RegexCharClass_SingleRange)0x0)) &&
     (this_01 = MVBody::MVBody_get_Animation((MVBody *)RVar3,(MethodInfo *)0x0),
     this_01 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_Play(this_01,animation,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      animation = (String *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).bodies;
    if (((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
        (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar2,(this->fields).currentBodyIndex,
                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
        RVar3 != (RegexCharClass_SingleRange)0x0)) &&
       (*(GameObject **)((int)RVar3 + 0x88) != (GameObject *)0x0)) {
      pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (*(GameObject **)((int)RVar3 + 0x88),
                          ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                         );
      uVar5 = 0;
      if (pOVar4 != (Object__Array *)0x0) {
        ppOVar6 = pOVar4->vector;
        while( true ) {
          if ((int)pOVar4->max_length <= (int)uVar5) {
            return;
          }
          if (pOVar4->max_length <= uVar5) break;
          this_00 = (AccessoryAnimationHandler *)*ppOVar6;
          if (this_00 != (AccessoryAnimationHandler *)0x0) {
            bVar7 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
            pSVar1 = animation;
            if ((bVar7 <= (this_00->klass->_1).naturalAligment) &&
               ((this_00->klass->_1).typeHierarchy[bVar7 - 1] ==
                (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
              bVar7 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
              if (((this_00->klass->_1).naturalAligment < bVar7) ||
                 ((this_00->klass->_1).typeHierarchy[bVar7 - 1] !=
                  (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
                func_?(this_00,TypeInfo__AccessoryAnimationHandler);
                break;
              }
              AccessoryAnimationHandler::AccessoryAnimationHandler_SetAllAnimationToLooping
                        (this_00,(MethodInfo *)0x0);
            }
          }
          if (pOVar4->max_length <= uVar5) break;
          if (*ppOVar6 == (Object *)0x0) goto code_?;
          func_?(5,*ppOVar6,pSVar1);
          uVar5 = uVar5 + 1;
          ppOVar6 = ppOVar6 + 1;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetCurrentBody(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
               (AvatarEditModeBodyController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).bodies;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar1,(this->fields).currentBodyIndex,
                       MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (RVar2 != (RegexCharClass_SingleRange)0x0) {
      MVBody::MVBody_set_ShadowVisible((MVBody *)RVar2,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar1,(this->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if (RVar2 != (RegexCharClass_SingleRange)0x0) {
          MVBody::MVBody_set_Visible((MVBody *)RVar2,0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).bodies;
          if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar1,(this->fields).currentBodyIndex,
                               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                              );
            if (RVar2 != (RegexCharClass_SingleRange)0x0) {
              uVar3 = (this->fields).hidePos.x;
              uVar4 = (this->fields).hidePos.y;
              (**(code **)(*(int *)RVar2 + 400))(RVar2,uVar3,uVar4,(this->fields).hidePos.z);
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                               );
                cRam_? = '\x01';
              }
              pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).bodies;
              if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (pLVar1,(this->fields).currentBodyIndex,
                                   MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                  );
                this_00 = (this->fields).bodySpawnPoint;
                if (this_00 != (MVSpawnPointRed *)0x0) {
                  pQVar5 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                                     ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)this_00,
                                      (MethodInfo *)0x0);
                  if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                    MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                              ((MVWorldObjectClient *)RVar2,*pQVar5,(MethodInfo *)0x0);
                    bVar6 = cRam_? == '\0';
                    (this->fields).currentBodyIndex = index;
                    if (bVar6) {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).bodies;
                    if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (pLVar1,(this->fields).currentBodyIndex,
                                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                        );
                      if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                        uVar7 = (this->fields).displayPos.x;
                        uVar8 = (this->fields).displayPos.y;
                        (**(code **)(*(int *)RVar2 + 400))
                                  (RVar2,uVar7,uVar8,(this->fields).displayPos.z);
                        if (cRam_? == '\0') {
                          func_?(&
                                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                         );
                          cRam_? = '\x01';
                        }
                        pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)(this->fields).bodies;
                        if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) {
                          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                  RegularExpressions::RegexCharClass+SingleRange]::
                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                            (pLVar1,(this->fields).currentBodyIndex,
                                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                            );
                          if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                                      ((MVWorldObjectClient *)RVar2,(this->fields).displayRotation,
                                       (MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)(this->fields).bodies;
                            if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                           *)0x0) {
                              RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Text::RegularExpressions::RegexCharClass+SingleRange]::
                                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                (pLVar1,(this->fields).currentBodyIndex,
                                                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                );
                              if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                                MVBody::MVBody_set_Visible((MVBody *)RVar2,1,(MethodInfo *)0x0);
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)(this->fields).bodies;
                                if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                               *)0x0) {
                                  RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System
                                          ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                    (pLVar1,(this->fields).currentBodyIndex,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                  );
                                  if (RVar2 != (RegexCharClass_SingleRange)0x0) {
                                    t = *(Transform **)((int)RVar2 + 0x90);
                                    if ((TypeInfo__SharedCubeFunctions->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                              (t,1,(MethodInfo *)0x0);
                                    AvatarEditModeBodyController_SetPublishAvatarButtonActive
                                              (this,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetCurrentBodyByWoId(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetCurrentBodyByWoId
               (AvatarEditModeBodyController *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).bodies;
  while (pLVar1 != (List_1_MVBody_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).bodies;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       RVar2 == (RegexCharClass_SingleRange)0x0)) break;
    if (*(int *)((int)RVar2 + 8) == woId) {
      AvatarEditModeBodyController_SetCurrentBody(this,index,(MethodInfo *)0x0);
      AvatarSelectionController::AvatarSelectionController_set_CurrentlySelectedSlotIndex
                (index,(MethodInfo *)0x0);
      return;
    }
    index = index + 1;
    pLVar1 = (this->fields).bodies;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetPublishAvatarButtonActive() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetPublishAvatarButtonActive
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).publishAvatarBtn;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar3 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar3->fields)._AvatarMetaDataWoMap_k__BackingField;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).bodies;
    if (((this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
        (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_01,(this->fields).currentBodyIndex,
                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
        RVar4 != (RegexCharClass_SingleRange)0x0)) && (this_00 != (MvAvatarMetaDataWoMap *)0x0)) {
      pMVar5 = (MvAvatarMetaData *)&UNK_?;
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
                (this_00,*(int32_t *)((int)RVar4 + 8),(MvAvatarMetaData **)&stack0xfffffff8,
                 (MethodInfo *)0x0);
      if (pMVar5 != (MvAvatarMetaData *)0x0) {
        pGVar1 = (this->fields).publishAvatarBtn;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,(pMVar5->fields).canBeSoldOnMarketPlace,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetPublishAvatarGO(GameObject) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetPublishAvatarGO
               (AvatarEditModeBodyController *this,GameObject *publishAvatarGO,MethodInfo *method)

{
  ppGVar1 = &(this->fields).publishAvatarBtn;
  *ppGVar1 = publishAvatarGO;
  func_?(ppGVar1,publishAvatarGO);
  AvatarEditModeBodyController_SetPublishAvatarButtonActive(this,(MethodInfo *)0x0);
  return;
}


/* Void SetToNextAnimation() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetToNextAnimation
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    iVar2 = (this->fields).currentAnimationIndex;
    index = 0;
    if (iVar2 < (pLVar1->fields)._size + -1) {
      index = iVar2 + 1;
    }
    (this->fields).currentAnimationIndex = index;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).animations;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      animation = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            );
      AvatarEditModeBodyController_Set(this,(String *)animation,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TakeScreenshot() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_TakeScreenshot
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0 = callbackFunction;
    func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void UploadedImageData() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_UploadedImageData
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
              (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_01,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      puStack1 = (undefined *)0x0;
      System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
      Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)this_02,(MethodInfo *)0x1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializedPurchasedAvatar>b__38_1(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__InitializedPurchasedAvatar_b__38_1
               (AvatarEditModeBodyController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).bodies;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
              (this_00,(this->fields).currentBodyIndex,
               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (x != (IAvatarSetBodyGroup *)0x0) {
      func_?();
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <PurchaseAvatar>b__35_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__PurchaseAvatar_b__35_0
               (AvatarEditModeBodyController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarEditModeBodyController__OnPurchaseAvatarConfirmation_bool__ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Confirm);
    func_?(&StringLiteral_Purchase_Avatar_);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Purchase_Avatar_,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__OnPurchaseAvatarConfirmation_bool__ConfirmationPopup_
             ,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Confirm,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ResetCallback>b__27_0(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__ResetCallback_b__27_0
               (AvatarEditModeBodyController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).bodies;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
              (this_00,(this->fields).currentBodyIndex,
               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (x != (IAvatarSetBodyGroup *)0x0) {
      func_?();
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarEditModeBodyController() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController__ctor
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVBody>);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&StringLiteral_Dead);
    func_?(&StringLiteral_Jump);
    func_?(&StringLiteral_Walk);
    func_?(&StringLiteral_Idle);
    func_?(&StringLiteral_Swim);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVBody_ *)func_?(TypeInfo__System__Collections__Generic__List<MVBody>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVBody>__List__);
  ppLVar1 = &(this->fields).bodies;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  this_01 = (List_1_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (this_01 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Idle,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Jump,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Dead,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Swim,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Walk,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    ppLVar2 = &(this->fields).animations;
    *ppLVar2 = this_01;
    func_?(ppLVar2);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVBody get_CurrentBody() */

MVBody * Assembly-CSharp.dll::AvatarEditModeBodyController::
         AvatarEditModeBodyController_get_CurrentBody
                   (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).bodies;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).currentBodyIndex,
                       MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    return (MVBody *)RVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVBody *)(*pcVar3)();
  return pMVar4;
}

