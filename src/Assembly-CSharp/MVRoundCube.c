
/* Void Destroy() */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_Destroy(MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld == 0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pEVar2 = (pMVar1->fields).OnResetWorldDone;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar4 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnResetWorldDone = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar2 = (EventHandler_1_EventArgs_ *)
                FUN_?(pDVar3,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar2 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar1->fields).OnResetWorldDone = pEVar2;
      pEVar4 = TypeInfo__System__EventHandler<System::EventArgs>;
      lVar6 = FUN_?(pDVar3,TypeInfo__System__EventHandler<System::EventArgs>);
      if (lVar6 == 0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar1->fields).OnResetWorldDone >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar11 != (MVGameControllerBase *)0x0) &&
        (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) &&
       (pWVar13 = (pMVar12->fields)._WinningConditionManager_k__BackingField,
       pWVar13 != (WinningConditionManager *)0x0)) {
      pOVar14 = MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_GetSingletonWinnerConditionByType
                          (pWVar13,
                           TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                          );
      if (pOVar14 == (Object *)0x0) {
        uVar15 = func_?(&TypeInfo__System__Exception);
        this_01 = (Exception *)func_?(uVar15);
        message = (String *)func_?(&StringLiteral_Couldn_t_find_TimeLimit_winning_);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
        uVar15 = func_?(&MethodInfo__MVRoundCube__Destroy__);
        FUN_?(this_01,uVar15);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar12 != (MVNetworkGame *)0x0) &&
         (pWVar13 = (pMVar12->fields)._WinningConditionManager_k__BackingField,
         pWVar13 != (WinningConditionManager *)0x0)) {
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                  (pWVar13,*(int32_t *)((longlong)&pOVar14[1].klass + 4),(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 GetTimeLeft() */

int32_t Assembly-CSharp.dll::MVRoundCube::MVRoundCube_GetTimeLeft
                  (MVRoundCube *this,MethodInfo *method)

{
  iVar1 = MVRoundCube_get_DurationInMilliseconds(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
       pMVar5 != (MVNetworkGameStateListener *)0x0)) {
      iVar6 = ((pMVar5->fields).startTime - iVar4) + iVar1;
      iVar1 = 0;
      if (-1 < iVar6) {
        iVar1 = iVar6;
      }
      return iVar1;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar1 = (*pcVar7)();
  return iVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_Initialize(MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  TimeLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeLimitClient>_System__Object____
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._8_8_ = &UNK_?;
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  auStack_1._8_8_ = &UNK_?;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pEVar3 = (pMVar2->fields).OnResetWorldDone;
    auStack_1._8_8_ = &UNK_?;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
    auStack_1._8_8_ = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)this,
               MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_,
               (MethodInfo *)0x0);
    auStack_1._8_8_ = &UNK_?;
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pEVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pEVar6 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar5 == (Delegate *)0x0) {
      (pMVar2->fields).OnResetWorldDone = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      auStack_1._8_8_ = &UNK_?;
      pEVar3 = (EventHandler_1_EventArgs_ *)
                FUN_?(pDVar5,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar3 == (EventHandler_1_EventArgs_ *)0x0) {
        auStack_1._8_8_ = &UNK_?;
        FUN_?(pDVar5,pEVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pMVar2->fields).OnResetWorldDone = pEVar3;
      pEVar6 = TypeInfo__System__EventHandler<System::EventArgs>;
      auStack_1._8_8_ = &UNK_?;
      lVar8 = FUN_?(pDVar5,TypeInfo__System__EventHandler<System::EventArgs>);
      if (lVar8 == 0) {
        auStack_1._8_8_ = &UNK_?;
        FUN_?(pDVar5,pEVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar2->fields).OnResetWorldDone >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    if (cRam_? == '\0') {
      auStack_1._8_8_ = &UNK_?;
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar14 != (MVGameControllerBase *)0x0) &&
       (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) {
      this_00 = (pMVar15->fields)._WinningConditionManager_k__BackingField;
      auStack_1._8_8_ = &UNK_?;
      args = (Object__Array *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                       (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
      if (this_00 != (WinningConditionManager *)0x0) {
        auStack_1._8_8_ = &UNK_?;
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                  (this_00,args,
                   TimeLimitClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeLimitClient>_System__Object____
                  );
        radius = TypeRef__System__Activator__T._0_4_;
        pGVar16 = (this->fields)._._.gameObject;
        (this->fields).initializedInWorld = 1;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CullingSubscriberBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>)
          ;
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar17 = (*(this->klass->vtable).get_HasVisualsInPlaymode.methodPtr)
                           (this,(this->klass->vtable).get_HasVisualsInPlaymode.method);
        if (cVar17 == '\0') {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
              (IEditModeUI *)0x0) {
            return;
          }
        }
        bVar13 = iRam_? != 0;
        (this->fields)._.lodGameObject = pGVar16;
        if (bVar13) {
          uVar9 = (uint)((ulonglong)&(this->fields)._.lodGameObject >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        pUVar18 = (this->fields)._._.PositionChanged;
        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__MVLogicObject__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar18,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pUVar19 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pDVar5 == (Delegate *)0x0) {
          (this->fields)._._.PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        }
        else {
          pUVar18 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                    FUN_?(pDVar5,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          if (pUVar18 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            FUN_?(pDVar5,pUVar19);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (this->fields)._._.PositionChanged = pUVar18;
          pUVar19 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          lVar8 = FUN_?(pDVar5,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
          if (lVar8 == 0) {
            FUN_?(pDVar5,pUVar19);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&(this->fields)._._.PositionChanged >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        puVar20 = (undefined8 *)
                  (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                            (auStack_1,this,(this->klass->vtable).get_WorldPosition_1.method);
        uVar21 = *puVar20;
        uVar22 = *(undefined4 *)(puVar20 + 1);
        callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                );
        FUN_?(callback,this);
        this_01 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
        CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_01,callback,(MethodInfo *)0x0);
        auStack_1._8_4_ = uVar22;
        auStack_1._0_8_ = uVar21;
        CullingSubscriberBase::CullingSubscriberBase_Setup
                  (this_01,radius,(Vector3 *)auStack_1,(MethodInfo *)0x0);
        bVar13 = iRam_? != 0;
        (this->fields)._.cullingSubscriberBase = this_01;
        if (bVar13) {
          uVar9 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        return;
      }
    }
  }
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String MakeTimeIntoText(Int32) */

String * Assembly-CSharp.dll::MVRoundCube::MVRoundCube_MakeTimeIntoText
                   (MVRoundCube *this,int32_t time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  fVar2 = (float)(int)((float)time / _UNK_?) / _UNK_?;
  value_01 = (int)((float)time / _UNK_?) % 0x3c;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar3 = (double)func_?((double)fVar2);
  value_00 = (int32_t)dVar3;
  if (0x3b < value_00) {
    value = FUN_?((float)value_00 / _UNK_?);
    iVar4 = (int)((ulonglong)((longlong)value_00 * 0x77777777) >> 0x20) - value_00;
    value_00 = value_00 + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * 0x3c;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    RVar5._0_12_ = ZEXT812(0);
    RVar5._12_4_ = 0;
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_6[0] = RVar5;
    pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar1,pSVar7,::StringLiteral__,(MethodInfo *)0x0);
  }
  pSVar7 = ::StringLiteral__;
  if (value_01 < 10) {
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_6[0] = (ReadOnlySpan_1_Char_)ZEXT816(0);
  pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value_01,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar7,pSVar8,(MethodInfo *)0x0);
  pSVar7 = ::StringLiteral__;
  if (value_00 < 10) {
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,StringLiteral__0,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_6[0] = (ReadOnlySpan_1_Char_)ZEXT816(0);
  str1 = mscorlib.dll::System::Number::Number_FormatInt32
                   (value_00,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_4(pSVar7,str1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_6
                     (pSVar1,pSVar7,::StringLiteral__,pSVar8,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void OnResetWorldDone(Object, EventArgs) */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube_OnResetWorldDone
               (MVRoundCube *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        TimeLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeLimitClient>__
                       );
    if (pOVar3 != (Object *)0x0) {
      return;
    }
    uVar4 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Couldn_t_find_TimeLimit_winning_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__MVRoundCube__OnResetWorldDone_System__Object__System__EventArgs_
                               );
    FUN_?(this_01,uVar4);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVRoundCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRoundCube::MVRoundCube__ctor
               (MVRoundCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvRoundCubePrefab,worldObjects,
               (MethodInfo *)0x0);
    (this->fields)._._.interactionFlags =
         (this->fields)._._.interactionFlags & 0xffffffffffffdfffU | 0x8000;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 get_DurationInMilliseconds() */

int32_t Assembly-CSharp.dll::MVRoundCube::MVRoundCube_get_DurationInMilliseconds
                  (MVRoundCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_interval);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_interval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(int *)&pOVar1[1].klass * 1000;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

