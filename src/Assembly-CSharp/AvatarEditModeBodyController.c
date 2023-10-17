
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
  (this->fields).Picture2DTakenCallback = OnPictureTaken;
  func_?(&(this->fields).Picture2DTakenCallback,OnPictureTaken);
  pLVar1 = (this->fields).bodies;
  index = 0;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        cRam_? = '\x01';
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      this_00 = (this->fields).pictureTaker;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      avatar = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      OnPictureTaken_00 = (this->fields).Picture2DTakenCallback;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,index,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).bodies;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,(this->fields).currentBodyIndex,
                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
         this_00 == (AvatarPictureTakerUGUI *)0x0)) break;
      AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                (this_00,(MVWorldObjectClient *)avatar,index,OnPictureTaken_00,RVar3 == RVar4,
                 (MethodInfo *)0x0);
      pLVar1 = (this->fields).bodies;
      index = index + 1;
      if (pLVar1 == (List_1_MVBody_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pEVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pDVar4 == (Delegate *)0x0) {
          (pWVar2->fields)._.InitializedGameQueryData =
               (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
        }
        else {
          pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
          if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
          goto code_?;
          (pWVar2->fields)._.InitializedGameQueryData = pEVar3;
          iVar5 = func_?();
          if (iVar5 == 0) goto code_?;
        }
        func_?();
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
          cRam_? = '\x01';
        }
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).bodies;
        if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(this->fields).currentBodyIndex,
                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
          if ((RVar6 != (RegexCharClass_SingleRange)0x0) &&
             (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetAvatar
                      (this_02,*(int32_t *)((int)RVar6 + 8),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  }
  pAVar4 = (this->fields).pictureTaker;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar4 = (AvatarPictureTakerUGUI *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pAVar4,
                       AvatarPictureTakerUGUI_MethodInfo__UnityEngine__Object__Instantiate<AvatarPictureTakerUGUI>_AvatarPictureTakerUGUI_
                      );
  (this->fields).pictureTaker = pAVar4;
  func_?(&(this->fields).pictureTaker,pAVar4);
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pFVar6 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_0;
  if (pFVar6 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar7 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    pFVar6 = (Func_2_MVWorldObjectClient_Boolean_ *)func_?();
    if (pFVar6 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)pFVar6,(Object *)pAVar7,
               MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_0 = pFVar6;
    func_?();
  }
  if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
    pMVar8 = (MVSpawnPointRed *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                        (pMVar5,pFVar6,(MethodInfo *)0x0);
    if (pMVar8 == (MVSpawnPointRed *)0x0) {
      (this->fields).bodySpawnPoint = (MVSpawnPointRed *)0x0;
    }
    else if (((((pMVar8->klass->_1).typeHierarchyDepth <
                (TypeInfo__MVSpawnPointRed->_1).typeHierarchyDepth) ||
              ((MVSpawnPointRed__Class *)
               (pMVar8->klass->_1).typeHierarchy
               [(TypeInfo__MVSpawnPointRed->_1).typeHierarchyDepth - 1] != TypeInfo__MVSpawnPointRed
              )) || ((this->fields).bodySpawnPoint = pMVar8,
                    (pMVar8->klass->_1).typeHierarchyDepth <
                    (TypeInfo__MVSpawnPointRed->_1).typeHierarchyDepth)) ||
            ((MVSpawnPointRed__Class *)
             (pMVar8->klass->_1).typeHierarchy
             [(TypeInfo__MVSpawnPointRed->_1).typeHierarchyDepth - 1] != TypeInfo__MVSpawnPointRed))
    {
      func_?();
      goto code_?;
    }
    func_?();
    pMVar8 = (this->fields).bodySpawnPoint;
    if (pMVar8 != (MVSpawnPointRed *)0x0) {
      puVar9 = (undefined8 *)(*(pMVar8->klass->vtable).get_WorldPosition_1.methodPtr)();
      fVar10 = *(float *)(puVar9 + 1);
      fVar11 = (float)*puVar9;
      fVar12 = (float)((ulonglong)*puVar9 >> 0x20);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar14 = (pVVar13->upVector).x;
      uVar15 = (pVVar13->upVector).y;
      fVar16 = (pVVar13->upVector).z;
      pMVar8 = (this->fields).bodySpawnPoint;
      (this->fields).displayPos.x = fVar11 - (float)uVar14;
      (this->fields).displayPos.y = fVar12 - (float)uVar15;
      (this->fields).displayPos.z = fVar10 - fVar16;
      if (pMVar8 != (MVSpawnPointRed *)0x0) {
        puVar9 = (undefined8 *)(*(pMVar8->klass->vtable).get_WorldPosition_1.methodPtr)();
        uVar17 = *puVar9;
        fVar10 = *(float *)(puVar9 + 1);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar18 = (pVVar13->upVector).x;
        uVar19 = (pVVar13->upVector).y;
        fVar11 = (pVVar13->upVector).z * _UNK_?;
        fVar12 = (float)uVar19 * _UNK_?;
        fStack_20 = (float)((ulonglong)uVar17 >> 0x20);
        fStack_21 = (float)uVar17;
        (this->fields).hidePos.x = fStack_21 - (float)uVar18 * _UNK_?;
        (this->fields).hidePos.y = fStack_20 - fVar12;
        (this->fields).hidePos.z = fVar10 - fVar11;
        pMVar8 = (this->fields).bodySpawnPoint;
        if (pMVar8 != (MVSpawnPointRed *)0x0) {
          pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                              ((Quaternion *)&stack0xffffffa4,(MVWorldObjectClient *)pMVar8,
                               (MethodInfo *)0x0);
          fVar10 = pQVar22->y;
          fVar11 = pQVar22->z;
          fVar12 = pQVar22->w;
          pMVar8 = (this->fields).bodySpawnPoint;
          (this->fields).displayRotation.x = pQVar22->x;
          (this->fields).displayRotation.y = fVar10;
          (this->fields).displayRotation.z = fVar11;
          (this->fields).displayRotation.w = fVar12;
          if ((pMVar8 != (MVSpawnPointRed *)0x0) &&
             (this_00 = (pMVar8->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,0,(MethodInfo *)0x0);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pFVar6 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_1;
            if (pFVar6 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?();
              }
              pAVar7 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              pFVar6 = (Func_2_MVWorldObjectClient_Boolean_ *)func_?();
              if (pFVar6 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) goto code_?;
              mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                        ((Func_2_Object_Boolean_ *)pFVar6,(Object *)pAVar7,
                         MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_1_MVWorldObjectClient_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_1 = pFVar6;
              func_?();
            }
            if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
              source = MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWorldObjectClientsWhere
                                 (pMVar5,pFVar6,(MethodInfo *)0x0);
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?();
              }
              this_04 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_2;
              if (this_04 == (Func_2_MVWorldObjectClient_Int32_ *)0x0) {
                if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?(TypeInfo__AvatarEditModeBodyController____c);
                }
                pAVar7 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                this_04 = (Func_2_MVWorldObjectClient_Int32_ *)
                          func_?(TypeInfo__System__Func<MVWorldObjectClient,_int>);
                if (this_04 == (Func_2_MVWorldObjectClient_Int32_ *)0x0) goto code_?;
                mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System
                ::Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                          ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_04,
                           (Object *)pAVar7,
                           MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_2_MVWorldObjectClient_
                           ,(MethodInfo *)0x0);
                TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_2 = this_04;
                func_?();
              }
              pIVar23 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                                  ((IEnumerable_1_System_Object_ *)source,
                                   (Func_2_Object_Single_ *)this_04,
                                   System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_int>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_int>_
                                  );
              if (pIVar23 != (IOrderedEnumerable_1_System_Object_ *)0x0) {
                piVar24 = (int *)func_?();
                uStack_1._0_1_ = 1;
                uStack_1._1_3_ = 0;
                while (piVar24 != (int *)0x0) {
                  cVar25 = func_?();
                  if (cVar25 == '\0') {
                    uStack_1 = 0xffffffff;
                    if (piVar24 != (int *)0x0) {
                      func_?();
                    }
                    uStack_1._0_1_ = 0xff;
                    uStack_1._1_3_ = 0xffffff;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pLVar26 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (this->fields).bodies;
                    if ((pLVar26 !=
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                       && (RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                    ::RegularExpressions::RegexCharClass+SingleRange]::
                                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                              (pLVar26,(this->fields).currentBodyIndex,
                                               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                              ), RVar27 != (RegexCharClass_SingleRange)0x0)) {
                      (**(code **)(*(int *)RVar27 + 0x194))();
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      pLVar26 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )(this->fields).bodies;
                      if ((pLVar26 !=
                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                         && (RVar27 = mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Text::RegularExpressions::RegexCharClass+SingleRange]::
                                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                (pLVar26,(this->fields).currentBodyIndex,
                                                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                ), RVar27 != (RegexCharClass_SingleRange)0x0)) {
                        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                                  ((MVWorldObjectClient *)RVar27,(this->fields).displayRotation,
                                   (MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        pLVar26 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)(this->fields).bodies;
                        if ((pLVar26 !=
                             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) && (RVar27 = mscorlib.dll::System::Collections::Generic::
                                               List`1[System::Text::RegularExpressions::
                                               RegexCharClass+SingleRange]::
                                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                         (pLVar26,(this->fields).currentBodyIndex,
                                                                                                                    
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                  ), RVar27 != (RegexCharClass_SingleRange)0x0)) {
                          MVBody::MVBody_set_Visible((MVBody *)RVar27,1,(MethodInfo *)0x0);
                          pIVar28 = System.Core.dll::System::Linq::Enumerable::Enumerable_Skip
                                              ((IEnumerable_1_System_Object_ *)(this->fields).bodies
                                               ,1,
                                               System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                                              );
                          if (pIVar28 != (IEnumerable_1_System_Object_ *)0x0) {
                            piVar24 = (int *)func_?();
                            uStack_1._1_3_ = 0;
                            uStack_1._0_1_ = 7;
                            goto code_?;
                          }
                        }
                      }
                    }
                    break;
                  }
                  if (piVar24 == (int *)0x0) break;
                  iVar29 = *piVar24;
                  uVar30 = 0;
                  if (*(ushort *)(iVar29 + 0xb2) != 0) {
                    do {
                      if (*(IEnumerator_1_MVWorldObjectClient___Class **)
                           (*(int *)(iVar29 + 0x58) + (uint)uVar30 * 8) ==
                          TypeInfo__System__Collections__Generic__IEnumerator<MVWorldObjectClient>)
                      {
                        puVar31 = (undefined4 *)
                                  (*(int *)(*(int *)(iVar29 + 0x58) + 4 + (uint)uVar30 * 8) * 8 +
                                   0xbc + iVar29);
                        goto code_?;
                      }
                      uVar30 = uVar30 + 1;
                    } while (uVar30 < *(ushort *)(iVar29 + 0xb2));
                  }
                  puVar31 = (undefined4 *)func_?();
code_?:
                  pMVar32 = (MVBody *)(*(code *)*puVar31)();
                  if (pMVar32 == (MVBody *)0x0) break;
                  if (((pMVar32->klass->_1).typeHierarchyDepth <
                       (TypeInfo__MVBody->_1).typeHierarchyDepth) ||
                     ((MVBody__Class *)
                      (pMVar32->klass->_1).typeHierarchy
                      [(TypeInfo__MVBody->_1).typeHierarchyDepth - 1] != TypeInfo__MVBody)) {
                    bVar33 = false;
                  }
                  else {
                    bVar33 = true;
                  }
                  this_08 = (MVBody *)0x0;
                  if (bVar33) {
                    this_08 = pMVar32;
                  }
                  if (this_08 == (MVBody *)0x0) break;
                  MVBody::MVBody_set_ShadowVisible(this_08,0,(MethodInfo *)0x0);
                  MVBody::MVBody_set_Visible(this_08,0,(MethodInfo *)0x0);
                  this_05 = MVBody::MVBody_get_Animation(this_08,(MethodInfo *)0x0);
                  if ((this_05 == (BoneAnimation *)0x0) ||
                     (this_06 = (Animation *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)this_05,
                                           UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                          ), this_06 == (Animation *)0x0)) break;
                  pIVar34 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                            Animation_GetEnumerator(this_06,(MethodInfo *)0x0);
                  uStack_1._0_1_ = 3;
                  while( true ) {
                    if (pIVar34 == (IEnumerator *)0x0) goto code_?;
                    cVar25 = func_?();
                    if (cVar25 == '\0') break;
                    if ((pIVar34 == (IEnumerator *)0x0) ||
                       (pAVar35 = (AnimationState *)func_?(),
                       pAVar35 == (AnimationState *)0x0)) goto code_?;
                    pAVar36 = (AnimationState *)0x0;
                    if (pAVar35->klass == TypeInfo__UnityEngine__AnimationState) {
                      pAVar36 = pAVar35;
                    }
                    if (pAVar36 == (AnimationState *)0x0) goto code_?;
                    pAVar36 = (AnimationState *)0x0;
                    if (pAVar35->klass == TypeInfo__UnityEngine__AnimationState) {
                      pAVar36 = pAVar35;
                    }
                    UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_set_wrapMode(pAVar36,WrapMode__Enum_Loop,(MethodInfo *)0x0);
                  }
                  uStack_1._0_1_ = 1;
                  func_?();
                  uStack_1._0_1_ = 1;
                  this_01 = (this->fields).bodies;
                  if (this_01 == (List_1_MVBody_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)this_01,(Object *)this_08,
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
  uVar37 = func_?();
  func_?(uVar37);
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
code_?:
  if (piVar24 == (int *)0x0) goto code_?;
  cVar25 = func_?();
  if (cVar25 == '\0') {
    uStack_1 = 0xffffffff;
    if (piVar24 != (int *)0x0) {
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
      pCVar39 = (CloudyThemeBase *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
      if (pCVar39 == (CloudyThemeBase *)0x0) {
        TypeInfo__AvatarEditModeBodyController->static_fields->Theme = (CloudyThemeBase *)0x0;
      }
      else {
        if (((pCVar39->klass->_1).typeHierarchyDepth <
             (TypeInfo__CloudyThemeBase->_1).typeHierarchyDepth) ||
           ((pCVar39->klass->_1).typeHierarchy
            [(TypeInfo__CloudyThemeBase->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__CloudyThemeBase)) {
          bVar33 = false;
        }
        else {
          bVar33 = true;
        }
        pCVar40 = (CloudyThemeBase *)0x0;
        if (bVar33) {
          pCVar40 = pCVar39;
        }
        TypeInfo__AvatarEditModeBodyController->static_fields->Theme = pCVar40;
      }
      func_?();
      pCVar39 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
      if (pCVar39 != (CloudyThemeBase *)0x0) {
        Theme::Theme_InitializeForPreview((Theme *)pCVar39,(MethodInfo *)0x0);
        pCVar39 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
        if ((pCVar39 != (CloudyThemeBase *)0x0) &&
           (this_03 = (pCVar39->fields)._._Settings_k__BackingField,
           this_03 != (SettingsWrapper *)0x0)) {
          ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_03,(MethodInfo *)0x0);
          pCVar39 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
          if (pCVar39 != (CloudyThemeBase *)0x0) {
            Theme::Theme_Activate((Theme *)pCVar39,(MethodInfo *)0x0);
            pCVar39 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
            if ((pCVar39 != (CloudyThemeBase *)0x0) &&
               (pTVar41 = (pCVar39->fields).skybox, pTVar41 != (ThemeSkybox *)0x0)) {
              ThemeSkybox::ThemeSkybox_set_SunLightIntensity(pTVar41,0.3,(MethodInfo *)0x0);
              pCVar39 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
              if ((pCVar39 != (CloudyThemeBase *)0x0) &&
                 (pTVar41 = (pCVar39->fields).skybox, pTVar41 != (ThemeSkybox *)0x0)) {
                ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar41,(MethodInfo *)0x0);
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
  if (piVar24 == (int *)0x0) goto code_?;
  iVar29 = *piVar24;
  uVar30 = 0;
  if (*(ushort *)(iVar29 + 0xb2) != 0) {
    do {
      if (*(IEnumerator_1_MVBody___Class **)(*(int *)(iVar29 + 0x58) + (uint)uVar30 * 8) ==
          TypeInfo__System__Collections__Generic__IEnumerator<MVBody>) {
        puVar31 = (undefined4 *)
                  (*(int *)(*(int *)(iVar29 + 0x58) + 4 + (uint)uVar30 * 8) * 8 + 0xbc + iVar29);
        goto code_?;
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 < *(ushort *)(iVar29 + 0xb2));
  }
  puVar31 = (undefined4 *)func_?();
code_?:
  this_07 = (MVWorldObjectClient *)(*(code *)*puVar31)();
  if (this_07 == (MVWorldObjectClient *)0x0) goto code_?;
  uVar17._0_4_ = (this->fields).hidePos.x;
  uVar17._4_4_ = (this->fields).hidePos.y;
  (*(this_07->klass->vtable).set_WorldPosition.methodPtr)(this_07,uVar17);
  pMVar8 = (this->fields).bodySpawnPoint;
  if (pMVar8 == (MVSpawnPointRed *)0x0) goto code_?;
  pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xffffffa4,(MVWorldObjectClient *)pMVar8,
                       (MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_07,*pQVar22,(MethodInfo *)0x0);
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
     (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 == (WorldNetwork *)0x0)) goto code_?;
  pEVar6 = (pWVar5->fields)._.InitializedGameQueryData;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  if (this_00 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
             ,(MethodInfo *)0x0);
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pEVar6,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar7 == (Delegate *)0x0) {
    (pWVar5->fields)._.InitializedGameQueryData =
         (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
    func_?();
    pSVar8 = StringLiteral_Purchased_avatar_has_been_added_;
    if (e != (InitializedGameQueryDataEventArgs *)0x0) {
      if ((e->fields).RootWO == (MVWorldObjectClient *)0x0) {
code_?:
        *unaff_FS_OFFSET = pAStack_3;
        return;
      }
      pMVar9 = (e->fields).RootWO;
      str1 = (String *)(*(pMVar9->klass->vtable).ToString.methodPtr)(pMVar9);
      pSVar8 = mscorlib.dll::System::String::String_Concat_3(pSVar8,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar8,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pMVar9 = (e->fields).RootWO;
      if ((pMVar9 != (MVWorldObjectClient *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0))
      {
        pMVar10 = (MVBody *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,(pMVar9->fields)._.id,(MethodInfo *)0x0);
        if (pMVar10 != (MVBody *)0x0) {
          if (((pMVar10->klass->_1).typeHierarchyDepth < (TypeInfo__MVBody->_1).typeHierarchyDepth)
             || ((MVBody__Class *)
                 (pMVar10->klass->_1).typeHierarchy[(TypeInfo__MVBody->_1).typeHierarchyDepth - 1]
                 != TypeInfo__MVBody)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          this_06 = (MVBody *)0x0;
          if (bVar11) {
            this_06 = pMVar10;
          }
          if (this_06 != (MVBody *)0x0) {
            pMVar10 = this_06;
            MVBody::MVBody_set_ShadowVisible(this_06,0,(MethodInfo *)0x0);
            MVBody::MVBody_set_Visible(this_06,0,(MethodInfo *)0x0);
            this_02 = MVBody::MVBody_get_Animation(this_06,(MethodInfo *)0x0);
            if (this_02 != (BoneAnimation *)0x0) {
              this_03 = (Animation *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)this_02,
                                   UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                  );
              if (this_03 != (Animation *)0x0) {
                pIVar12 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                          Animation_GetEnumerator(this_03,(MethodInfo *)0x0);
                uStack_1 = 1;
                while (pIVar12 != (IEnumerator *)0x0) {
                  cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator);
                  if (cVar13 == '\0') {
                    uStack_1 = 0xffffffff;
                    iVar14 = func_?(pIVar12);
                    if (iVar14 != 0) {
                      func_?(0,TypeInfo__System__IDisposable);
                    }
                    uStack_1 = 0xffffffff;
                    pLVar15 = (this->fields).bodies;
                    if (pLVar15 == (List_1_MVBody_ *)0x0) break;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLVar15,(Object *)pMVar10,
                               MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_);
                    pLVar15 = (this->fields).bodies;
                    if (pLVar15 == (List_1_MVBody_ *)0x0) break;
                    iVar14 = (pLVar15->fields)._size + -1;
                    AvatarEditModeBodyController_GenerateIconForBody(this,iVar14,(MethodInfo *)0x0);
                    AvatarEditModeBodyController_SetCurrentBody(this,iVar14,(MethodInfo *)0x0);
                    AvatarSelectionController::
                    AvatarSelectionController_set_CurrentlySelectedSlotIndex
                              (iVar14,(MethodInfo *)0x0);
                    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar4 == (MVNetworkGame *)0x0) break;
                    pAStack_3 = TypeInfo__System__Action;
                    pAVar16 = (pMVar4->fields).OnActiveAvatarSet;
                    this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                    if (this_04 == (NavMesh_OnNavMeshPreUpdate *)0x0) break;
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_04,(Object *)this,
                               MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__
                               ,(MethodInfo *)0x0);
                    pAVar16 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar16,(Delegate *)this_04,(MethodInfo *)0x0);
                    if (pAVar16 == (Action *)0x0) {
                      (pMVar4->fields).OnActiveAvatarSet = (Action *)0x0;
                    }
                    else {
                      pAVar17 = (Action *)0x0;
                      if (pAVar16->klass == TypeInfo__System__Action) {
                        pAVar17 = pAVar16;
                      }
                      if (pAVar17 == (Action *)0x0) goto code_?;
                      (pMVar4->fields).OnActiveAvatarSet = pAVar17;
                      pAVar17 = (Action *)0x0;
                      if (pAVar16->klass == TypeInfo__System__Action) {
                        pAVar17 = pAVar16;
                      }
                      if (pAVar17 == (Action *)0x0) goto code_?;
                    }
                    func_?();
                    pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?();
                    }
                    callbackFunction =
                         TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__38_0;
                    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0
                       ) {
                      if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                      callbackFunction =
                           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
                      if (callbackFunction ==
                          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) break;
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                                 (Object *)object,
                                 MethodInfo__AvatarEditModeBodyController____c___InitializedPurchasedAvatar_b__38_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__38_0 =
                           callbackFunction;
                      func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                       __9__38_0);
                    }
                    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar18,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                              );
                    pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    callbackFunction_00 =
                         (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                    if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
                    {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                                 (Object *)this,
                                 MethodInfo__AvatarEditModeBodyController___InitializedPurchasedAvatar_b__38_1_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy
                                (pGVar18,(BaseEventData *)0x0,callbackFunction_00,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                                );
                      this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                          ((MethodInfo *)0x0);
                      pMVar9 = (e->fields).RootWO;
                      if ((pMVar9 != (MVWorldObjectClient *)0x0) &&
                         (this_05 != (MVNetworkGame_OperationRequests *)0x0)) {
                        MVNetworkGame+OperationRequests::
                        MVNetworkGame_OperationRequests_SetActiveAvatar
                                  (this_05,(pMVar9->fields)._.id,(MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                    break;
                  }
                  if (pIVar12 == (IEnumerator *)0x0) break;
                  uVar19 = 0;
                  uVar20 = (pIVar12->klass->_1).interface_offsets_count;
                  if (uVar20 != 0) {
                    do {
                      if (pIVar12->klass->interfaceOffsets[uVar19].interfaceType ==
                          (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                        pVVar21 = &(pIVar12->klass->vtable).get_Current +
                                  pIVar12->klass->interfaceOffsets[uVar19].offset;
                        goto code_?;
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 < uVar20);
                  }
                  pVVar21 = (VirtualInvokeData *)
                            func_?(pIVar12,TypeInfo__System__Collections__IEnumerator);
code_?:
                  pAVar22 = (AnimationState *)(*pVVar21->methodPtr)(pIVar12);
                  if (pAVar22 == (AnimationState *)0x0) break;
                  pAVar23 = (AnimationState *)0x0;
                  if (pAVar22->klass == TypeInfo__UnityEngine__AnimationState) {
                    pAVar23 = pAVar22;
                  }
                  if (pAVar23 == (AnimationState *)0x0) goto code_?;
                  pAVar23 = (AnimationState *)0x0;
                  if (pAVar22->klass == TypeInfo__UnityEngine__AnimationState) {
                    pAVar23 = pAVar22;
                  }
                  UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                  AnimationState_set_wrapMode(pAVar23,WrapMode__Enum_Loop,(MethodInfo *)0x0);
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
      (pWVar5->fields)._.InitializedGameQueryData = pEVar6;
      iVar14 = func_?();
      if (iVar14 != 0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pAVar22 = extraout_ECX;
code_?:
  func_?(pAVar22);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
  value = (Object *)func_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass43_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    if ((this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
                   ,(MethodInfo *)0x0), this_00 != (MVNetworkGame *)0x0)) {
      MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
                (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_01,(MethodInfo *)0x0);
      original = (this->fields).notificationPopup;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar1 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                         );
      value[1].klass = pOVar1;
      func_?(value + 1,pOVar1);
      if (e != (ScreenshotUploadedEventArgs *)0x0) {
        if ((e->fields).Uploaded == 0) {
          pOVar1 = value[1].klass;
          text = StringLiteral_There_was_a_server_communication;
          header = StringLiteral_Action_failed_;
          if (pOVar1 == (Object__Class *)0x0) goto code_?;
        }
        else {
          if ((this->fields).playingPurchaseSoundAfterScreenshot != 0) {
            (this->fields).playingPurchaseSoundAfterScreenshot = 0;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__AvatarEditModeBodyController____c);
            }
            callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_0
            ;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)0x0) {
              if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0)
              {
                func_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              pAVar3 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>
                                  );
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)0x0)
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)pAVar3,
                         MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_0_UnityEngine__EventSystems__IPurchaseSoundManager__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_0 =
                   callbackFunction;
              func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_0
                              ,callbackFunction);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar2,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseSoundManager>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>_
                      );
          }
          pOVar1 = value[1].klass;
          if (pOVar1 == (Object__Class *)0x0) goto code_?;
          text = (this->fields).currentActionSuccessMessage;
          header = StringLiteral_Success_;
        }
        NotificationPopup::NotificationPopup_Initialize
                  ((NotificationPopup *)pOVar1,text,header,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarEditModeBodyController____c);
        }
        callbackFunction_00 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_1;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__AvatarEditModeBodyController____c);
          }
          pAVar3 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)pAVar3,
                     MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_1 =
               callbackFunction_00;
          func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_1,
                          callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)callbackFunction_00,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_01 =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        if (callbackFunction_01 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,value,
                     MethodInfo__AvatarEditModeBodyController____c__DisplayClass43_0___MVNetworGame_ScreenshotUploadedHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,callbackFunction_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction_02 =
               TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_3;
          if (callbackFunction_02 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
            if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pAVar3 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
            callbackFunction_02 =
                 (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)func_?();
            if (callbackFunction_02 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_02,
                       (Object *)pAVar3,
                       MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_3_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_3 =
                 callbackFunction_02;
            func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_3,
                            callbackFunction_02);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                    );
          return;
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
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnActiveAvatarSet;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pMVar1->fields).OnActiveAvatarSet = (Action *)0x0;
      }
      else {
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) goto code_?;
        (pMVar1->fields).OnActiveAvatarSet = pAVar3;
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) goto code_?;
      }
      func_?();
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)&UNK_?,(MethodInfo *)0x0);
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar5 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar5,
                   MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0 = callbackFunction;
        func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)&UNK_?,(MethodInfo *)0x0);
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction_00 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1;
      if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
code_?:
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar5 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                   (Object *)pAVar5,
                   MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1 = callbackFunction_00;
        func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1,
                        callbackFunction_00);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  value = (Object *)func_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass37_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)returnCode;
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
        mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          (pMVar1->fields).PurchaseProductResponseHandler =
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
        }
        else {
          pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)func_?();
          if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)0x0) goto code_?;
          (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
          iVar4 = func_?();
          if (iVar4 == 0) goto code_?;
        }
        func_?();
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
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
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__AvatarEditModeBodyController____c___OnProductPurchaseAvatarResponse_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0 = callbackFunction;
          func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0,
                          callbackFunction);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar5,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pSVar6 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xffffffe8,(MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Avatar_purchase_response__,pSVar6,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        if (value[1].klass == (Object__Class *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pWVar7 = (pMVar1->fields).worldNetwork, pWVar7 != (WorldNetwork *)0x0)) {
          pEVar8 = (pWVar7->fields)._.InitializedGameQueryData;
          this_01 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(
                                   TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                   );
          if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                       ,(MethodInfo *)0x0);
            pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pEVar8,(Delegate *)this_01,(MethodInfo *)0x0);
            if (pDVar3 == (Delegate *)0x0) {
              (pWVar7->fields)._.InitializedGameQueryData =
                   (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
            }
            else {
              pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
              if (pEVar8 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
              goto code_?;
              (pWVar7->fields)._.InitializedGameQueryData = pEVar8;
              iVar4 = func_?();
              if (iVar4 == 0) goto code_?;
            }
            func_?();
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                         MethodInfo__AvatarEditModeBodyController____c__DisplayClass37_0___OnProductPurchaseAvatarResponse_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar5,(BaseEventData *)0x0,callbackFunction_00,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                        );
              return;
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
  if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0;
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
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AvatarEditModeBodyController____c___OnPurchaseAvatarConfirmation_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0 = callbackFunction;
      func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0,
                      callbackFunction);
      goto code_?;
    }
code_?:
    func_?();
  }
  else {
code_?:
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
    value = (Object *)func_?();
    if (value == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EBX);
    original = (this->fields).pleaseWaitPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                       );
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction_00 =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
    goto code_?;
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
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    pAVar4 = (pMVar3->fields).PurchaseProductResponseHandler;
    this_00 = (Action_2_Int32Enum_Object_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    if (this_00 == (Action_2_Int32Enum_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pMVar3->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)func_?();
      if (pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) goto code_?;
      (pMVar3->fields).PurchaseProductResponseHandler = pAVar4;
      iVar6 = func_?();
      if (iVar6 == 0) goto code_?;
    }
    func_?();
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 == (MVNetworkGame *)0x0) ||
       (pWVar7 = (pMVar3->fields).worldNetwork, pWVar7 == (WorldNetwork *)0x0))
    goto code_?;
    pEVar8 = (pWVar7->fields)._.InitializedGameQueryData;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pEVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pWVar7->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
      func_?();
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pAVar9 = (this->fields).purchasingItem;
      if ((pAVar9 != (AvatarRepositoryItem *)0x0) &&
         (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseAvatar
                  (this_02,(pAVar9->fields).itemID,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
    if (pEVar8 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      (pWVar7->fields)._.InitializedGameQueryData = pEVar8;
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  (this->fields).purchasingItem = item;
  func_?(&(this->fields).purchasingItem,item);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                      );
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetCallback(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_ResetCallback
               (AvatarEditModeBodyController *this,Object *sender,
               InitializedGameQueryDataEventArgs *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (unaff_EDI = (MVBody__Class *)(pMVar4->fields).worldNetwork, unaff_EDI != (MVBody__Class *)0x0)
     ) {
    pDVar5 = *(Delegate **)&(unaff_EDI->_0).byval_arg.attrs;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar5,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        (unaff_EDI->_0).byval_arg.attrs = 0;
        (unaff_EDI->_0).byval_arg.type = 0;
        (unaff_EDI->_0).byval_arg.field_0x7 = 0;
code_?:
        func_?();
        if ((e != (InitializedGameQueryDataEventArgs *)0x0) &&
           (pMVar6 = (e->fields).RootWO, pMVar6 != (MVWorldObjectClient *)0x0)) {
          id = (pMVar6->fields)._.id;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_03 != (MVWorldObjectClientManager *)0x0) {
            this_04 = (MVBody *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_03,id,(MethodInfo *)0x0);
            unaff_EDI = TypeInfo__MVBody;
            if (this_04 == (MVBody *)0x0) {
              this_04 = (MVBody *)0x0;
            }
            else if (((this_04->klass->_1).typeHierarchyDepth <
                      (TypeInfo__MVBody->_1).typeHierarchyDepth) ||
                    ((MVBody__Class *)
                     (this_04->klass->_1).typeHierarchy
                     [(TypeInfo__MVBody->_1).typeHierarchyDepth - 1] != TypeInfo__MVBody))
            goto code_?;
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              unaff_EDI = (MVBody__Class *)(pMVar4->fields)._AvatarMetaDataWoMap_k__BackingField;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields).bodies;
              if (((this_00 !=
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
                  (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (this_00,(this->fields).currentBodyIndex,
                                      MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                     ), RVar7 != (RegexCharClass_SingleRange)0x0)) &&
                 (unaff_EDI != (MVBody__Class *)0x0)) {
                MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::
                MvAvatarMetaDataWoMap_ResetAvatar
                          ((MvAvatarMetaDataWoMap *)unaff_EDI,*(int32_t *)((int)RVar7 + 8),id,
                           (MethodInfo *)0x0);
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
                  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  callbackFunction =
                       (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
                  unaff_EDI = (MVBody__Class *)0x0;
                  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                               (Object *)this,
                               MethodInfo__AvatarEditModeBodyController___ResetCallback_b__27_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar8,(BaseEventData *)0x0,callbackFunction,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                              );
                    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?(TypeInfo__AvatarEditModeBodyController____c);
                    }
                    unaff_EDI = (MVBody__Class *)
                                TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                __9__27_1;
                    if (unaff_EDI == (MVBody__Class *)0x0) {
                      if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__AvatarEditModeBodyController____c);
                      }
                      pAVar9 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                      unaff_EDI = (MVBody__Class *)
                                  func_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                                                 );
                      if (unaff_EDI == (MVBody__Class *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)unaff_EDI,
                                 (Object *)pAVar9,
                                 MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_1 =
                           (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)unaff_EDI;
                      func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                       __9__27_1);
                    }
                    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar8,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)unaff_EDI,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                              );
                    this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                        ((MethodInfo *)0x0);
                    if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_SetActiveAvatar(this_05,id,(MethodInfo *)0x0);
                      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                      if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__AvatarEditModeBodyController____c);
                      }
                      pEVar10 = TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                __9__27_2;
                      if (pEVar10 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                        if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__AvatarEditModeBodyController____c);
                        }
                        pAVar9 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                        pEVar10 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                                  func_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                 );
                        unaff_EDI = (MVBody__Class *)0x0;
                        if (pEVar10 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
                        goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  ((UnityAction_2_System_Object_System_Object_ *)pEVar10,
                                   (Object *)pAVar9,
                                   MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_2 =
                             pEVar10;
                        func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields
                                         ->__9__27_2);
                      }
                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy
                                (pGVar8,(BaseEventData *)0x0,
                                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar10,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                );
                      root = (MVBody__Class *)
                             UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                      pMVar11 = root;
                      if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__AvatarEditModeBodyController____c);
                      }
                      pEVar10 = TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                __9__27_3;
                      if (pEVar10 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                        root = pMVar11;
                        if ((TypeInfo__AvatarEditModeBodyController____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__AvatarEditModeBodyController____c);
                          root = pMVar11;
                        }
                        unaff_EDI = (MVBody__Class *)
                                    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                        pEVar10 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                                  func_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                 );
                        if (pEVar10 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
                        goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  ((UnityAction_2_System_Object_System_Object_ *)pEVar10,
                                   (Object *)unaff_EDI,
                                   MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_3 =
                             pEVar10;
                        func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields
                                         ->__9__27_3);
                      }
                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy
                                ((GameObject *)root,(BaseEventData *)0x0,
                                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar10,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                );
                      unaff_EDI = root;
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
                          pIVar12 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                                    Animation_GetEnumerator(this_07,(MethodInfo *)0x0);
                          uStack_1 = 1;
                          while (unaff_EDI = root, pIVar12 != (IEnumerator *)0x0) {
                            cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator);
                            pIVar14 = TypeInfo__System__Collections__IEnumerator;
                            if (cVar13 == '\0') {
                              uStack_1 = 0xffffffff;
                              iVar15 = func_?(pIVar12);
                              if (iVar15 != 0) {
                                func_?(0,TypeInfo__System__IDisposable);
                              }
                              *unaff_FS_OFFSET = uStack_3;
                              return;
                            }
                            if (pIVar12 == (IEnumerator *)0x0) break;
                            uVar16 = 0;
                            uVar17 = (pIVar12->klass->_1).interface_offsets_count;
                            if (uVar17 != 0) {
                              do {
                                if (pIVar12->klass->interfaceOffsets[uVar16].interfaceType ==
                                    (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                                  pVVar18 = &(pIVar12->klass->vtable).get_Current +
                                            pIVar12->klass->interfaceOffsets[uVar16].offset;
                                  goto code_?;
                                }
                                uVar16 = uVar16 + 1;
                              } while (uVar16 < uVar17);
                            }
                            pVVar18 = (VirtualInvokeData *)
                                      func_?(pIVar12,
                                                  TypeInfo__System__Collections__IEnumerator);
code_?:
                            pAVar19 = (AnimationState *)(*pVVar18->methodPtr)(pIVar12);
                            unaff_EDI = (MVBody__Class *)pIVar14;
                            if (pAVar19 == (AnimationState *)0x0) break;
                            pAVar20 = (AnimationState *)0x0;
                            if (pAVar19->klass == TypeInfo__UnityEngine__AnimationState) {
                              pAVar20 = pAVar19;
                            }
                            if (pAVar20 == (AnimationState *)0x0) goto code_?;
                            pAVar20 = (AnimationState *)0x0;
                            if (pAVar19->klass == TypeInfo__UnityEngine__AnimationState) {
                              pAVar20 = pAVar19;
                            }
                            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                            AnimationState_set_wrapMode
                                      (pAVar20,WrapMode__Enum_Loop,(MethodInfo *)0x0);
                            root = (MVBody__Class *)pIVar14;
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
      else {
        iVar15 = func_?();
        if (iVar15 != 0) {
          (unaff_EDI->_0).byval_arg.attrs = (short)iVar15;
          (unaff_EDI->_0).byval_arg.type = (char)((uint)iVar15 >> 0x10);
          (unaff_EDI->_0).byval_arg.field_0x7 = (char)((uint)iVar15 >> 0x18);
          iVar15 = func_?();
          if (iVar15 != 0) goto code_?;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pAVar19 = extraout_ECX;
code_?:
  func_?(pAVar19);
  this_04 = extraout_EDX;
code_?:
  func_?(this_04,unaff_EDI);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  value = (Object *)func_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).resetAvatarHandler;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar1 = value[1].klass;
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        cRam_? = '\x01';
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).bodies;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,(this->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__AvatarEditModeBodyController__ExecuteReset__
                     ,(MethodInfo *)0x0);
          if (pOVar1 != (Object__Class *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__GameObject);
              func_?(&TypeInfo__UnityEngine__Object);
              cRam_? = '\x01';
            }
            (pOVar1->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)this_02;
            func_?(&(pOVar1->_0).typeMetadataHandle,this_02);
            (pOVar1->_0).interopData = (Il2CppInteropData *)RVar3;
            func_?(&(pOVar1->_0).interopData,RVar3);
            pIVar4 = (pOVar1->_0).klass;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pIVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pGVar2 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
              if (pGVar2 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                        (pGVar2,(MethodInfo *)0x0);
              pIVar4 = (Il2CppClass *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar2,(MethodInfo *)0x0);
              (pOVar1->_0).klass = pIVar4;
              func_?(&(pOVar1->_0).klass,pIVar4);
            }
            if (RVar3 != (RegexCharClass_SingleRange)0x0) {
              avatarWoID = *(int32_t *)((int)RVar3 + 8);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
                func_?(&
                                MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                               );
                cRam_? = '\x01';
              }
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              this_03 = (UnityAction_2_System_Object_System_Object_ *)
                        func_?(
                                       TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>
                                       );
              if (this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (this_03,(Object *)pOVar1,
                           MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                           ,(MethodInfo *)0x0);
                if (pMVar6 != (MVNetworkGame *)0x0) {
                  MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                            (pMVar6,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,
                             (MethodInfo *)0x0);
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar6 != (MVNetworkGame *)0x0) &&
                     (this_01 = (pMVar6->fields).operationRequests,
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
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  (this->fields).currentActionSuccessMessage = successMessage;
  func_?(&(this->fields).currentActionSuccessMessage,successMessage);
  pBVar1 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
           ImageConversion_EncodeToPNG(screenshotTex,(MethodInfo *)0x0);
  pBVar1 = MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_AddToArray
                     (pBVar1,(MethodInfo *)0x0);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__AvatarEditModeBodyController__UploadedImageData__,
               (MethodInfo *)0x0);
    DataUploadManager::DataUploadManager_UploadData(pBVar1,(UnityAction *)this_00,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
        (pSVar4->fields).body = (MVBody *)RVar3;
        func_?(&(pSVar4->fields).body,RVar3);
        (pSVar4->fields).metaData = (MvAvatarMetaData *)this;
        func_?(&(pSVar4->fields).metaData,this);
        (pSVar4->fields).woID = woID;
        pTVar6 = (pSVar4->fields).sellButtonText;
        if (this != (AvatarEditModeBodyController *)0x0) {
          pSVar7 = StringLiteral_Sell;
          if (*(char *)&(this->fields).displayPos.x != '\0') {
            pSVar7 = StringLiteral_Update;
          }
          pSVar7 = TM::TM__(pSVar7,(MethodInfo *)0x0);
          if (pTVar6 != (Text *)0x0) {
            (*(pTVar6->klass->vtable).set_text.methodPtr)
                      (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method);
            this_01 = (pSVar4->fields).removeButton;
            if ((((this_01 != (Button *)0x0) &&
                 (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                 this != (AvatarEditModeBodyController *)0x0)) && (this_03 != (GameObject *)0x0)) &&
               ((UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                           (this_03,*(bool *)&(this->fields).displayPos.x,(MethodInfo *)0x0),
                this != (AvatarEditModeBodyController *)0x0 &&
                (this_02 = (pSVar4->fields).nameField, this_02 != (InputField *)0x0)))) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (this_02,(String *)(this->fields).bodies,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
     (this_00 = MVBody::MVBody_get_Animation((MVBody *)RVar3,(MethodInfo *)0x0),
     this_00 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_Play(this_00,animation,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      animation = (String *)&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_;
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
       (*(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ **)((int)RVar3 + 0x88) !=
        (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0)) {
      pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         (*(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ **)((int)RVar3 + 0x88),
                          ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                         );
      pMVar5 = (MonitorData *)0x0;
      if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
        pIVar6 = pIVar4 + 2;
        while( true ) {
          pAVar7 = TypeInfo__AccessoryAnimationHandler;
          if ((int)pIVar4[1].monitor <= (int)pMVar5) {
            return;
          }
          if (pIVar4[1].monitor <= pMVar5) break;
          if (((pIVar6->klass != (IEnumerable_1_System_Object___Class *)0x0) &&
              (pIVar8 = (pIVar6->klass->_0).image, pSVar1 = animation,
              (TypeInfo__AccessoryAnimationHandler->_1).typeHierarchyDepth <=
              *(byte *)&pIVar8[4].nameNoExt)) &&
             (*(AccessoryAnimationHandler__Class **)
               ((pIVar8[2].typeCount - 4) +
               (uint)(TypeInfo__AccessoryAnimationHandler->_1).typeHierarchyDepth * 4) ==
              TypeInfo__AccessoryAnimationHandler)) {
            pIVar9 = pIVar6->klass;
            iVar10 = func_?(pIVar9,TypeInfo__AccessoryAnimationHandler,pIVar9);
            if ((iVar10 == 0) ||
               (this_01 = (AccessoryAnimationHandler *)func_?(pIVar6->klass,pAVar7),
               this_01 == (AccessoryAnimationHandler *)0x0)) {
              func_?(pIVar9,pAVar7);
              break;
            }
            AccessoryAnimationHandler::AccessoryAnimationHandler_SetAllAnimationToLooping
                      (this_01,(MethodInfo *)0x0);
          }
          if (pIVar4[1].monitor <= pMVar5) break;
          if (pIVar6->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
          func_?(5,pIVar6->klass,pSVar1);
          pMVar5 = pMVar5 + 1;
          pIVar6 = (IEnumerable_1_System_Object_ *)&pIVar6->monitor;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
              (**(code **)(*(int *)RVar2 + 0x194))(RVar2,uVar3,uVar4,(this->fields).hidePos.z);
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
                        (**(code **)(*(int *)RVar2 + 0x194))
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
  (this->fields).publishAvatarBtn = publishAvatarGO;
  func_?(&(this->fields).publishAvatarBtn,publishAvatarGO);
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
    if ((this->fields).currentAnimationIndex < (pLVar1->fields)._size + -1) {
      index = (this->fields).currentAnimationIndex + 1;
    }
    else {
      index = 0;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
                (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_01,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        puStack1 = (undefined *)0x0;
        System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
        Single,System::Object]::
        SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_get_IsSynchronized
                  ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)this_02,
                   (MethodInfo *)0x1);
        return;
      }
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
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__OnPurchaseAvatarConfirmation_bool__ConfirmationPopup_
               ,(MethodInfo *)0x0);
    TM::TM__(StringLiteral_Confirm,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(3);
      return;
    }
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
  if (this_00 != (List_1_MVBody_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVBody>__List__);
    (this->fields).bodies = this_00;
    func_?(&(this->fields).bodies,this_00);
    this_01 = (List_1_System_String_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    if (this_01 != (List_1_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<System::String>__List__);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Idle,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Jump,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Dead,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Swim,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)StringLiteral_Walk,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      (this->fields).animations = this_01;
      ppLStack1 = &(this->fields).animations;
      pLStack2 = this_01;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
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

