
/* Void CaptureScreenshotForBody(Int32, Action`2[Int32,UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_CaptureScreenshotForBody
               (AvatarEditModeBodyController *this,int32_t index,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  this_00 = (this->fields).pictureTaker;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar3 = (pLVar1->fields)._items;
    if (pMVar3 != (MVBody__Array *)0x0) {
      if ((uint)pMVar3->max_length <= (uint)index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this_00 != (AvatarPictureTakerUGUI *)0x0) {
        AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                  (this_00,(MVWorldObjectClient *)pMVar3->vector[index],index,OnPictureTaken,0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CaptureScreenshotsForAllAvatars(Action`2[Int32,UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_CaptureScreenshotsForAllAvatars
               (AvatarEditModeBodyController *this,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).Picture2DTakenCallback = OnPictureTaken;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Picture2DTakenCallback >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pLVar6 = (this->fields).bodies;
  index = 0;
  while( true ) {
    if (pLVar6 == (List_1_MVBody_ *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pLVar6->fields)._size <= index) break;
    AvatarEditModeBodyController_GenerateIconForBody(this,index,(MethodInfo *)0x0);
    pLVar6 = (this->fields).bodies;
    index = index + 1;
  }
  return;
}


/* Void ExecuteReset() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_ExecuteReset
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) {
    pEVar4 = (pWVar3->fields)._.InitializedGameQueryData;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    uVar5 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pEVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (pDVar6 == (Delegate *)0x0) {
      (pWVar3->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                FUN_?(pDVar6,
                              TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (pEVar4 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        FUN_?(pDVar6,pEVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pWVar3->fields)._.InitializedGameQueryData = pEVar4;
      pEVar7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      lVar9 = FUN_?();
      if (lVar9 == 0) {
        FUN_?(pDVar6,pEVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&(pWVar3->fields)._.InitializedGameQueryData >> 0xc);
      uVar5 = (ulonglong)(uVar10 & 0x3f);
      puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << uVar5;
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      pMVar14 = (pMVar2->fields).operationRequests;
      pMVar15 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
      if ((pMVar15 != (MVBody *)0x0) &&
         (iVar16 = (pMVar15->fields)._._._._.id, pMVar14 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Reset_ActiveAvatar__called);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Reset_ActiveAvatar__called,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aiStackX_18[0] = iVar16;
        value = (Object *)FUN_?(uRam_?,aiStackX_18);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar17 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x81);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x81,value,(InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
                     method_00);
          pPVar18 = (pMVar14->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar18 != (PhotonPeer *)0x0) {
            (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                      (pPVar18,CONCAT71((int7)((ulonglong)uVar17 >> 8),0x2b),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar18->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  this_00 = (this->fields).pictureTaker;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar3 = (pLVar1->fields)._items;
    if (pMVar3 != (MVBody__Array *)0x0) {
      if ((uint)index < (uint)pMVar3->max_length) {
        avatar = pMVar3->vector[index];
        OnPictureTaken = (this->fields).Picture2DTakenCallback;
        pMVar3 = (pLVar1->fields)._items;
        if ((uint)index < (uint)pMVar3->max_length) {
          pMVar4 = pMVar3->vector[index];
          pMVar5 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
          if (this_00 != (AvatarPictureTakerUGUI *)0x0) {
            AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                      (this_00,(MVWorldObjectClient *)avatar,index,OnPictureTaken,pMVar4 == pMVar5,
                       (MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_Initialize
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CloudyThemeBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_int>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVWorldObjectClient,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointRed);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPictureTakerUGUI_MethodInfo__UnityEngine__Object__Instantiate<AvatarPictureTakerUGUI>_AvatarPictureTakerUGUI_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_1_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_2_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Normal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVSpawnPointRed *)0x0;
  pIStackX_18 = (IEnumerator *)0x0;
  auStack_2[0] = 0;
  pMStackX_20 = (MVSpawnPointRed *)0x0;
  pAVar3 = (this->fields).pictureTaker;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar3 = (AvatarPictureTakerUGUI *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pAVar3,
                       AvatarPictureTakerUGUI_MethodInfo__UnityEngine__Object__Instantiate<AvatarPictureTakerUGUI>_AvatarPictureTakerUGUI_
                      );
  (this->fields).pictureTaker = pAVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).pictureTaker >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    in_R8 = (MVSpawnPointRed *)(ulonglong)(uVar4 & 0x3f);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (longlong)in_R8;
      }
      UNLOCK();
    } while (!bVar8);
  }
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  pFVar10 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_0;
  if (pFVar10 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    pAVar11 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    pFVar10 = (Func_2_MVWorldObjectClient_Boolean_ *)
              FUN_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    in_R8 = (MVSpawnPointRed *)
            MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_0_MVWorldObjectClient_;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)pFVar10,(Object *)pAVar11,
               MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_0 = pFVar10;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_0 >> 0xc)
      ;
      in_R8 = (MVSpawnPointRed *)(ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)((longlong)in_R8 * 8 + 0xADDR);
        puVar7 = (ulonglong *)((longlong)in_R8 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar5 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
    in_R8 = (MVSpawnPointRed *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                      (pMVar9,pFVar10,(MethodInfo *)0x0);
    if (in_R8 == (MVSpawnPointRed *)0x0) {
      (this->fields).bodySpawnPoint = (MVSpawnPointRed *)0x0;
    }
    else {
      bVar12 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
      if (((in_R8->klass->_1).naturalAligment < bVar12) ||
         ((MVSpawnPointRed__Class *)(in_R8->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
          TypeInfo__MVSpawnPointRed)) {
        FUN_?(in_R8);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      (this->fields).bodySpawnPoint = in_R8;
      bVar12 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
      if (((in_R8->klass->_1).naturalAligment < bVar12) ||
         ((MVSpawnPointRed__Class *)(in_R8->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
          TypeInfo__MVSpawnPointRed)) {
        FUN_?(in_R8);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).bodySpawnPoint >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      in_R8 = (MVSpawnPointRed *)(ulonglong)(uVar4 & 0x3f);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar8);
    }
    pMVar14 = (this->fields).bodySpawnPoint;
    if (pMVar14 != (MVSpawnPointRed *)0x0) {
      in_R8 = (MVSpawnPointRed *)(pMVar14->klass->vtable).get_WorldPosition_1.method;
      puVar15 = (undefined8 *)
                (*(pMVar14->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_16,pMVar14,in_R8);
      uStack_17 = (MVBody *)*puVar15;
      fVar18 = *(float *)(puVar15 + 1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_16._0_4_ = (pVVar19->upVector).x;
      auStack_16._4_4_ = (pVVar19->upVector).y;
      fVar20 = (pVVar19->upVector).z;
      (this->fields).displayPos.x = (float)uStack_17 - (float)auStack_16._0_4_;
      (this->fields).displayPos.y = uStack_17._4_4_ - (float)auStack_16._4_4_;
      (this->fields).displayPos.z = fVar18 - fVar20;
      pMVar14 = (this->fields).bodySpawnPoint;
      if (pMVar14 != (MVSpawnPointRed *)0x0) {
        pMVar21 = pMVar14->klass;
        in_R8 = (MVSpawnPointRed *)(pMVar21->vtable).get_WorldPosition_1.method;
        puVar15 = (undefined8 *)(*(pMVar21->vtable).get_WorldPosition_1.methodPtr)(auStack_16);
        uStack_17 = (MVBody *)*puVar15;
        fVar18 = *(float *)(puVar15 + 1);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
        auStack_16._0_4_ = (pVVar19->upVector).x;
        auStack_16._4_4_ = (pVVar19->upVector).y;
        fVar22 = (float)auStack_16._4_4_ * _UNK_?;
        fVar20 = (pVVar19->upVector).z * _UNK_?;
        (this->fields).hidePos.x = (float)uStack_17 - (float)auStack_16._0_4_ * _UNK_?;
        (this->fields).hidePos.y = uStack_17._4_4_ - fVar22;
        (this->fields).hidePos.z = fVar18 - fVar20;
        pMVar14 = (this->fields).bodySpawnPoint;
        if (pMVar14 != (MVSpawnPointRed *)0x0) {
          in_R8 = (MVSpawnPointRed *)0x0;
          pQVar23 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                              (aQStack_24,(MVWorldObjectClient *)pMVar14,(MethodInfo *)0x0);
          fVar18 = pQVar23->y;
          fVar20 = pQVar23->z;
          fVar22 = pQVar23->w;
          (this->fields).displayRotation.x = pQVar23->x;
          (this->fields).displayRotation.y = fVar18;
          (this->fields).displayRotation.z = fVar20;
          (this->fields).displayRotation.w = fVar22;
          pMVar14 = (this->fields).bodySpawnPoint;
          if ((pMVar14 != (MVSpawnPointRed *)0x0) &&
             (this_00 = (pMVar14->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
            in_R8 = (MVSpawnPointRed *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,0,(MethodInfo *)0x0);
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AvatarEditModeBodyController____c);
            }
            pFVar10 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_1;
            if (pFVar10 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
              if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              pAVar11 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              pFVar10 = (Func_2_MVWorldObjectClient_Boolean_ *)
                        FUN_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
              mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                        ((Predicate_1_Object_ *)pFVar10,(Object *)pAVar11,
                         MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_1_MVWorldObjectClient_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_1 = pFVar10;
              in_R8 = (MVSpawnPointRed *)
                      &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_1;
              if (iRam_? != 0) {
                uVar4 = (uint)((ulonglong)in_R8 >> 0xc);
                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                in_R8 = (MVSpawnPointRed *)(ulonglong)(uVar4 & 0x3f);
                do {
                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                  LOCK();
                  bVar8 = uVar6 == *puVar7;
                  if (bVar8) {
                    *puVar7 = uVar6 | 1L << (longlong)in_R8;
                  }
                  UNLOCK();
                } while (!bVar8);
              }
            }
            if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)(pMVar9->fields).worldObjects;
              if (this_01 !=
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
                source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                         UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                         Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                   (this_01,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                   );
                source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                                      ((IEnumerable_1_System_Object_ *)source,
                                       (Func_2_Object_Boolean_ *)pFVar10,
                                       System__Collections__Generic__IEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__Where<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_bool>_
                                      );
                if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                }
                this_05 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_2;
                if (this_05 == (Func_2_MVWorldObjectClient_Int32_ *)0x0) {
                  if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                  }
                  pAVar11 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                  this_05 = (Func_2_MVWorldObjectClient_Int32_ *)
                            FUN_?(TypeInfo__System__Func<MVWorldObjectClient,_int>);
                  mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                            ((Func_2_Object_Int32Enum_ *)this_05,(Object *)pAVar11,
                             MethodInfo__AvatarEditModeBodyController____c___Initialize_b__23_2_MVWorldObjectClient_
                             ,(MethodInfo *)0x0);
                  TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__23_2 = this_05;
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)
                                    &TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                     __9__23_2 >> 0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar8 = uVar6 == *puVar7;
                      if (bVar8) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar8);
                  }
                }
                in_R8 = (MVSpawnPointRed *)
                        System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_int>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_int>_
                ;
                pIVar25 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                                    (source_00,(Func_2_Object_Int32_ *)this_05,
                                     System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_int>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_int>_
                                    );
                if (pIVar25 != (IOrderedEnumerable_1_System_Object_ *)0x0) {
                  pMStack_26 = (MVSpawnPointRed *)
                               FUN_?(0,
                                             TypeInfo__System__Collections__Generic__IEnumerable<MVWorldObjectClient>
                                             ,pIVar25);
                  auStack_16._0_4_ = 0.0;
                  auStack_16._4_4_ = 0.0;
                  auStack_16._8_8_ = &pMStack_26;
code_?:
                  if (pMStack_26 != (MVSpawnPointRed *)0x0) {
                    in_R8 = pMStack_26;
                    cVar27 = FUN_?(0);
                    pMVar14 = pMStack_26;
                    if (cVar27 != '\0') {
                      if (pMStack_26 != (MVSpawnPointRed *)0x0) {
                        pMVar21 = pMStack_26->klass;
                        uVar5 = 0;
                        uVar28._0_1_ = (pMVar21->_1).rank;
                        uVar28._1_1_ = (pMVar21->_1).minimumAlignment;
                        if (uVar28 != 0) {
                          do {
                            if (pMVar21->interfaceOffsets[uVar5].interfaceType ==
                                (Il2CppClass *)
                                TypeInfo__System__Collections__Generic__IEnumerator<MVWorldObjectClient>
                               ) {
                              pVVar29 = &(pMVar21->vtable).Equals +
                                        pMVar21->interfaceOffsets[uVar5].offset;
                              goto code_?;
                            }
                            uVar30 = (short)uVar5 + 1;
                            uVar5 = (ulonglong)uVar30;
                          } while (uVar30 < uVar28);
                        }
                        pVVar29 = (VirtualInvokeData *)
                                  FUN_?(pMStack_26,
                                                TypeInfo__System__Collections__Generic__IEnumerator<MVWorldObjectClient>
                                                ,0);
code_?:
                        pMVar31 = (MVBody *)(*pVVar29->methodPtr)(pMVar14,pVVar29->method);
                        if (pMVar31 != (MVBody *)0x0) {
                          bVar12 = (TypeInfo__MVBody->_1).naturalAligment;
                          if ((bVar12 <= (pMVar31->klass->_1).naturalAligment) &&
                             ((MVBody__Class *)
                              (pMVar31->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] ==
                              TypeInfo__MVBody)) {
                            if ((pMVar31->fields).forceHidden == 0) {
                              if ((pMVar31->fields).shadowVisible != 0) {
                                (pMVar31->fields).shadowVisible = 0;
                                MVBody::MVBody_UpdateVisibility(pMVar31,(MethodInfo *)0x0);
                              }
                              if (((pMVar31->fields).forceHidden == 0) &&
                                 ((pMVar31->fields).visible != 0)) {
                                (pMVar31->fields).visible = 0;
                                MVBody::MVBody_UpdateVisibility(pMVar31,(MethodInfo *)0x0);
                              }
                            }
                            pMVar32 = (pMVar31->fields).bodyObject;
                            if (pMVar32 != (MVBodyObject *)0x0) {
                              this_02 = (pMVar32->fields).boneAnimation;
                              if (this_02 != (BoneAnimation *)0x0) {
                                this_06 = (Animation *)
                                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_GetComponent_1
                                                    ((Component *)this_02,
                                                                                                          
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                                  );
                                if (this_06 != (Animation *)0x0) {
                                  pIStackX_18 = UnityEngine.AnimationModule.dll::UnityEngine::
                                                Animation::Animation_GetEnumerator
                                                          (this_06,(MethodInfo *)0x0);
                                  auStack_33._0_4_ = 0.0;
                                  auStack_33._4_4_ = 0.0;
                                  ppIStack_34 = &pIStackX_18;
                                  puStack_35 = auStack_2;
                                  uStack_17 = pMVar31;
                                  while( true ) {
                                    if (pIStackX_18 == (IEnumerator *)0x0)
                                    goto code_?;
                                    cVar27 = FUN_?(0,
                                                  TypeInfo__System__Collections__IEnumerator);
                                    if (cVar27 == '\0') break;
                                    if (pIStackX_18 == (IEnumerator *)0x0)
                                    goto code_?;
                                    in_R8 = (MVSpawnPointRed *)
                                            FUN_?(1,
                                                  TypeInfo__System__Collections__IEnumerator);
                                    if (in_R8 == (MVSpawnPointRed *)0x0) goto code_?;
                                    pMVar14 = pMVar1;
                                    if (in_R8->klass ==
                                        (MVSpawnPointRed__Class *)
                                        TypeInfo__UnityEngine__AnimationState) {
                                      pMVar14 = in_R8;
                                    }
                                    if (pMVar14 == (MVSpawnPointRed *)0x0)
                                    goto code_?;
                                    pMVar14 = pMVar1;
                                    if (in_R8->klass ==
                                        (MVSpawnPointRed__Class *)
                                        TypeInfo__UnityEngine__AnimationState) {
                                      pMVar14 = in_R8;
                                    }
                                    UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                                    AnimationState_set_wrapMode
                                              ((AnimationState *)pMVar14,WrapMode__Enum_Loop,
                                               (MethodInfo *)0x0);
                                  }
                                  FUN_?(&ppIStack_34);
                                  pLVar36 = (this->fields).bodies;
                                  if (pLVar36 != (List_1_MVBody_ *)0x0) goto code_?;
                                  goto code_?;
                                }
                                goto code_?;
                              }
                              goto code_?;
                            }
                            goto code_?;
                          }
                        }
                        goto code_?;
                      }
                      goto code_?;
                    }
                    if (pMStack_26 != (MVSpawnPointRed *)0x0) {
                      in_R8 = pMStack_26;
                      FUN_?(0,TypeInfo__System__IDisposable,pMStack_26);
                    }
                    pMVar31 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
                    if (pMVar31 != (MVBody *)0x0) {
                      uStack_17 = *(MVBody **)&(this->fields).displayPos;
                      fStack_37 = (this->fields).displayPos.z;
                      in_R8 = (MVSpawnPointRed *)(pMVar31->klass->vtable).set_WorldPosition.method;
                      (*(pMVar31->klass->vtable).set_WorldPosition.methodPtr)(pMVar31);
                      pMVar31 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0)
                      ;
                      if (pMVar31 != (MVBody *)0x0) {
                        auStack_16._0_4_ = (this->fields).displayRotation.x;
                        auStack_16._4_4_ = (this->fields).displayRotation.y;
                        auStack_16._8_8_ = *(undefined8 *)&(this->fields).displayRotation.z;
                        in_R8 = (MVSpawnPointRed *)0x0;
                        MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                                  ((MVWorldObjectClient *)pMVar31,(Quaternion *)auStack_16,
                                   (MethodInfo *)0x0);
                        pMVar31 = AvatarEditModeBodyController_get_CurrentBody
                                            (this,(MethodInfo *)0x0);
                        if (pMVar31 != (MVBody *)0x0) {
                          if (((pMVar31->fields).forceHidden == 0) &&
                             ((pMVar31->fields).visible != 1)) {
                            (pMVar31->fields).visible = 1;
                            MVBody::MVBody_UpdateVisibility(pMVar31,(MethodInfo *)0x0);
                          }
                          pMVar38 = 
                          System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                          ;
                          pLVar36 = (this->fields).bodies;
                          if ((
                              System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                            FUN_?(
                                         System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                                         );
                          }
                          if (pLVar36 == (List_1_MVBody_ *)0x0) {
                            s = (String *)func_?(&StringLiteral_source);
                            pEVar39 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                                                (s,(MethodInfo *)0x0);
                            FUN_?(pEVar39,pMVar38);
                            pcVar13 = (code *)swi(3);
                            (*pcVar13)();
                            return;
                          }
                          pMVar38 = (pMVar38->field7_0x38).rgctx_data[1].method;
                          if ((pMVar38->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                            FUN_?(pMVar38);
                          }
                          if ((*(byte *)((longlong)
                                         ((pMVar38->field7_0x38).rgctx_data)->rgctxDataDummy + 0x135
                                        ) & 1) == 0) {
                            FUN_?(((pMVar38->field7_0x38).rgctx_data)->rgctxDataDummy);
                          }
                          lVar40 = FUN_?();
                          *(undefined4 *)(lVar40 + 0x10) = 0xfffffffe;
                          iVar41 = mscorlib.dll::System::Environment::
                                   Environment_get_CurrentManagedThreadId((MethodInfo *)0x0);
                          *(int32_t *)(lVar40 + 0x20) = iVar41;
                          *(List_1_MVBody_ **)(lVar40 + 0x30) = pLVar36;
                          if (iRam_? != 0) {
                            uVar4 = (uint)(lVar40 + 0x30U >> 0xc);
                            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                            do {
                              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                              LOCK();
                              bVar8 = uVar6 == *puVar7;
                              if (bVar8) {
                                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar8);
                          }
                          *(undefined4 *)(lVar40 + 0x3c) = 1;
                          pMStackX_20 = (MVSpawnPointRed *)
                                        FUN_?(0,
                                                  TypeInfo__System__Collections__Generic__IEnumerable<MVBody>
                                                  ,lVar40);
                          auStack_16._0_4_ = 0.0;
                          auStack_16._4_4_ = 0.0;
                          auStack_16._8_8_ = &pMStackX_20;
                          while( true ) {
                            if (pMStackX_20 == (MVSpawnPointRed *)0x0) goto code_?;
                            in_R8 = pMStackX_20;
                            cVar27 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
                            pMVar14 = pMStackX_20;
                            if (cVar27 == '\0') {
                              if (pMStackX_20 != (MVSpawnPointRed *)0x0) {
                                in_R8 = pMStackX_20;
                                FUN_?(0,TypeInfo__System__IDisposable);
                              }
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__ThemeRepository);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              this_03 = TypeInfo__ThemeRepository->static_fields->
                                        _Instance_k__BackingField;
                              if (this_03 != (ThemeRepository *)0x0) {
                                original = ThemeRepository::ThemeRepository_GetThemePrefab
                                                     (this_03,StringLiteral_Normal,(MethodInfo *)0x0
                                                     );
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                in_R8 = (MVSpawnPointRed *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_Instantiate_4
                                                  ((Object *)original,
                                                                                                      
                                                  Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_
                                                  );
                                if (in_R8 != (MVSpawnPointRed *)0x0) {
                                  bVar12 = (TypeInfo__CloudyThemeBase->_1).naturalAligment;
                                  if (((in_R8->klass->_1).naturalAligment < bVar12) ||
                                     (bVar8 = true,
                                     (in_R8->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
                                     (Il2CppClass *)TypeInfo__CloudyThemeBase)) {
                                    bVar8 = false;
                                  }
                                  if (bVar8) {
                                    pMVar1 = in_R8;
                                  }
                                }
                                TypeInfo__AvatarEditModeBodyController->static_fields->Theme =
                                     (CloudyThemeBase *)pMVar1;
                                if (iRam_? != 0) {
                                  uVar4 = (uint)((ulonglong)
                                                  TypeInfo__AvatarEditModeBodyController->
                                                  static_fields >> 0xc);
                                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                  in_R8 = (MVSpawnPointRed *)(ulonglong)(uVar4 & 0x3f);
                                  do {
                                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                    LOCK();
                                    bVar8 = uVar6 == *puVar7;
                                    if (bVar8) {
                                      *puVar7 = uVar6 | 1L << (longlong)in_R8;
                                    }
                                    UNLOCK();
                                  } while (!bVar8);
                                }
                                pCVar42 = TypeInfo__AvatarEditModeBodyController->static_fields->
                                          Theme;
                                if (pCVar42 != (CloudyThemeBase *)0x0) {
                                  Theme::Theme_InitializeForPreview
                                            ((Theme *)pCVar42,(MethodInfo *)0x0);
                                  pCVar42 = TypeInfo__AvatarEditModeBodyController->static_fields->
                                            Theme;
                                  if ((pCVar42 != (CloudyThemeBase *)0x0) &&
                                     (this_04 = (pCVar42->fields)._._Settings_k__BackingField,
                                     this_04 != (SettingsWrapper *)0x0)) {
                                    ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize
                                              (this_04,(MethodInfo *)0x0);
                                    pCVar42 = TypeInfo__AvatarEditModeBodyController->static_fields
                                              ->Theme;
                                    if (pCVar42 != (CloudyThemeBase *)0x0) {
                                      Theme::Theme_Activate((Theme *)pCVar42,(MethodInfo *)0x0);
                                      pCVar42 = TypeInfo__AvatarEditModeBodyController->
                                                static_fields->Theme;
                                      if ((pCVar42 != (CloudyThemeBase *)0x0) &&
                                         (pTVar43 = (pCVar42->fields).skybox,
                                         pTVar43 != (ThemeSkybox *)0x0)) {
                                        (pTVar43->fields)._sunLightIntensity = 0.3;
                                        ThemeSkybox::ThemeSkybox_RecalculateSunLight
                                                  (pTVar43,(MethodInfo *)0x0);
                                        pCVar42 = TypeInfo__AvatarEditModeBodyController->
                                                  static_fields->Theme;
                                        if ((pCVar42 != (CloudyThemeBase *)0x0) &&
                                           (pTVar43 = (pCVar42->fields).skybox,
                                           pTVar43 != (ThemeSkybox *)0x0)) {
                                          ThemeSkybox::ThemeSkybox_RecalculateSunLight
                                                    (pTVar43,(MethodInfo *)0x0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto code_?;
                            }
                            if (pMStackX_20 == (MVSpawnPointRed *)0x0) break;
                            pMVar21 = pMStackX_20->klass;
                            uVar5 = 0;
                            uVar30._0_1_ = (pMVar21->_1).rank;
                            uVar30._1_1_ = (pMVar21->_1).minimumAlignment;
                            if (uVar30 != 0) {
                              do {
                                if (pMVar21->interfaceOffsets[uVar5].interfaceType ==
                                    (Il2CppClass *)
                                    TypeInfo__System__Collections__Generic__IEnumerator<MVBody>) {
                                  pVVar29 = &(pMVar21->vtable).Equals +
                                            pMVar21->interfaceOffsets[uVar5].offset;
                                  goto code_?;
                                }
                                uVar28 = (short)uVar5 + 1;
                                uVar5 = (ulonglong)uVar28;
                              } while (uVar28 < uVar30);
                            }
                            pVVar29 = (VirtualInvokeData *)
                                      FUN_?(pMStackX_20,
                                                                                                        
                                                  TypeInfo__System__Collections__Generic__IEnumerator<MVBody>
                                                  ,0);
code_?:
                            this_07 = (MVWorldObjectClient *)
                                      (*pVVar29->methodPtr)(pMVar14,pVVar29->method);
                            if (this_07 == (MVWorldObjectClient *)0x0) goto code_?;
                            uStack_17 = *(MVBody **)&(this->fields).hidePos;
                            fStack_37 = (this->fields).hidePos.z;
                            (*(this_07->klass->vtable).set_WorldPosition.methodPtr)
                                      (this_07,&uStack_17);
                            pMVar14 = (this->fields).bodySpawnPoint;
                            if (pMVar14 == (MVSpawnPointRed *)0x0) goto code_?;
                            pQVar23 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                                                ((Quaternion *)auStack_33,
                                                 (MVWorldObjectClient *)pMVar14,(MethodInfo *)0x0);
                            aQStack_24[0].x = pQVar23->x;
                            aQStack_24[0].y = pQVar23->y;
                            aQStack_24[0].z = pQVar23->z;
                            aQStack_24[0].w = pQVar23->w;
                            MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                                      (this_07,aQStack_24,(MethodInfo *)0x0);
                          }
                          goto code_?;
                        }
                      }
                    }
                    goto code_?;
                  }
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(in_R8);
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  FUN_?(pLVar36,pMVar31);
  goto code_?;
}


/* Void InitializedPurchasedAvatar(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_InitializedPurchasedAvatar
               (AvatarEditModeBodyController *this,Object *sender,
               InitializedGameQueryDataEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__AnimationState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController___InitializedPurchasedAvatar_b__38_1_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___InitializedPurchasedAvatar_b__38_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchased_avatar_has_been_added_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)0x0;
  auStack_2._8_8_ = (MonitorData *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 == (MVGameControllerBase *)0x0) ||
      (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
     (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 == (WorldNetwork *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pEVar6 = (pWVar5->fields)._.InitializedGameQueryData;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    unaff_RBX = (ExecuteEvents_EventFunction_1_System_Object___Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pEVar6,(Delegate *)this_02,(MethodInfo *)0x0);
    pEVar7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (unaff_RBX == (ExecuteEvents_EventFunction_1_System_Object___Class *)0x0) {
      (pWVar5->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pWVar5->fields)._.InitializedGameQueryData >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      str0 = StringLiteral_Purchased_avatar_has_been_added_;
      if (e != (InitializedGameQueryDataEventArgs *)0x0) {
        if ((e->fields).RootWO == (MVWorldObjectClient *)0x0) {
          return;
        }
        pMVar13 = (e->fields).RootWO;
        pMVar14 = pMVar13->klass;
        str1 = (String *)
               (*(pMVar14->vtable).ToString.methodPtr)(pMVar13,(pMVar14->vtable).ToString.method);
        unaff_RBX = (ExecuteEvents_EventFunction_1_System_Object___Class *)
                    mscorlib.dll::System::String::String_Concat_4(str0,str1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_RBX,(MethodInfo *)0x0);
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pMVar13 = (e->fields).RootWO;
        if (((pMVar13 != (MVWorldObjectClient *)0x0) &&
            (this_03 != (MVWorldObjectClientManager *)0x0)) &&
           (this_04 = (MVBody *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (this_03,(pMVar13->fields)._.id,(MethodInfo *)0x0),
           this_04 != (MVBody *)0x0)) {
          bVar15 = (TypeInfo__MVBody->_1).naturalAligment;
          if ((bVar15 <= (this_04->klass->_1).naturalAligment) &&
             ((MVBody__Class *)(this_04->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] ==
              TypeInfo__MVBody)) {
            if ((this_04->fields).forceHidden == 0) {
              if ((this_04->fields).shadowVisible != 0) {
                (this_04->fields).shadowVisible = 0;
                MVBody::MVBody_UpdateVisibility(this_04,(MethodInfo *)0x0);
              }
              if (((this_04->fields).forceHidden == 0) && ((this_04->fields).visible != 0)) {
                (this_04->fields).visible = 0;
                MVBody::MVBody_UpdateVisibility(this_04,(MethodInfo *)0x0);
              }
            }
            pMVar16 = (this_04->fields).bodyObject;
            if (((pMVar16 != (MVBodyObject *)0x0) &&
                (this_00 = (pMVar16->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) &&
               (this_05 = (Animation *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_GetComponent_1
                                    ((Component *)this_00,
                                     UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                    ), this_05 != (Animation *)0x0)) {
              auStack_2._0_8_ =
                   UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetEnumerator
                             (this_05,(MethodInfo *)0x0);
              auStack_2._32_8_ = (Object *)0x0;
              unaff_RBX = (ExecuteEvents_EventFunction_1_System_Object___Class *)auStack_2;
              puStack_17 = auStack_2 + 8;
              auStack_2._16_8_ = this_04;
              auStack_2._40_8_ = unaff_RBX;
              while ((ExecuteEvents_EventFunction_1_System_Object___Class *)auStack_2._0_8_ !=
                     (ExecuteEvents_EventFunction_1_System_Object___Class *)0x0) {
                cVar18 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
                uVar19 = auStack_2._0_8_;
                if (cVar18 == '\0') {
                  auStack_2._8_8_ = FUN_?(auStack_2._0_8_,TypeInfo__System__IDisposable);
                  if ((MonitorData *)auStack_2._8_8_ != (MonitorData *)0x0) {
                    FUN_?(0,TypeInfo__System__IDisposable);
                  }
                  pLVar20 = (this->fields).bodies;
                  if (pLVar20 != (List_1_MVBody_ *)0x0) {
                    FUN_?(pLVar20,this_04);
                    pLVar20 = (this->fields).bodies;
                    if (pLVar20 != (List_1_MVBody_ *)0x0) {
                      index = (pLVar20->fields)._size + -1;
                      AvatarEditModeBodyController_GenerateIconForBody(this,index,(MethodInfo *)0x0)
                      ;
                      AvatarEditModeBodyController_SetCurrentBody(this,index,(MethodInfo *)0x0);
                      AvatarSelectionController::
                      AvatarSelectionController_set_CurrentlySelectedSlotIndex
                                (index,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      unaff_RBX = (ExecuteEvents_EventFunction_1_System_Object___Class *)0x0;
                      if (pMVar3 != (MVGameControllerBase *)0x0) {
                        pMVar4 = (pMVar3->fields).game;
                        unaff_RBX = (ExecuteEvents_EventFunction_1_System_Object___Class *)0x0;
                        if (pMVar4 != (MVNetworkGame *)0x0) {
                          pAVar21 = (pMVar4->fields).OnActiveAvatarSet;
                          b = (Delegate *)FUN_?(TypeInfo__System__Action);
                          pMVar22 = 
                          MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__
                          ;
                          (b->fields).method_ptr =
                               MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__
                               ->virtualMethodPointer;
                          (b->fields).method = pMVar22;
                          (b->fields).m_target = (Object *)this;
                          if (iRam_? != 0) {
                            uVar8 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
                            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                              LOCK();
                              bVar12 = uVar10 == *puVar11;
                              if (bVar12) {
                                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar12);
                          }
                          uVar23 = pMVar22->parameters_count;
                          (b->fields).method_code = b;
                          if (((pMVar22->flags & 0x10) == 0) || (uVar23 != 0)) {
                            (b->fields).method_code = (b->fields).m_target;
                            puVar24 = (b->fields).method_ptr;
                          }
                          else {
                            puVar24 = &UNK_?;
                          }
                          (b->fields).invoke_impl = puVar24;
                          (b->fields).extra_arg = FUN_?;
                          pAVar21 = (Action *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pAVar21,b,(MethodInfo *)0x0);
                          if (pAVar21 == (Action *)0x0) {
                            (pMVar4->fields).OnActiveAvatarSet = (Action *)0x0;
                          }
                          else {
                            pAVar25 = pAVar1;
                            if (pAVar21->klass == TypeInfo__System__Action) {
                              pAVar25 = pAVar21;
                            }
                            if (pAVar25 == (Action *)0x0) {
                              FUN_?(pAVar21);
                              pcVar26 = (code *)swi(3);
                              (*pcVar26)();
                              return;
                            }
                            (pMVar4->fields).OnActiveAvatarSet = pAVar25;
                            if (pAVar21->klass == TypeInfo__System__Action) {
                              pAVar1 = pAVar21;
                            }
                            if (pAVar1 == (Action *)0x0) {
                              FUN_?(pAVar21);
                              pcVar26 = (code *)swi(3);
                              (*pcVar26)();
                              return;
                            }
                          }
                          if (iRam_? != 0) {
                            uVar8 = (uint)((ulonglong)&(pMVar4->fields).OnActiveAvatarSet >> 0xc);
                            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                              LOCK();
                              bVar12 = uVar10 == *puVar11;
                              if (bVar12) {
                                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar12);
                          }
                          pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c
                              == 0) {
                            FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                          }
                          this_06 = TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                    __9__38_0;
                          if (this_06 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
                            if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).
                                         field_0x1c == 0) {
                              FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                            }
                            object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9
                            ;
                            this_06 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                                      FUN_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                                  );
                            UnityEngine.UI.dll::UnityEngine::EventSystems::
                            ExecuteEvents+EventFunction`1[System::Object]::
                            ExecuteEvents_EventFunction_1_System_Object___ctor
                                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
                                       (Object *)object,
                                       MethodInfo__AvatarEditModeBodyController____c___InitializedPurchasedAvatar_b__38_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                                       ,(MethodInfo *)0x0);
                            TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__38_0 =
                                 this_06;
                            if (iRam_? != 0) {
                              uVar8 = (uint)((ulonglong)
                                              &TypeInfo__AvatarEditModeBodyController____c->
                                               static_fields->__9__38_0 >> 0xc);
                              lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                                puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                                LOCK();
                                bVar12 = uVar10 == *puVar11;
                                if (bVar12) {
                                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar12);
                            }
                          }
                          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                       field_0x1c == 0) {
                            FUN_?();
                          }
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_ExecuteHierarchy
                                    (pGVar27,(BaseEventData *)0x0,
                                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                                    );
                          pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                          unaff_RBX = (ExecuteEvents_EventFunction_1_System_Object___Class *)
                                      FUN_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                                                  );
                          UnityEngine.UI.dll::UnityEngine::EventSystems::
                          ExecuteEvents+EventFunction`1[System::Object]::
                          ExecuteEvents_EventFunction_1_System_Object___ctor
                                    ((ExecuteEvents_EventFunction_1_System_Object_ *)unaff_RBX,
                                     (Object *)this,
                                     MethodInfo__AvatarEditModeBodyController___InitializedPurchasedAvatar_b__38_1_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_ExecuteHierarchy
                                    (pGVar27,(BaseEventData *)0x0,
                                     (ExecuteEvents_EventFunction_1_System_Object_ *)unaff_RBX,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                                    );
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if ((pMVar3 != (MVGameControllerBase *)0x0) &&
                             (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) {
                            this_01 = (pMVar4->fields).operationRequests;
                            pMVar13 = (e->fields).RootWO;
                            if ((pMVar13 != (MVWorldObjectClient *)0x0) &&
                               (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
                              MVNetworkGame+OperationRequests::
                              MVNetworkGame_OperationRequests_SetActiveAvatar
                                        (this_01,(pMVar13->fields)._.id,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto code_?;
                }
                if ((ExecuteEvents_EventFunction_1_System_Object___Class *)auStack_2._0_8_ ==
                    (ExecuteEvents_EventFunction_1_System_Object___Class *)0x0)
                goto code_?;
                pEVar28 = (ExecuteEvents_EventFunction_1_System_Object___Class *)
                          ((Il2CppClass_0 *)auStack_2._0_8_)->image;
                uVar29 = 0;
                uVar30._0_1_ = (pEVar28->_1).rank;
                uVar30._1_1_ = (pEVar28->_1).minimumAlignment;
                if (uVar30 != 0) {
                  do {
                    if (pEVar28->interfaceOffsets[uVar29].interfaceType ==
                        (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                      ppIVar31 = &(&(pEVar28->vtable).Equals)
                                  [pEVar28->interfaceOffsets[uVar29].offset + 1].methodPtr;
                      goto code_?;
                    }
                    uVar29 = uVar29 + 1;
                  } while (uVar29 < uVar30);
                }
                ppIVar31 = (Il2CppMethodPointer *)
                           FUN_?(auStack_2._0_8_,TypeInfo__System__Collections__IEnumerator
                                         ,1);
code_?:
                pAVar21 = (Action *)(**ppIVar31)(uVar19,(MethodInfo *)ppIVar31[1]);
                unaff_RBX = (ExecuteEvents_EventFunction_1_System_Object___Class *)uVar19;
                if (pAVar21 == (Action *)0x0) goto code_?;
                pAVar25 = pAVar1;
                if (pAVar21->klass == (Action__Class *)TypeInfo__UnityEngine__AnimationState) {
                  pAVar25 = pAVar21;
                }
                if (pAVar25 == (Action *)0x0) goto code_?;
                pAVar25 = pAVar1;
                if (pAVar21->klass == (Action__Class *)TypeInfo__UnityEngine__AnimationState) {
                  pAVar25 = pAVar21;
                }
                unaff_RBX = (pAVar25->fields)._._.method_ptr;
                if (unaff_RBX == (ExecuteEvents_EventFunction_1_System_Object___Class *)0x0)
                goto code_?;
                pcVar26 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar26 = (code *)FUN_?(&UNK_?), pcVar26 == (code *)0x0))
                goto code_?;
                pcRam_? = pcVar26;
                (*pcRam_?)(unaff_RBX,2);
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    pEVar6 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              FUN_?(unaff_RBX,
                            TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (pEVar6 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      FUN_?(unaff_RBX,pEVar7);
      pcVar26 = (code *)swi(3);
      (*pcVar26)();
      return;
    }
    (pWVar5->fields)._.InitializedGameQueryData = pEVar6;
    lVar9 = FUN_?(unaff_RBX,
                           TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (lVar9 != 0) goto code_?;
  }
  FUN_?(unaff_RBX);
code_?:
  uVar19 = func_?(&UNK_?);
  pAVar25 = (Action *)FUN_?(uVar19);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar25,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void MVNetworGame_ScreenshotUploadedHandler(Object, ScreenshotUploadedEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_MVNetworGame_ScreenshotUploadedHandler
               (AvatarEditModeBodyController *this,Object *sender,ScreenshotUploadedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseSoundManager>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_0_UnityEngine__EventSystems__IPurchaseSoundManager__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_3_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c__DisplayClass43_0___MVNetworGame_ScreenshotUploadedHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass43_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_There_was_a_server_communication);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Success_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Action_failed_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass43_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).game;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
                (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_02,(MethodInfo *)0x0);
      original = (this->fields).notificationPopup;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar2 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                          );
      if (object != (Object *)0x0) {
        bVar3 = iRam_? != 0;
        object[1].klass = pOVar2;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        if (e != (ScreenshotUploadedEventArgs *)0x0) {
          if ((e->fields).Uploaded == 0) {
            pOVar2 = object[1].klass;
            if ((pOVar2 == (Object__Class *)0x0) ||
               (pIVar8 = (pOVar2->_0).byval_arg.data.array,
               pSVar9 = StringLiteral_There_was_a_server_communication,
               pSVar10 = StringLiteral_Action_failed_, pIVar8 == (Il2CppArrayType *)0x0))
            goto code_?;
          }
          else {
            if ((this->fields).playingPurchaseSoundAfterScreenshot != 0) {
              (this->fields).playingPurchaseSoundAfterScreenshot = 0;
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              this_03 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_0;
              if (this_03 == (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)0x0) {
                if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                }
                pAVar12 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                this_03 = (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)pAVar12,
                           MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_0_UnityEngine__EventSystems__IPurchaseSoundManager__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_0 = this_03;
                func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                     __9__43_0);
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar11,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseSoundManager>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>_
                        );
            }
            pOVar2 = object[1].klass;
            if ((pOVar2 == (Object__Class *)0x0) ||
               (pIVar8 = (pOVar2->_0).byval_arg.data.array, pIVar8 == (Il2CppArrayType *)0x0))
            goto code_?;
            pSVar9 = (this->fields).currentActionSuccessMessage;
            pSVar10 = StringLiteral_Success_;
          }
          (**(code **)&pIVar8->etype[0x5e].attrs)(pIVar8,pSVar9,pIVar8->etype[0x5f].data.dummy);
          plVar13 = *(longlong **)&(pOVar2->_0).byval_arg.attrs;
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x5e8))(plVar13,pSVar10,*(undefined8 *)(*plVar13 + 0x5f0));
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AvatarEditModeBodyController____c);
            }
            this_04 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_1;
            if (this_04 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              pAVar12 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              this_04 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)pAVar12,
                         MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_1 = this_04;
              if (iRam_? != 0) {
                uVar4 = (uint)((ulonglong)
                                &TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                 __9__43_1 >> 0xc);
                lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar11,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_05 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_05,object,
                       MethodInfo__AvatarEditModeBodyController____c__DisplayClass43_0___MVNetworGame_ScreenshotUploadedHandler_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar11,(BaseEventData *)0x0,this_05,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AvatarEditModeBodyController____c);
            }
            this_06 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_3;
            if (this_06 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
              if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__AvatarEditModeBodyController____c);
              }
              pAVar12 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
              this_06 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_06,(Object *)pAVar12,
                         MethodInfo__AvatarEditModeBodyController____c___MVNetworGame_ScreenshotUploadedHandler_b__43_3_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__43_3 = this_06;
              if (iRam_? != 0) {
                uVar4 = (uint)((ulonglong)
                                &TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                 __9__43_3 >> 0xc);
                lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                do {
                  uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                  puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar14 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
            ;
            if ((
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(pMVar14);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_GetEventChain
                      (pGVar11,(IList_1_UnityEngine_Transform_ *)
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList,(MethodInfo *)0x0);
            pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
              lVar5 = (longlong)(pLVar15->fields)._size;
              uVar4 = 0;
              if (0 < lVar5) {
                lVar16 = 0;
                lVar17 = 0x20;
                do {
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList;
                  if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                  if ((uint)(pLVar15->fields)._size <= uVar4) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  pTVar19 = (pLVar15->fields)._items;
                  if (pTVar19 == (Transform__Array *)0x0) goto code_?;
                  if ((uint)pTVar19->max_length <= uVar4) {
                    FUN_?();
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  this_01 = *(Component **)((longlong)pTVar19->vector + lVar17 + -0x20);
                  if (this_01 == (Component *)0x0) goto code_?;
                  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(this_01,(MethodInfo *)0x0);
                  bVar20 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                           ExecuteEvents_Execute_18
                                     (pGVar11,(BaseEventData *)0x0,
                                      (ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
                                      (pMVar14->field7_0x38).rgctx_data[1].method);
                  if (bVar20 != 0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_01,(MethodInfo *)0x0);
                    return;
                  }
                  uVar4 = uVar4 + 1;
                  lVar16 = lVar16 + 1;
                  lVar17 = lVar17 + 8;
                } while (lVar16 < lVar5);
              }
              return;
            }
code_?:
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnActiveAvatarSetAfterPurchase() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnActiveAvatarSetAfterPurchase
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (pMVar2->fields).OnActiveAvatarSet;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__,
             (MethodInfo *)0x0);
  pAVar4 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar4 == (Action *)0x0) {
    (pMVar2->fields).OnActiveAvatarSet = (Action *)0x0;
  }
  else {
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 == (Action *)0x0) {
      FUN_?(pAVar4,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields).OnActiveAvatarSet = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 == (Action *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnActiveAvatarSet >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  this_02 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    pAVar12 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)pAVar12,
               MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0 = this_02;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_0 >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar11,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  this_03 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1;
  if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    pAVar12 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)pAVar12,
               MethodInfo__AvatarEditModeBodyController____c___OnActiveAvatarSetAfterPurchase_b__39_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1 = this_03;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__39_1 >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar13 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar13);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar11,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar7 = (longlong)(pLVar14->fields)._size;
    uVar6 = 0;
    if (0 < lVar7) {
      lVar15 = 0;
      lVar16 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar14->fields)._size <= uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar17 = (pLVar14->fields)._items;
        if (pTVar17 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar17->max_length <= uVar6) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar11,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                            (pMVar13->field7_0x38).rgctx_data[1].method);
        if (bVar18 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar6 = uVar6 + 1;
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 8;
      } while (lVar15 < lVar7);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnProductPurchaseAvatarResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnProductPurchaseAvatarResponse
               (AvatarEditModeBodyController *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVPurchaseReturnCode);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___OnProductPurchaseAvatarResponse_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c__DisplayClass37_0___OnProductPurchaseAvatarResponse_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass37_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_purchase_response__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass37_0)
  ;
  if (object_00 != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    *(int32_t *)&object_00[1].klass = returnCode;
    object_00[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
      pAVar8 = (pMVar7->fields).PurchaseProductResponseHandler;
      this_00 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar10 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar9 == (Delegate *)0x0) {
        (pMVar7->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar8 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)FUN_?(pDVar9,
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
        if (pAVar8 ==
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pMVar7->fields).PurchaseProductResponseHandler = pAVar8;
        pAVar10 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar3 = FUN_?();
        if (lVar3 == 0) {
          FUN_?(pDVar9,pAVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields).PurchaseProductResponseHandler >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AvatarEditModeBodyController____c);
      }
      this_01 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AvatarEditModeBodyController____c);
        }
        object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__AvatarEditModeBodyController____c___OnProductPurchaseAvatarResponse_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0 = this_01;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)
                          &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__37_0 >>
                         0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      EStack_13.klass = (Enum__Class *)TypeInfo__MV__Common__MVPurchaseReturnCode;
      uStack_14 = *(undefined4 *)&object_00[1].klass;
      EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
      pSVar15 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Avatar_purchase_response__,pSVar15,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar15,(MethodInfo *)0x0);
      if (*(int *)&object_00[1].klass != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar6 == (MVGameControllerBase *)0x0) ||
            (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
           (pWVar16 = (pMVar7->fields).worldNetwork, pWVar16 == (WorldNetwork *)0x0))
        goto code_?;
        pEVar17 = (pWVar16->fields)._.InitializedGameQueryData;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pEVar17,(Delegate *)this_02,(MethodInfo *)0x0);
        pEVar18 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        if (pDVar9 == (Delegate *)0x0) {
          (pWVar16->fields)._.InitializedGameQueryData =
               (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
        }
        else {
          pEVar17 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    FUN_?(pDVar9,
                                  TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
          ;
          if (pEVar17 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            FUN_?(pDVar9,pEVar18);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (pWVar16->fields)._.InitializedGameQueryData = pEVar17;
          pEVar18 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          lVar3 = FUN_?();
          if (lVar3 == 0) {
            FUN_?(pDVar9,pEVar18);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pWVar16->fields)._.InitializedGameQueryData >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_03,object_00,
                   MethodInfo__AvatarEditModeBodyController____c__DisplayClass37_0___OnProductPurchaseAvatarResponse_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar12,(BaseEventData *)0x0,this_03,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPurchaseAvatarConfirmation(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnPurchaseAvatarConfirmation
               (AvatarEditModeBodyController *this,bool confirmed,
               ConfirmationPopup *confirmationPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___OnPurchaseAvatarConfirmation_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c__DisplayClass36_0___OnPurchaseAvatarConfirmation_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  this_00 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__AvatarEditModeBodyController____c___OnPurchaseAvatarConfirmation_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0 = this_00;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__36_0 >> 0xc)
      ;
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (confirmed == 0) {
    return;
  }
  pOVar7 = (Object *)FUN_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass36_0);
  original = (this->fields).pleaseWaitPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                      );
  if (pOVar7 != (Object *)0x0) {
    bVar6 = iRam_? != 0;
    pOVar7[1].klass = pOVar8;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_01,pOVar7,
               MethodInfo__AvatarEditModeBodyController____c__DisplayClass36_0___OnPurchaseAvatarConfirmation_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar9 != (MVGameControllerBase *)0x0) &&
       (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) {
      pAVar11 = (pMVar10->fields).PurchaseProductResponseHandler;
      this_02 = (Action_2_Int32Enum_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar11,(Delegate *)this_02,(MethodInfo *)0x0);
      pAVar13 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pDVar12 == (Delegate *)0x0) {
        (pMVar10->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
      }
      else {
        pAVar11 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)FUN_?(pDVar12,
                                   TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                  );
        if (pAVar11 ==
            (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
            0x0) {
          FUN_?(pDVar12,pAVar13);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        (pMVar10->fields).PurchaseProductResponseHandler = pAVar11;
        pAVar13 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        lVar3 = FUN_?(pDVar12,
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                              );
        if (lVar3 == 0) {
          FUN_?(pDVar12,pAVar13);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar10->fields).PurchaseProductResponseHandler >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar9 != (MVGameControllerBase *)0x0) &&
          (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
         (pWVar15 = (pMVar10->fields).worldNetwork, pWVar15 != (WorldNetwork *)0x0)) {
        pEVar16 = (pWVar15->fields)._.InitializedGameQueryData;
        this_03 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
        uVar17 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pEVar16,(Delegate *)this_03,(MethodInfo *)0x0);
        pEVar18 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        if (pDVar12 == (Delegate *)0x0) {
          (pWVar15->fields)._.InitializedGameQueryData =
               (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
        }
        else {
          pEVar16 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    FUN_?(pDVar12,
                                  TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
          ;
          if (pEVar16 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            FUN_?(pDVar12,pEVar18);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          (pWVar15->fields)._.InitializedGameQueryData = pEVar16;
          pEVar18 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          lVar3 = FUN_?(pDVar12,
                                 TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
          if (lVar3 == 0) {
            FUN_?(pDVar12,pEVar18);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pWVar15->fields)._.InitializedGameQueryData >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pAVar19 = (this->fields).purchasingItem;
        if ((pAVar19 != (AvatarRepositoryItem *)0x0) &&
           (iVar20 = (pAVar19->fields).itemID, this_04 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_05 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_05,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x81);
          pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_10);
          aiStackX_10[0] = iVar20;
          value = (Object *)FUN_?(uRam_?,aiStackX_10);
          if (this_05 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_05,pOVar7,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseProduct
                      (this_04,MVProductType__Enum_Avatar,
                       (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void PurchaseAvatar(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_PurchaseAvatar
               (AvatarEditModeBodyController *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).purchasingItem = item;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).purchasingItem >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar7 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar6,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar8->fields)._size;
    uVar2 = 0;
    if (0 < lVar9) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar8->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar13 = (pLVar8->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar6,(BaseEventData *)0x0,this_01,
                           (pMVar7->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ResetCallback(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_ResetCallback
               (AvatarEditModeBodyController *this,Object *sender,
               InitializedGameQueryDataEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController___ResetCallback_b__27_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__set_Item_int__MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_08 = (MVBody *)0x0;
  alStack_1[0] = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 != (WorldNetwork *)0x0)) {
    pEVar5 = (pWVar4->fields)._.InitializedGameQueryData;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pEVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    pEVar7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (pDVar6 == (Delegate *)0x0) {
      (pWVar4->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    }
    else {
      pEVar5 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                FUN_?(pDVar6,
                              TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (pEVar5 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        FUN_?(pDVar6,pEVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pWVar4->fields)._.InitializedGameQueryData = pEVar5;
      pEVar7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      lVar9 = FUN_?(pDVar6,
                             TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (lVar9 == 0) {
        FUN_?(pDVar6,pEVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&(pWVar4->fields)._.InitializedGameQueryData >> 0xc);
      lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar12 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    if ((e != (InitializedGameQueryDataEventArgs *)0x0) &&
       (pMVar14 = (e->fields).RootWO, pMVar14 != (MVWorldObjectClient *)0x0)) {
      id = (pMVar14->fields)._.id;
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        pMVar15 = (MVBody *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_03,id,(MethodInfo *)0x0);
        if (pMVar15 != (MVBody *)0x0) {
          bVar16 = (TypeInfo__MVBody->_1).naturalAligment;
          if (((pMVar15->klass->_1).naturalAligment < bVar16) ||
             (this_08 = pMVar15,
             (MVBody__Class *)(pMVar15->klass->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
             TypeInfo__MVBody)) {
            FUN_?(pMVar15);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 != (MVGameControllerBase *)0x0) &&
           (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
          pMVar17 = (pMVar3->fields)._AvatarMetaDataWoMap_k__BackingField;
          pMVar15 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
          if ((pMVar15 != (MVBody *)0x0) &&
             (key = (pMVar15->fields)._._._._.id, pMVar17 != (MvAvatarMetaDataWoMap *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOStack_18 = (Object *)0x0;
            pDVar19 = (pMVar17->fields).avatarWOIDAvatarMetaData;
            if (pDVar19 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
              pMVar20 = 
              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
              ;
              bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,key,
                                  &pOStack_18,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                                 );
              if (bVar21 == 0) {
                uVar22 = func_?(&TypeInfo__System__ArgumentException);
                this_07 = (InvalidEnumArgumentException *)func_?(uVar22);
                message = (String *)
                          func_?(&StringLiteral_AvatarWo_not_present_in_avatarWO);
                System.dll::System::ComponentModel::InvalidEnumArgumentException::
                InvalidEnumArgumentException__ctor_1(this_07,message,(MethodInfo *)0x0);
                func_?(&
                                    MethodInfo__MV__WorldObject__MvAvatarMetaDataWoMap__ResetAvatar_int__int_
                                   );
                FUN_?(this_07);
code_?:
                FUN_?();
code_?:
                uVar22 = func_?(&UNK_?);
                pOVar23 = (Object *)FUN_?(uVar22);
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
code_?:
                FUN_?();
code_?:
                FUN_?();
code_?:
                FUN_?();
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pDVar19 = (pMVar17->fields).avatarWOIDAvatarMetaData;
              if (pDVar19 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                          );
                pDVar19 = (pMVar17->fields).avatarWOIDAvatarMetaData;
                if (pDVar19 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,id,pOStack_18,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar20 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                             ->klass->rgctx_data[0x22].method);
                  pLVar24 = (this->fields).bodies;
                  uVar10 = (this->fields).currentBodyIndex;
                  if (pLVar24 != (List_1_MVBody_ *)0x0) {
                    if ((uint)(pLVar24->fields)._size <= uVar10) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pMVar25 = (pLVar24->fields)._items;
                    if (pMVar25 != (MVBody__Array *)0x0) {
                      FUN_?(pMVar25,(longlong)(int)uVar10);
                      piVar26 = &(pLVar24->fields)._version;
                      *piVar26 = *piVar26 + 1;
                      AvatarEditModeBodyController_SetCurrentBody
                                (this,(this->fields).currentBodyIndex,(MethodInfo *)0x0);
                      pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                      this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                FUN_?(
                                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                                             );
                      UnityEngine.UI.dll::UnityEngine::EventSystems::
                      ExecuteEvents+EventFunction`1[System::Object]::
                      ExecuteEvents_EventFunction_1_System_Object___ctor
                                (this_04,(Object *)this,
                                 MethodInfo__AvatarEditModeBodyController___ResetCallback_b__27_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy
                                (pGVar27,(BaseEventData *)0x0,this_04,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                                );
                      pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0
                         ) {
                        FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                      }
                      this_05 = TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                __9__27_1;
                      if (this_05 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
                        if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c ==
                            0) {
                          FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                        }
                        pAVar28 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                        this_05 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
                                  FUN_?(
                                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                                               );
                        UnityEngine.UI.dll::UnityEngine::EventSystems::
                        ExecuteEvents+EventFunction`1[System::Object]::
                        ExecuteEvents_EventFunction_1_System_Object___ctor
                                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
                                   (Object *)pAVar28,
                                   MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_1 =
                             this_05;
                        if (iRam_? != 0) {
                          uVar10 = (uint)((ulonglong)
                                          &TypeInfo__AvatarEditModeBodyController____c->
                                           static_fields->__9__27_1 >> 0xc);
                          lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
                            puVar12 = (ulonglong *)(lVar9 + 0xADDR);
                            LOCK();
                            bVar13 = uVar11 == *puVar12;
                            if (bVar13) {
                              *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar13);
                        }
                      }
                      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_ExecuteHierarchy
                                (pGVar27,(BaseEventData *)0x0,
                                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                                );
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                         (this_00 = (pMVar3->fields).operationRequests,
                         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
                        MVNetworkGame+OperationRequests::
                        MVNetworkGame_OperationRequests_SetActiveAvatar
                                  (this_00,id,(MethodInfo *)0x0);
                        pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c ==
                            0) {
                          FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                        }
                        pEVar29 = TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                  __9__27_2;
                        if (pEVar29 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                          if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c
                              == 0) {
                            FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                          }
                          pAVar28 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                          pEVar29 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                                    FUN_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                 );
                          UnityEngine.UI.dll::UnityEngine::EventSystems::
                          ExecuteEvents+EventFunction`1[System::Object]::
                          ExecuteEvents_EventFunction_1_System_Object___ctor
                                    ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar29,
                                     (Object *)pAVar28,
                                     MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_2 =
                               pEVar29;
                          if (iRam_? != 0) {
                            uVar10 = (uint)((ulonglong)
                                            &TypeInfo__AvatarEditModeBodyController____c->
                                             static_fields->__9__27_2 >> 0xc);
                            lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
                              puVar12 = (ulonglong *)(lVar9 + 0xADDR);
                              LOCK();
                              bVar13 = uVar11 == *puVar12;
                              if (bVar13) {
                                *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar13);
                          }
                        }
                        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                     field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_ExecuteHierarchy
                                  (pGVar27,(BaseEventData *)0x0,
                                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar29,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                  );
                        pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c ==
                            0) {
                          FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                        }
                        pEVar29 = TypeInfo__AvatarEditModeBodyController____c->static_fields->
                                  __9__27_3;
                        if (pEVar29 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                          if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c
                              == 0) {
                            FUN_?(TypeInfo__AvatarEditModeBodyController____c);
                          }
                          pAVar28 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
                          pEVar29 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                                    FUN_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                 );
                          UnityEngine.UI.dll::UnityEngine::EventSystems::
                          ExecuteEvents+EventFunction`1[System::Object]::
                          ExecuteEvents_EventFunction_1_System_Object___ctor
                                    ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar29,
                                     (Object *)pAVar28,
                                     MethodInfo__AvatarEditModeBodyController____c___ResetCallback_b__27_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__27_3 =
                               pEVar29;
                          if (iRam_? != 0) {
                            uVar10 = (uint)((ulonglong)
                                            &TypeInfo__AvatarEditModeBodyController____c->
                                             static_fields->__9__27_3 >> 0xc);
                            lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
                              puVar12 = (ulonglong *)(lVar9 + 0xADDR);
                              LOCK();
                              bVar13 = uVar11 == *puVar12;
                              if (bVar13) {
                                *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar13);
                          }
                        }
                        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                     field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_ExecuteHierarchy
                                  (pGVar27,(BaseEventData *)0x0,
                                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar29,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                  );
                        if (this_08 != (MVBody *)0x0) {
                          if (((this_08->fields).forceHidden == 0) &&
                             ((this_08->fields).shadowVisible != 0)) {
                            (this_08->fields).shadowVisible = 0;
                            MVBody::MVBody_UpdateVisibility(this_08,(MethodInfo *)0x0);
                          }
                          pMVar30 = (this_08->fields).bodyObject;
                          if (((pMVar30 != (MVBodyObject *)0x0) &&
                              (this_01 = (pMVar30->fields).boneAnimation,
                              this_01 != (BoneAnimation *)0x0)) &&
                             (this_06 = (Animation *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)this_01,
                                                                                                      
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                                  ), this_06 != (Animation *)0x0)) {
                            pIStack_31 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                                         Animation_GetEnumerator(this_06,(MethodInfo *)0x0);
                            uStack_32 = 0;
                            ppIStack_33 = &pIStack_31;
                            plStack_34 = alStack_1;
                            while (pIStack_31 != (IEnumerator *)0x0) {
                              cVar35 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
                              pIVar36 = pIStack_31;
                              if (cVar35 == '\0') {
                                alStack_1[0] =
                                     FUN_?(pIStack_31,TypeInfo__System__IDisposable);
                                if (alStack_1[0] != 0) {
                                  FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
                                }
                                return;
                              }
                              if (pIStack_31 == (IEnumerator *)0x0) goto code_?;
                              pIVar37 = pIStack_31->klass;
                              uVar38 = 0;
                              uVar39._0_1_ = (pIVar37->_1).rank;
                              uVar39._1_1_ = (pIVar37->_1).minimumAlignment;
                              if (uVar39 != 0) {
                                do {
                                  if (pIVar37->interfaceOffsets[uVar38].interfaceType ==
                                      (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                                    pVVar40 = &(pIVar37->vtable).MoveNext +
                                              (pIVar37->interfaceOffsets[uVar38].offset + 1);
                                    goto code_?;
                                  }
                                  uVar38 = uVar38 + 1;
                                } while (uVar38 < uVar39);
                              }
                              pVVar40 = (VirtualInvokeData *)
                                        FUN_?(pIStack_31,
                                                      TypeInfo__System__Collections__IEnumerator,1);
code_?:
                              pOVar41 = (Object *)(*pVVar40->methodPtr)(pIVar36,pVVar40->method);
                              if (pOVar41 == (Object *)0x0) goto code_?;
                              pOVar23 = (Object *)0x0;
                              if ((AnimationState__Class *)pOVar41->klass ==
                                  TypeInfo__UnityEngine__AnimationState) {
                                pOVar23 = pOVar41;
                              }
                              if (pOVar23 == (Object *)0x0) goto code_?;
                              pOVar23 = (Object *)0x0;
                              if ((AnimationState__Class *)pOVar41->klass ==
                                  TypeInfo__UnityEngine__AnimationState) {
                                pOVar23 = pOVar41;
                              }
                              pOVar42 = pOVar23[1].klass;
                              if (pOVar42 == (Object__Class *)0x0) goto code_?;
                              pcVar8 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar8 = (code *)FUN_?(&UNK_?),
                                 pcVar8 == (code *)0x0)) goto code_?;
                              pcRam_? = pcVar8;
                              (*pcRam_?)(pOVar42,2);
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
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetCurrentBody() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_ResetCurrentBody
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarEditModeBodyController__ExecuteReset__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0);
  original = (this->fields).resetAvatarHandler;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                      );
  if (pOVar1 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = iRam_? != 0;
  pOVar1[1].klass = pOVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,pOVar1,
             MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar9,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pOVar2 = pOVar1[1].klass;
  pMVar10 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__AvatarEditModeBodyController__ExecuteReset__,
             (MethodInfo *)0x0);
  if (pOVar2 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar11 = iRam_?;
  (pOVar2->_0).generic_class = (Il2CppGenericClass *)this_01;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(pOVar2->_0).generic_class >> 0xc);
    lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar6 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar4 = uVar8 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar4);
  }
  (pOVar2->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)pMVar10;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(pOVar2->_0).typeMetadataHandle >> 0xc);
    lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar6 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar4 = uVar8 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pIVar13 = (pOVar2->_0).interopData;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar13 == (Il2CppInteropData *)0x0) {
code_?:
    pGVar9 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (pGVar9,(String *)0x0,(MethodInfo *)0x0);
    if (pGVar9 == (GameObject *)0x0) goto code_?;
    pIVar13 = (Il2CppInteropData *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar9,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (pOVar2->_0).interopData = pIVar13;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(pOVar2->_0).interopData >> 0xc);
      lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar6 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar4 = uVar8 == *puVar6;
        if (bVar4) {
          *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pIVar13->pinvokeMarshalFromNativeFunction == (PInvokeMarshalFromNativeFunc)0x0)
    goto code_?;
  }
  if (pMVar10 != (MVBody *)0x0) {
    iVar14 = (pMVar10->fields)._._._._.id;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>,iVar14,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar15 != (MVGameControllerBase *)0x0) {
      pMVar16 = (pMVar15->fields).game;
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      uVar17 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)pOVar2,
                 MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                  (pMVar16,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar15 != (MVGameControllerBase *)0x0) &&
            (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
           (pMVar18 = (pMVar16->fields).operationRequests,
           pMVar18 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aiStackX_20[0] = iVar14;
          pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_20);
          if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar19 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x17);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_03,0x17,pOVar1,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2),method_00
                      );
            pPVar20 = (pMVar18->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar20 != (PhotonPeer *)0x0) {
              (*(pPVar20->klass->vtable).SendOperation.methodPtr)
                        (pPVar20,CONCAT71((int7)((ulonglong)uVar19 >> 8),0x56),this_03,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar20->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ScreenShotCallback(Texture2D, String) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_ScreenShotCallback
               (AvatarEditModeBodyController *this,Texture2D *screenshotTex,String *successMessage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarEditModeBodyController__UploadedImageData__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).currentActionSuccessMessage = successMessage;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentActionSuccessMessage >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bytes = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
          ImageConversion_EncodeToPNG(screenshotTex,(MethodInfo *)0x0);
  MVWorldObject.dll::MV::WorldObject::AntiCheat::ImageWatermark::ImageWatermark_AddToArray
            (bytes,(MethodInfo *)0x0);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__AvatarEditModeBodyController__UploadedImageData__,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DataUploadManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DataUpload_already_in_progress);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UploadData_called_even_though_us);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_UploadData_called_even_though_us,(MethodInfo *)0x0);
  return;
}


/* Void SellCurrentAvatar(SellAvatarController) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SellCurrentAvatar
               (AvatarEditModeBodyController *this,SellAvatarController *avatarSeller,
               MethodInfo *method)

{
  pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVBody *)0x0) {
    key = (pMVar1->fields)._._._._.id;
    pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
    if (avatarSeller != (SellAvatarController *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Update,key,pMVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Sell);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      apMStack_2[0] = (MvAvatarMetaData *)0x0;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pMVar5 = (pMVar4->fields)._AvatarMetaDataWoMap_k__BackingField,
         pMVar5 != (MvAvatarMetaDataWoMap *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar5->fields).avatarWOIDAvatarMetaData;
        if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)apMStack_2,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                    );
          iVar6 = iRam_?;
          (avatarSeller->fields).body = pMVar1;
          if (iVar6 != 0) {
            uVar7 = (uint)((ulonglong)&(avatarSeller->fields).body >> 0xc);
            lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar10 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
              iVar6 = iRam_?;
            } while (!bVar11);
          }
          (avatarSeller->fields).metaData = apMStack_2[0];
          if (iVar6 != 0) {
            uVar7 = (uint)((ulonglong)&(avatarSeller->fields).metaData >> 0xc);
            lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar10 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pTVar12 = (avatarSeller->fields).sellButtonText;
          (avatarSeller->fields).woID = key;
          if (apMStack_2[0] != (MvAvatarMetaData *)0x0) {
            key_00 = StringLiteral_Update;
            if ((apMStack_2[0]->fields).isOnMarketPlace == 0) {
              key_00 = StringLiteral_Sell;
            }
            TM::TM__(key_00,(MethodInfo *)0x0);
            if (pTVar12 != (Text *)0x0) {
              (*(pTVar12->klass->vtable).set_text.methodPtr)(pTVar12);
              this_01 = (avatarSeller->fields).removeButton;
              if (((this_01 != (Button *)0x0) &&
                  (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                  apMStack_2[0] != (MvAvatarMetaData *)0x0)) &&
                 ((this_03 != (GameObject *)0x0 &&
                  ((UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_03,(apMStack_2[0]->fields).isOnMarketPlace,(MethodInfo *)0x0),
                   apMStack_2[0] != (MvAvatarMetaData *)0x0 &&
                   (this_02 = (avatarSeller->fields).nameField, this_02 != (InputField *)0x0)))))) {
                UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                          (this_02,(apMStack_2[0]->fields).name,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Set(String) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_Set
               (AvatarEditModeBodyController *this,String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryAnimationHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
  if (((pMVar1 != (MVBody *)0x0) &&
      (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
     (this_00 = (pMVar2->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_Play(this_00,animation,(MethodInfo *)0x0);
    pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
    pMVar3 = 
    ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
    ;
    if ((pMVar1 != (MVBody *)0x0) &&
       (this_01 = (pMVar1->fields)._._._.gameObject, this_01 != (GameObject *)0x0)) {
      if ((
          ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                     );
      }
      p_Var8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_4
                         (this_01,0,((pMVar3->field7_0x38).rgctx_data)->method);
      uVar4 = 0;
      if (p_Var8 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var10 = p_Var8->vector;
        do {
          if ((int)p_Var8->max_length <= (int)uVar4) {
            return;
          }
          if ((uint)p_Var8->max_length <= uVar4) {
code_?:
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*pp_Var10 != (_Il2CppFullySharedGenericType *)0x0) {
            p_Var3 = (*pp_Var10)->klass;
            bVar6 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
            if ((bVar6 <= (p_Var3->_1).naturalAligment) &&
               ((p_Var3->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
                (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
              this_02 = (AccessoryAnimationHandler *)*pp_Var10;
              bVar6 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
              if (((this_02->klass->_1).naturalAligment < bVar6) ||
                 ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
                  (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
                FUN_?(this_02,TypeInfo__AccessoryAnimationHandler);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              AccessoryAnimationHandler::AccessoryAnimationHandler_SetAllAnimationToLooping
                        (this_02,(MethodInfo *)0x0);
            }
          }
          if ((uint)p_Var8->max_length <= uVar4) goto code_?;
          p_Var4 = *pp_Var10;
          if (p_Var4 == (_Il2CppFullySharedGenericType *)0x0) break;
          (*(code *)p_Var4->klass[1]._0.name)(p_Var4,animation,p_Var4->klass[1]._0.namespaze);
          uVar4 = uVar4 + 1;
          pp_Var10 = pp_Var10 + 1;
        } while( true );
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCurrentBody(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
               (AvatarEditModeBodyController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVBody *)0x0) {
    if (((pMVar1->fields).forceHidden == 0) && ((pMVar1->fields).shadowVisible != 0)) {
      (pMVar1->fields).shadowVisible = 0;
      MVBody::MVBody_UpdateVisibility(pMVar1,(MethodInfo *)0x0);
    }
    pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
    if (pMVar1 != (MVBody *)0x0) {
      if (((pMVar1->fields).forceHidden == 0) && ((pMVar1->fields).visible != 0)) {
        (pMVar1->fields).visible = 0;
        MVBody::MVBody_UpdateVisibility(pMVar1,(MethodInfo *)0x0);
      }
      pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
      if (pMVar1 != (MVBody *)0x0) {
        QStack_2.x = (this->fields).hidePos.x;
        QStack_2.y = (this->fields).hidePos.y;
        QStack_2.z = (this->fields).hidePos.z;
        (*(pMVar1->klass->vtable).set_WorldPosition.methodPtr)(pMVar1);
        pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
        this_00 = (this->fields).bodySpawnPoint;
        if ((this_00 != (MVSpawnPointRed *)0x0) &&
           (pQVar3 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                               (&QStack_2,(MVWorldObjectClient *)this_00,(MethodInfo *)0x0),
           pMVar1 != (MVBody *)0x0)) {
          QStack_2.x = pQVar3->x;
          QStack_2.y = pQVar3->y;
          QStack_2.z = pQVar3->z;
          QStack_2.w = pQVar3->w;
          MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                    ((MVWorldObjectClient *)pMVar1,&QStack_2,(MethodInfo *)0x0);
          (this->fields).currentBodyIndex = index;
          pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
          if (pMVar1 != (MVBody *)0x0) {
            QStack_2.x = (this->fields).displayPos.x;
            QStack_2.y = (this->fields).displayPos.y;
            QStack_2.z = (this->fields).displayPos.z;
            (*(pMVar1->klass->vtable).set_WorldPosition.methodPtr)(pMVar1);
            pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
            if (pMVar1 != (MVBody *)0x0) {
              QStack_2.x = (this->fields).displayRotation.x;
              QStack_2.y = (this->fields).displayRotation.y;
              QStack_2.z = (this->fields).displayRotation.z;
              QStack_2.w = (this->fields).displayRotation.w;
              MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                        ((MVWorldObjectClient *)pMVar1,&QStack_2,(MethodInfo *)0x0);
              pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
              if (pMVar1 != (MVBody *)0x0) {
                if (((pMVar1->fields).forceHidden == 0) && ((pMVar1->fields).visible != 1)) {
                  (pMVar1->fields).visible = 1;
                  MVBody::MVBody_UpdateVisibility(pMVar1,(MethodInfo *)0x0);
                }
                pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
                if (pMVar1 != (MVBody *)0x0) {
                  t = (pMVar1->fields)._._._.transform;
                  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                            (t,1,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pGVar4 = (this->fields).publishAvatarBtn;
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pGVar4 != (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if ((pMVar5 != (MVGameControllerBase *)0x0) &&
                         (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) {
                        pMVar7 = (pMVar6->fields)._AvatarMetaDataWoMap_k__BackingField;
                        pMVar1 = AvatarEditModeBodyController_get_CurrentBody
                                           (this,(MethodInfo *)0x0);
                        if ((pMVar1 != (MVBody *)0x0) &&
                           (key = (pMVar1->fields)._._._._.id,
                           pMVar7 != (MvAvatarMetaDataWoMap *)0x0)) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          this_01 = (pMVar7->fields).avatarWOIDAvatarMetaData;
                          if (this_01 !=
                              (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::
                            Dictionary_2_System_Int32_System_Object__TryGetValue
                                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                                       (Object **)&stack0x00000008,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                                      );
                            return;
                          }
                        }
                      }
                      FUN_?();
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetCurrentBodyByWoId(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetCurrentBodyByWoId
               (AvatarEditModeBodyController *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  index = 0;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    lVar2 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)index) {
        return;
      }
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar4 = (pLVar1->fields)._items;
      if (pMVar4 == (MVBody__Array *)0x0) break;
      if ((uint)pMVar4->max_length <= index) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar5 = *(longlong *)((longlong)pMVar4->vector + lVar2 + -0x20);
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x10) == woId) {
        AvatarEditModeBodyController_SetCurrentBody(this,index,(MethodInfo *)0x0);
        AvatarSelectionController::AvatarSelectionController_set_CurrentlySelectedSlotIndex
                  (index,(MethodInfo *)0x0);
        return;
      }
      index = index + 1;
      lVar2 = lVar2 + 8;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).publishAvatarBtn;
  pOStackX_8 = (Object *)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
        pMVar4 = (pMVar3->fields)._AvatarMetaDataWoMap_k__BackingField;
        pMVar5 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
        if ((pMVar5 != (MVBody *)0x0) &&
           (key = (pMVar5->fields)._._._._.id, pMVar4 != (MvAvatarMetaDataWoMap *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pMVar4->fields).avatarWOIDAvatarMetaData;
          if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
            if (pOStackX_8 == (Object *)0x0) {
              return;
            }
            pGVar1 = (this->fields).publishAvatarBtn;
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,*(bool *)((longlong)&pOStackX_8[2].klass + 5),(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}


/* Void SetPublishAvatarGO(GameObject) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetPublishAvatarGO
               (AvatarEditModeBodyController *this,GameObject *publishAvatarGO,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).publishAvatarBtn = publishAvatarGO;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).publishAvatarBtn >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0,method);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = (this->fields).publishAvatarBtn;
  pOStackX_8 = (Object *)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar6 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar6->fields)._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar7 != (MVGameControllerBase *)0x0) &&
         (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
        pMVar9 = (pMVar8->fields)._AvatarMetaDataWoMap_k__BackingField;
        pMVar10 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
        if ((pMVar10 != (MVBody *)0x0) &&
           (key = (pMVar10->fields)._._._._.id, pMVar9 != (MvAvatarMetaDataWoMap *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pMVar9->fields).avatarWOIDAvatarMetaData;
          if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
            if (pOStackX_8 == (Object *)0x0) {
              return;
            }
            pGVar6 = (this->fields).publishAvatarBtn;
            if (pGVar6 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,*(bool *)((longlong)&pOStackX_8[2].klass + 5),(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  return;
}


/* Void SetToNextAnimation() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetToNextAnimation
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    if ((this->fields).currentAnimationIndex < (pLVar1->fields)._size + -1) {
      uVar2 = (this->fields).currentAnimationIndex + 1;
    }
    else {
      uVar2 = 0;
    }
    (this->fields).currentAnimationIndex = uVar2;
    pLVar1 = (this->fields).animations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar4 = (pLVar1->fields)._items;
      if (pSVar4 != (String__Array *)0x0) {
        if ((uint)pSVar4->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        animationName = pSVar4->vector[(int)uVar2];
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AccessoryAnimationHandler);
          LOCK();
          UNLOCK();
          FUN_?(&
                        ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
        if (((pMVar5 != (MVBody *)0x0) &&
            (pMVar6 = (pMVar5->fields).bodyObject, pMVar6 != (MVBodyObject *)0x0)) &&
           (this_00 = (pMVar6->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
          BoneAnimation::BoneAnimation_Play(this_00,animationName,(MethodInfo *)0x0);
          pMVar5 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
          pMVar7 = 
          ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
          ;
          if ((pMVar5 != (MVBody *)0x0) &&
             (this_01 = (pMVar5->fields)._._._.gameObject, this_01 != (GameObject *)0x0)) {
            if ((
                ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(
                           ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                           );
            }
            p_Var11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponentsInChildren_4
                                (this_01,0,((pMVar7->field7_0x38).rgctx_data)->method);
            uVar2 = 0;
            if (p_Var11 != (_Il2CppFullySharedGenericType__Array *)0x0) {
              pp_Var12 = p_Var11->vector;
              do {
                if ((int)p_Var11->max_length <= (int)uVar2) {
                  return;
                }
                if ((uint)p_Var11->max_length <= uVar2) {
code_?:
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (*pp_Var12 != (_Il2CppFullySharedGenericType *)0x0) {
                  p_Var5 = (*pp_Var12)->klass;
                  bVar8 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
                  if ((bVar8 <= (p_Var5->_1).naturalAligment) &&
                     ((p_Var5->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
                      (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
                    this_02 = (AccessoryAnimationHandler *)*pp_Var12;
                    bVar8 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
                    if (((this_02->klass->_1).naturalAligment < bVar8) ||
                       ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
                        (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
                      FUN_?(this_02,TypeInfo__AccessoryAnimationHandler);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    AccessoryAnimationHandler::AccessoryAnimationHandler_SetAllAnimationToLooping
                              (this_02,(MethodInfo *)0x0);
                  }
                }
                if ((uint)p_Var11->max_length <= uVar2) goto code_?;
                p_Var6 = *pp_Var12;
                if (p_Var6 == (_Il2CppFullySharedGenericType *)0x0) break;
                (*(code *)p_Var6->klass[1]._0.name)
                          (p_Var6,animationName,p_Var6->klass[1]._0.namespaze);
                uVar2 = uVar2 + 1;
                pp_Var12 = pp_Var12 + 1;
              } while( true );
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TakeScreenshot() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_TakeScreenshot
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  this_01 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0 >> 0xc)
      ;
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UploadedImageData() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_UploadedImageData
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
                (pMVar2,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pMVar2->fields).operationRequests != (MVNetworkGame_OperationRequests *)0x0)) {
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <InitializedPurchasedAvatar>b__38_1(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__InitializedPurchasedAvatar_b__38_1
               (AvatarEditModeBodyController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
  if (x == (IAvatarSetBodyGroup *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup) {
        pVVar6 = &(pIVar3->vtable).SetBodyGroup + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup,0,pMVar1,
                         unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(x,pMVar1,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void <PurchaseAvatar>b__35_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__PurchaseAvatar_b__35_0
               (AvatarEditModeBodyController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController__OnPurchaseAvatarConfirmation_bool__ConfirmationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Confirm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_Avatar_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Purchase_Avatar_,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
  UnityAction_2_System_Boolean_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__OnPurchaseAvatarConfirmation_bool__ConfirmationPopup_
             ,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Confirm,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0);
  if (x == (IAvatarSetBodyGroup *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup) {
        pVVar6 = &(pIVar3->vtable).SetBodyGroup + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup,0,pMVar1,
                         unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(x,pMVar1,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* AvatarEditModeBodyController() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController__ctor
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dead);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Swim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVBody_ *)FUN_?(TypeInfo__System__Collections__Generic__List<MVBody>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVBody>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).bodies = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).bodies >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (List_1_System_String_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pSVar6 = StringLiteral_Idle;
  pMVar7 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  if (this_01 != (List_1_System_String_ *)0x0) {
    piVar8 = &(this_01->fields)._version;
    *piVar8 = *piVar8 + 1;
    pSVar9 = (this_01->fields)._items;
    if (pSVar9 != (String__Array *)0x0) {
      uVar2 = (this_01->fields)._size;
      if (uVar2 < (uint)pSVar9->max_length) {
        (this_01->fields)._size = uVar2 + 1;
        FUN_?(pSVar9,(longlong)(int)uVar2,pSVar6);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_01,(Object *)pSVar6,
                   pMVar7->klass->rgctx_data[0xe].method);
      }
      pSVar6 = StringLiteral_Jump;
      pMVar7 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      piVar8 = &(this_01->fields)._version;
      *piVar8 = *piVar8 + 1;
      pSVar9 = (this_01->fields)._items;
      if (pSVar9 != (String__Array *)0x0) {
        uVar2 = (this_01->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (this_01->fields)._size = uVar2 + 1;
          FUN_?(pSVar9,(longlong)(int)uVar2,pSVar6);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_01,(Object *)pSVar6,
                     pMVar7->klass->rgctx_data[0xe].method);
        }
        pSVar6 = StringLiteral_Dead;
        pMVar7 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        piVar8 = &(this_01->fields)._version;
        *piVar8 = *piVar8 + 1;
        pSVar9 = (this_01->fields)._items;
        if (pSVar9 != (String__Array *)0x0) {
          uVar2 = (this_01->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (this_01->fields)._size = uVar2 + 1;
            FUN_?(pSVar9,(longlong)(int)uVar2,pSVar6);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_01,(Object *)pSVar6,
                       pMVar7->klass->rgctx_data[0xe].method);
          }
          pSVar6 = StringLiteral_Swim;
          pMVar7 = 
          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
          piVar8 = &(this_01->fields)._version;
          *piVar8 = *piVar8 + 1;
          pSVar9 = (this_01->fields)._items;
          if (pSVar9 != (String__Array *)0x0) {
            uVar2 = (this_01->fields)._size;
            if (uVar2 < (uint)pSVar9->max_length) {
              (this_01->fields)._size = uVar2 + 1;
              FUN_?(pSVar9,(longlong)(int)uVar2,pSVar6);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_01,(Object *)pSVar6,
                         pMVar7->klass->rgctx_data[0xe].method);
            }
            pSVar6 = StringLiteral_Walk;
            pMVar7 = 
            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
            piVar8 = &(this_01->fields)._version;
            *piVar8 = *piVar8 + 1;
            pSVar9 = (this_01->fields)._items;
            if (pSVar9 != (String__Array *)0x0) {
              uVar2 = (this_01->fields)._size;
              if (uVar2 < (uint)pSVar9->max_length) {
                (this_01->fields)._size = uVar2 + 1;
                FUN_?(pSVar9,(longlong)(int)uVar2,pSVar6);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)this_01,(Object *)pSVar6,
                           pMVar7->klass->rgctx_data[0xe].method);
              }
              bVar1 = iRam_? != 0;
              (this->fields).animations = this_01;
              if (bVar1) {
                uVar2 = (uint)((ulonglong)&(this->fields).animations >> 0xc);
                lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                  puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                  LOCK();
                  bVar1 = uVar4 == *puVar5;
                  if (bVar1) {
                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar1);
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVBody get_CurrentBody() */

MVBody * Assembly-CSharp.dll::AvatarEditModeBodyController::
         AvatarEditModeBodyController_get_CurrentBody
                   (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    uVar2 = (this->fields).currentBodyIndex;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVBody *)(*pcVar3)();
      return pMVar4;
    }
    pMVar5 = (pLVar1->fields)._items;
    if (pMVar5 != (MVBody__Array *)0x0) {
      if (uVar2 < (uint)pMVar5->max_length) {
        return pMVar5->vector[(int)uVar2];
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVBody *)(*pcVar3)();
      return pMVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVBody *)(*pcVar3)();
  return pMVar4;
}

