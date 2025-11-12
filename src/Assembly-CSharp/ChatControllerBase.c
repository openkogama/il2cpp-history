
/* Void AddAdminMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddAdminMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = 5;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,pOVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pOVar1 = (Object *)0x0;
  if (pOVar3 != (Object *)0x0) {
    if (pOVar3->klass == pORam0000000182db2460) {
      pOVar1 = pOVar3;
    }
    if (pOVar1 == (Object *)0x0) {
      FUN_?(pOVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  PStack_4._arg0 = *(Object **)&(this->fields).systemMessageColor;
  PStack_4._arg1 = *(Object **)&(this->fields).systemMessageColor.b;
  uVar5 = FUN_?(&PStack_4);
  color.r = 0;
  color.g = 0;
  color.b = 0;
  color.a = 0;
  color.rgba = uVar5;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  arg0 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
  pSVar6 = StringLiteral__color___0___1___color_;
  PStack_4._arg0 = (Object *)0x0;
  PStack_4._arg1 = (Object *)0x0;
  PStack_4._arg2 = (Object *)0x0;
  PStack_4._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_4,(Object *)arg0,pOVar1,(MethodInfo *)0x0);
  PStack_7._arg0 = PStack_4._arg0;
  PStack_7._arg1 = PStack_4._arg1;
  PStack_7._arg2 = PStack_4._arg2;
  PStack_7._args = PStack_4._args;
  pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar6,&PStack_7,(MethodInfo *)0x0);
  (*(this->klass->vtable).AddLine.methodPtr)(this,pSVar6,(this->klass->vtable).AddLine.method);
  return;
}


/* Void AddChatLine(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddChatLine
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0____1______color__colo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_10 = 5;
  pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    lVar3 = lRam_?;
    pOVar1 = (Object *)0x0;
    pOVar4 = pOVar1;
    if (pOVar2 != (Object *)0x0) {
      if (pOVar2->klass == pORam0000000182db2460) {
        pOVar4 = pOVar2;
      }
      if (pOVar4 == (Object *)0x0) {
        FUN_?(pOVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar1 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
      }
    }
    else {
      pOVar1 = (Object *)((ulonglong)uStackX_11 << 8);
    }
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      key = *(int32_t *)&pOVar1[1].klass;
      fVar10 = (this->fields).chatMessageDefaultNameColor.r;
      fVar11 = (this->fields).chatMessageDefaultNameColor.g;
      fVar12 = (this->fields).chatMessageDefaultNameColor.b;
      fVar13 = (this->fields).chatMessageDefaultNameColor.a;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar14 != (MVGameControllerBase *)0x0) &&
          (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
         (pMVar16 = (pMVar15->fields).playerContainer, pMVar16 != (MVPlayerContainer *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar16->fields).players;
        if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                              );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar14 != (MVGameControllerBase *)0x0) &&
              (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
             (pMVar17 = (pMVar15->fields).teamManager, pMVar17 != (MVTeamManager *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar18 = (pMVar17->fields).teams;
            if (pDVar18 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
              if (1 < (pDVar18->fields)._count - (pDVar18->fields)._freeCount) {
                if (pOVar1 == (Object *)0x0) goto code_?;
                team = *(MVTeam__Enum *)((longlong)&pOVar1[8].klass + 4);
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pCVar19 = Styles::Styles_GetTeamColor((Color *)auStack_20,team,0,(MethodInfo *)0x0);
                fVar10 = pCVar19->r;
                fVar11 = pCVar19->g;
                fVar12 = pCVar19->b;
                fVar13 = pCVar19->a;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar14 != (MVGameControllerBase *)0x0) &&
                  (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
                 ((pOVar1 != (Object *)0x0 &&
                  (this_01 = (pMVar15->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0
                  )))) {
                pFVar21 = FriendList::FriendList_GetFriendByProfileID
                                    (this_01,*(int32_t *)&pOVar1[5].monitor,(MethodInfo *)0x0);
                pSVar22 = StringLiteral__color___0____1______color__colo;
                if ((pFVar21 != (Friend *)0x0) && ((pFVar21->fields).status == 2)) {
                  fVar10 = (this->fields).friendNameColor.r;
                  fVar11 = (this->fields).friendNameColor.g;
                  fVar12 = (this->fields).friendNameColor.b;
                  fVar13 = (this->fields).friendNameColor.a;
                }
                args = (Object__Array *)FUN_?(TypeInfo__System__Object);
                auStack_20._4_4_ = fVar11;
                auStack_20._0_4_ = fVar10;
                uStack_23 = (Object *)CONCAT44(fVar13,fVar12);
                uVar6 = FUN_?(auStack_20);
                color_00.r = 0;
                color_00.g = 0;
                color_00.b = 0;
                color_00.a = 0;
                color_00.rgba = uVar6;
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pSVar24 = Styles::Styles_ColorToHex(color_00,(MethodInfo *)0x0);
                if (args != (Object__Array *)0x0) {
                  if ((pSVar24 != (String *)0x0) &&
                     (lVar3 = FUN_?(pSVar24,(args->klass->_0).element_class), lVar3 == 0))
                  {
                    uVar25 = FUN_?();
                    FUN_?(uVar25,0);
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FUN_?(args,0,pSVar24);
                  if (pOVar1[7].klass != (Object__Class *)0x0) {
                    pcVar26 = ((pOVar1[7].klass)->_0).namespaze;
                    if ((pcVar26 != (char *)0x0) &&
                       (lVar3 = FUN_?(pcVar26,(args->klass->_0).element_class), lVar3 == 0)
                       ) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FUN_?(args,1,pcVar26);
                    auStack_20 = *(undefined1 (*) [8])&(this->fields).chatMessageColor;
                    uStack_23 = *(Object **)&(this->fields).chatMessageColor.b;
                    uVar6 = FUN_?(auStack_20);
                    color.r = 0;
                    color.g = 0;
                    color.b = 0;
                    color.a = 0;
                    color.rgba = uVar6;
                    pSVar24 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
                    if ((pSVar24 != (String *)0x0) &&
                       (lVar3 = FUN_?(pSVar24,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FUN_?(args,2,pSVar24);
                    if ((pOVar4 != (Object *)0x0) &&
                       (lVar3 = FUN_?(pOVar4,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FUN_?(args,3);
                    auStack_20 = (undefined1  [8])0x0;
                    uStack_23 = (Object *)0x0;
                    pOStack_27 = (Object *)0x0;
                    pOStack_28 = (Object__Array *)0x0;
                    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                              ((ParamsArray *)auStack_20,args,(MethodInfo *)0x0);
                    PStack_29._arg0 = (Object *)auStack_20;
                    PStack_29._arg1 = uStack_23;
                    PStack_29._arg2 = pOStack_27;
                    PStack_29._args = pOStack_28;
                    pSVar22 = mscorlib.dll::System::String::String_FormatHelper
                                        ((IFormatProvider *)0x0,pSVar22,&PStack_29,(MethodInfo *)0x0
                                        );
                    (*(this->klass->vtable).AddLine.methodPtr)
                              (this,pSVar22,(this->klass->vtable).AddLine.method);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddLine(String) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddLine
               (ChatControllerBase *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).lines;
  if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    if ((pQVar1->fields)._size < 0x32) {
      if (cRam_? == '\0') {
        FUN_?(&
                      UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      original = (this->fields).consoleLinePrefab;
      pTVar2 = (Transform *)(this->fields)._ContentPanel_k__BackingField;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)original,pTVar2,0,
                           UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                          );
      pQVar1 = (this->fields).lines;
      if ((pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
          Queue_1_System_Object__Enqueue
                    ((Queue_1_System_Object_ *)pQVar1,(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                    ), this_00 != (Component *)0x0)) {
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*this_00->klass[4]._0.gc_desc)(this_00,text,this_00->klass[4]._0.name);
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar1 = (this->fields).lines;
      if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
        this_00 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar1,
                             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                            );
        pQVar1 = (this->fields).lines;
        if (((pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) &&
            (mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
             Queue_1_System_Object__Enqueue
                       ((Queue_1_System_Object_ *)pQVar1,(Object *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                       ), this_00 != (Component *)0x0)) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar2,(Transform *)(this->fields)._ContentPanel_k__BackingField,0,
                     (MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar3);
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddWarningMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_AddWarningMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = 5;
  key = (Object *)FUN_?(uRam_?,auStackX_10);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pSVar1 != (String *)0x0) {
      pSVar2 = (String *)0x0;
      if (pSVar1->klass == pSRam0000000182db2460) {
        pSVar2 = pSVar1;
      }
      if (pSVar2 != (String *)0x0) {
        iVar3 = (pSVar2->fields)._stringLength;
        if (0x600 < iVar3) {
          if (iVar3 + -0x600 < 0) {
            uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
            this_00 = (ArgumentOutOfRangeException *)func_?(uVar4);
            pSVar1 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
            pSVar2 = (String *)func_?(&StringLiteral_length);
            mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                      (this_00,pSVar2,pSVar1,(MethodInfo *)0x0);
            uVar4 = func_?(&MethodInfo__System__String__Substring_int__int_);
            FUN_?(this_00,uVar4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pSVar2 = mscorlib.dll::System::String::String_InternalSubString
                             (pSVar2,0,0x600,(MethodInfo *)0x0);
        }
        PStack_6._arg0 = *(Object **)&(this->fields).warningColor;
        PStack_6._arg1 = *(Object **)&(this->fields).warningColor.b;
        uVar7 = FUN_?(&PStack_6);
        color.r = 0;
        color.g = 0;
        color.b = 0;
        color.a = 0;
        color.rgba = uVar7;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        arg0 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
        pSVar1 = StringLiteral__color___0___1___color_;
        PStack_6._arg0 = (Object *)0x0;
        PStack_6._arg1 = (Object *)0x0;
        PStack_6._arg2 = (Object *)0x0;
        PStack_6._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_6,(Object *)arg0,(Object *)pSVar2,(MethodInfo *)0x0);
        PStack_8._arg0 = PStack_6._arg0;
        PStack_8._arg1 = PStack_6._arg1;
        PStack_8._arg2 = PStack_6._arg2;
        PStack_8._args = PStack_6._args;
        pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar1,&PStack_8,(MethodInfo *)0x0);
        (*(this->klass->vtable).AddLine.methodPtr)(this,pSVar1,(this->klass->vtable).AddLine.method)
        ;
        return;
      }
      FUN_?(pSVar1);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_Awake
               (ChatControllerBase *this,MethodInfo *method)

{
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX == 0) goto code_?;
  if (*(int *)(extraout_RAX + 0x58) == 0) {
    (this->fields).chatLocked = 1;
  }
  else {
    if (*(longlong *)(extraout_RAX + 0x70) == 0) goto code_?;
    bVar1 = *(bool *)(*(longlong *)(extraout_RAX + 0x70) + 0x25);
    (this->fields).chatLocked = bVar1;
    if (bVar1 == 0) {
      this_00 = (this->fields)._InputAreaRoot_k__BackingField;
      if ((this_00 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        this_01 = (this->fields)._EnterChatButton_k__BackingField;
        if ((this_01 != (ConsoleDragAndTapHandler *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(this->klass->vtable).DoAwake.methodPtr)(this,(this->klass->vtable).DoAwake.method);
          return;
        }
      }
      goto code_?;
    }
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar2 == (GameObject *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,0);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String FormatSayChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_FormatSayChatMessage
                   (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__says_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0____1_____color__color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_10 = 5;
  pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    lVar3 = lRam_?;
    pOVar1 = (Object *)0x0;
    pOVar4 = pOVar1;
    if (pOVar2 != (Object *)0x0) {
      if (pOVar2->klass == pORam0000000182db2460) {
        pOVar4 = pOVar2;
      }
      if (pOVar4 == (Object *)0x0) {
        FUN_?(pOVar2);
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
    }
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar1 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
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
      }
    }
    else {
      pOVar1 = (Object *)((ulonglong)uStackX_11 << 8);
    }
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pSVar6 = StringLiteral__says_;
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
      key = *(int32_t *)&pOVar1[1].klass;
      fVar11 = (this->fields).chatMessageDefaultNameColor.r;
      fVar12 = (this->fields).chatMessageDefaultNameColor.g;
      fVar13 = (this->fields).chatMessageDefaultNameColor.b;
      fVar14 = (this->fields).chatMessageDefaultNameColor.a;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar15 != (MVGameControllerBase *)0x0) &&
          (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
         (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar17->fields).players;
        if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                              );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar15 != (MVGameControllerBase *)0x0) &&
              (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
             (pMVar18 = (pMVar16->fields).teamManager, pMVar18 != (MVTeamManager *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar19 = (pMVar18->fields).teams;
            if (pDVar19 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
              if (1 < (pDVar19->fields)._count - (pDVar19->fields)._freeCount) {
                if (pOVar1 == (Object *)0x0) goto code_?;
                team = *(MVTeam__Enum *)((longlong)&pOVar1[8].klass + 4);
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pCVar20 = Styles::Styles_GetTeamColor((Color *)auStack_21,team,0,(MethodInfo *)0x0);
                fVar11 = pCVar20->r;
                fVar12 = pCVar20->g;
                fVar13 = pCVar20->b;
                fVar14 = pCVar20->a;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar15 != (MVGameControllerBase *)0x0) &&
                  (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
                 ((pOVar1 != (Object *)0x0 &&
                  (this_01 = (pMVar16->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0
                  )))) {
                pFVar22 = FriendList::FriendList_GetFriendByProfileID
                                    (this_01,*(int32_t *)&pOVar1[5].monitor,(MethodInfo *)0x0);
                if ((pFVar22 != (Friend *)0x0) && ((pFVar22->fields).status == 2)) {
                  fVar11 = (this->fields).friendNameColor.r;
                  fVar12 = (this->fields).friendNameColor.g;
                  fVar13 = (this->fields).friendNameColor.b;
                  fVar14 = (this->fields).friendNameColor.a;
                }
                args = (Object__Array *)FUN_?(TypeInfo__System__Object);
                auStack_21._4_4_ = fVar12;
                auStack_21._0_4_ = fVar11;
                uStack_23 = (Object *)CONCAT44(fVar14,fVar13);
                uVar7 = FUN_?(auStack_21);
                color_01.r = 0;
                color_01.g = 0;
                color_01.b = 0;
                color_01.a = 0;
                color_01.rgba = uVar7;
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pSVar24 = Styles::Styles_ColorToHex(color_01,(MethodInfo *)0x0);
                if (args != (Object__Array *)0x0) {
                  if ((pSVar24 != (String *)0x0) &&
                     (lVar3 = FUN_?(pSVar24,(args->klass->_0).element_class), lVar3 == 0))
                  {
                    uVar25 = FUN_?();
                    FUN_?(uVar25,0);
                    pcVar5 = (code *)swi(3);
                    pSVar6 = (String *)(*pcVar5)();
                    return pSVar6;
                  }
                  FUN_?(args,0,pSVar24);
                  if (pOVar1[7].klass != (Object__Class *)0x0) {
                    pcVar26 = ((pOVar1[7].klass)->_0).namespaze;
                    if ((pcVar26 != (char *)0x0) &&
                       (lVar3 = FUN_?(pcVar26,(args->klass->_0).element_class), lVar3 == 0)
                       ) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,1,pcVar26);
                    auStack_21 = *(undefined1 (*) [8])&(this->fields).sayColor;
                    uStack_23 = *(Object **)&(this->fields).sayColor.b;
                    uVar7 = FUN_?(auStack_21);
                    color.r = 0;
                    color.g = 0;
                    color.b = 0;
                    color.a = 0;
                    color.rgba = uVar7;
                    pSVar24 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
                    if ((pSVar24 != (String *)0x0) &&
                       (lVar3 = FUN_?(pSVar24,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,2,pSVar24);
                    if ((pSVar6 != (String *)0x0) &&
                       (lVar3 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,3,pSVar6);
                    auStack_21 = *(undefined1 (*) [8])&(this->fields).chatMessageColor;
                    uStack_23 = *(Object **)&(this->fields).chatMessageColor.b;
                    uVar7 = FUN_?(auStack_21);
                    color_00.r = 0;
                    color_00.g = 0;
                    color_00.b = 0;
                    color_00.a = 0;
                    color_00.rgba = uVar7;
                    pSVar6 = Styles::Styles_ColorToHex(color_00,(MethodInfo *)0x0);
                    if ((pSVar6 != (String *)0x0) &&
                       (lVar3 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,4,pSVar6);
                    if ((pOVar4 != (Object *)0x0) &&
                       (lVar3 = FUN_?(pOVar4,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar25 = FUN_?();
                      FUN_?(uVar25,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,5);
                    pSVar6 = StringLiteral__color___0____1_____color__color;
                    auStack_21 = (undefined1  [8])0x0;
                    uStack_23 = (Object *)0x0;
                    pOStack_27 = (Object *)0x0;
                    pOStack_28 = (Object__Array *)0x0;
                    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                              ((ParamsArray *)auStack_21,args,(MethodInfo *)0x0);
                    PStack_29._arg0 = (Object *)auStack_21;
                    PStack_29._arg1 = uStack_23;
                    PStack_29._arg2 = pOStack_27;
                    PStack_29._args = pOStack_28;
                    pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                                        ((IFormatProvider *)0x0,pSVar6,&PStack_29,(MethodInfo *)0x0
                                        );
                    return pSVar6;
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* String FormatTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

String * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_FormatTeamChatMessage
                   (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Team_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0____1_____color__color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_10 = 5;
  pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    lVar3 = lRam_?;
    pOVar1 = (Object *)0x0;
    pOVar4 = pOVar1;
    if (pOVar2 != (Object *)0x0) {
      if (pOVar2->klass == pORam0000000182db2460) {
        pOVar4 = pOVar2;
      }
      if (pOVar4 == (Object *)0x0) {
        FUN_?(pOVar2);
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
    }
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar1 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
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
      }
    }
    else {
      pOVar1 = (Object *)((ulonglong)uStackX_11 << 8);
    }
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pSVar6 = StringLiteral__Team_;
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
      key = *(int32_t *)&pOVar1[1].klass;
      fVar11 = (this->fields).chatMessageDefaultNameColor.r;
      fVar12 = (this->fields).chatMessageDefaultNameColor.g;
      fVar13 = (this->fields).chatMessageDefaultNameColor.b;
      fVar14 = (this->fields).chatMessageDefaultNameColor.a;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar15 != (MVGameControllerBase *)0x0) &&
          (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
         (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar17->fields).players;
        if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                              );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar15 != (MVGameControllerBase *)0x0) &&
              (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
             (pMVar18 = (pMVar16->fields).teamManager, pMVar18 != (MVTeamManager *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar19 = (pMVar18->fields).teams;
            if (pDVar19 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
              if (1 < (pDVar19->fields)._count - (pDVar19->fields)._freeCount) {
                if (pOVar1 == (Object *)0x0) goto code_?;
                team = *(MVTeam__Enum *)((longlong)&pOVar1[8].klass + 4);
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pCVar20 = Styles::Styles_GetTeamColor((Color *)auStack_21,team,0,(MethodInfo *)0x0);
                fVar11 = pCVar20->r;
                fVar12 = pCVar20->g;
                fVar13 = pCVar20->b;
                fVar14 = pCVar20->a;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar15 != (MVGameControllerBase *)0x0) &&
                  (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
                 ((pOVar1 != (Object *)0x0 &&
                  (this_01 = (pMVar16->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0
                  )))) {
                pFVar22 = FriendList::FriendList_GetFriendByProfileID
                                    (this_01,*(int32_t *)&pOVar1[5].monitor,(MethodInfo *)0x0);
                auStack_21._0_4_ = fVar11;
                auStack_21._4_4_ = fVar12;
                fVar23 = fVar13;
                fVar24 = fVar14;
                if ((pFVar22 != (Friend *)0x0) && ((pFVar22->fields).status == 2)) {
                  auStack_21._0_4_ = (this->fields).friendNameColor.r;
                  auStack_21._4_4_ = (this->fields).friendNameColor.g;
                  fVar23 = (this->fields).friendNameColor.b;
                  fVar24 = (this->fields).friendNameColor.a;
                }
                args = (Object__Array *)FUN_?(TypeInfo__System__Object);
                uStack_25 = (Object *)CONCAT44(fVar24,fVar23);
                uVar7 = FUN_?(auStack_21);
                color_01.r = 0;
                color_01.g = 0;
                color_01.b = 0;
                color_01.a = 0;
                color_01.rgba = uVar7;
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pSVar26 = Styles::Styles_ColorToHex(color_01,(MethodInfo *)0x0);
                if (args != (Object__Array *)0x0) {
                  if ((pSVar26 != (String *)0x0) &&
                     (lVar3 = FUN_?(pSVar26,(args->klass->_0).element_class), lVar3 == 0))
                  {
                    uVar27 = FUN_?();
                    FUN_?(uVar27,0);
                    pcVar5 = (code *)swi(3);
                    pSVar6 = (String *)(*pcVar5)();
                    return pSVar6;
                  }
                  FUN_?(args,0,pSVar26);
                  if (pOVar1[7].klass != (Object__Class *)0x0) {
                    pcVar28 = ((pOVar1[7].klass)->_0).namespaze;
                    if ((pcVar28 != (char *)0x0) &&
                       (lVar3 = FUN_?(pcVar28,(args->klass->_0).element_class), lVar3 == 0)
                       ) {
                      uVar27 = FUN_?();
                      FUN_?(uVar27,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,1,pcVar28);
                    auStack_21._4_4_ = fVar12;
                    auStack_21._0_4_ = fVar11;
                    uStack_25 = (Object *)CONCAT44(fVar14,fVar13);
                    uVar7 = FUN_?(auStack_21);
                    color.r = 0;
                    color.g = 0;
                    color.b = 0;
                    color.a = 0;
                    color.rgba = uVar7;
                    pSVar26 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
                    if ((pSVar26 != (String *)0x0) &&
                       (lVar3 = FUN_?(pSVar26,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar27 = FUN_?();
                      FUN_?(uVar27,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,2,pSVar26);
                    if ((pSVar6 != (String *)0x0) &&
                       (lVar3 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar27 = FUN_?();
                      FUN_?(uVar27,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,3,pSVar6);
                    auStack_21 = *(undefined1 (*) [8])&(this->fields).chatMessageColor;
                    uStack_25 = *(Object **)&(this->fields).chatMessageColor.b;
                    uVar7 = FUN_?(auStack_21);
                    color_00.r = 0;
                    color_00.g = 0;
                    color_00.b = 0;
                    color_00.a = 0;
                    color_00.rgba = uVar7;
                    pSVar6 = Styles::Styles_ColorToHex(color_00,(MethodInfo *)0x0);
                    if ((pSVar6 != (String *)0x0) &&
                       (lVar3 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar27 = FUN_?();
                      FUN_?(uVar27,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,4,pSVar6);
                    if ((pOVar4 != (Object *)0x0) &&
                       (lVar3 = FUN_?(pOVar4,(args->klass->_0).element_class), lVar3 == 0
                       )) {
                      uVar27 = FUN_?();
                      FUN_?(uVar27,0);
                      pcVar5 = (code *)swi(3);
                      pSVar6 = (String *)(*pcVar5)();
                      return pSVar6;
                    }
                    FUN_?(args,5);
                    pSVar6 = StringLiteral__color___0____1_____color__color;
                    auStack_21 = (undefined1  [8])0x0;
                    uStack_25 = (Object *)0x0;
                    pOStack_29 = (Object *)0x0;
                    pOStack_30 = (Object__Array *)0x0;
                    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                              ((ParamsArray *)auStack_21,args,(MethodInfo *)0x0);
                    aPStack_31[0]._arg0 = (Object *)auStack_21;
                    aPStack_31[0]._arg1 = uStack_25;
                    aPStack_31[0]._arg2 = pOStack_29;
                    aPStack_31[0]._args = pOStack_30;
                    pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                                        ((IFormatProvider *)0x0,pSVar6,aPStack_31,(MethodInfo *)0x0
                                        );
                    return pSVar6;
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* Void HandleSayChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_HandleSayChatMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&uStackX_10,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
    }
    else {
      pOVar2 = (Object *)0x0;
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_11 << 8);
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar8 = *(int *)&pOVar2[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
         (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
        (pMVar11 = (pMVar10->fields).playerContainer, pMVar11 != (MVPlayerContainer *)0x0)) &&
       (pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
       pMVar12 != (MVLocalPlayer *)0x0)) {
      if ((pMVar12->fields)._._ActorNr_k__BackingField == iVar8) {
        pSVar13 = ChatControllerBase_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
        (*(this->klass->vtable).AddLine.methodPtr)
                  (this,pSVar13,(this->klass->vtable).AddLine.method);
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
         ((pMVar11 = (pMVar10->fields).playerContainer, pMVar11 != (MVPlayerContainer *)0x0 &&
          (pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
          pMVar12 != (MVLocalPlayer *)0x0)))) {
        if ((pMVar12->fields)._.playerState == 1) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_00 == (GameObject *)0x0) goto code_?;
          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(this_00,(MethodInfo *)0x0);
          if ((bVar14 != 0) &&
             (TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved !=
              (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *
              )0x0)) {
            pAVar15 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                     OnSayChatMessageRecieved;
            (*(pAVar15->fields)._._.invoke_impl)
                      ((pAVar15->fields)._._.method_code,iVar8,data,(pAVar15->fields)._._.method);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleTeamChatMessage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_HandleTeamChatMessage
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&uStackX_10,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
    }
    else {
      pOVar2 = (Object *)0x0;
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_11 << 8);
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    actorNr = *(int32_t *)&pOVar2[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar8 != (MVGameControllerBase *)0x0) &&
        (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
       (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 != (MVPlayerContainer *)0x0)) {
      other = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar10,actorNr,(MethodInfo *)0x0)
      ;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar8 != (MVGameControllerBase *)0x0) &&
          (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
         ((pMVar10 = (pMVar9->fields).playerContainer, pMVar10 != (MVPlayerContainer *)0x0 &&
          (this_00 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
          this_00 != (MVLocalPlayer *)0x0)))) {
        bVar11 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)this_00,other,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pSVar12 = ChatControllerBase_FormatTeamChatMessage(this,data,(MethodInfo *)0x0);
          (*(this->klass->vtable).AddLine.methodPtr)
                    (this,pSVar12,(this->klass->vtable).AddLine.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Text InstantiateNewLine() */

Text * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_InstantiateNewLine
                 (ChatControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).consoleLinePrefab;
  parent = (Transform *)(this->fields)._ContentPanel_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar1 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                             ((Object *)pTVar1,parent,0,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text__UnityEngine__Transform__bool_
                             );
  this_00 = (this->fields).lines;
  if (this_00 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)this_00,(Object *)pTVar1,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
              );
    return pTVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pTVar1 = (Text *)(*pcVar2)();
  return pTVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_OnDestroy
               (ChatControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatControllerBase__OnSayChatMessageHeard_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard =
         (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
    if (pAVar1 == (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                  0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   &TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard
                  >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnSayChatMessageHeard(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_OnSayChatMessageHeard
               (ChatControllerBase *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pSVar1 = ChatControllerBase_FormatSayChatMessage(this,data,(MethodInfo *)0x0);
  UNRECOVERED_JUMPTABLE = (this->klass->vtable).AddLine.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pSVar1,(this->klass->vtable).AddLine.method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void PromptRegisterForChatIfApplicable() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_PromptRegisterForChatIfApplicable
               (ChatControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).promptRegisterForChat != 0) && ((this->fields).chatLocked != 0)) {
    (this->fields).promptRegisterForChat = 0;
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      ,8,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__NotificationController);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar2 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      ,this_01,8,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__NotificationController);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__NotificationLifetime);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,2);
      key = (Object *)FUN_?(uRam_?,auStackX_18);
      auStackX_18[0] = 8;
      value = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,key,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__NotificationsManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
          if (this_00 == (NotificationsManager *)0x0) goto code_?;
          NotificationsManager::NotificationsManager_InstantiateNotification
                    (this_00,NotificationType__Enum_RegisterToChat,
                     (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void ReceiveMessage(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_ReceiveMessage
               (ChatControllerBase *this,MVGameMsgType__Enum msgType,
               Dictionary_2_System_Object_System_Object_ *message,MethodInfo *method)

{
  switch(msgType) {
  case MVGameMsgType__Enum_AdminMsg:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__color___0___1___color_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStackX_10 = 5;
    pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
    if (message == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (message,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pOVar1 = (Object *)0x0;
    if (pOVar3 != (Object *)0x0) {
      if ((String__Class *)pOVar3->klass == pSRam0000000182db2460) {
        pOVar1 = pOVar3;
      }
      if (pOVar1 == (Object *)0x0) {
        FUN_?(pOVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    PStack_4._arg0 = *(Object **)&(this->fields).systemMessageColor;
    PStack_4._arg1 = *(Object **)&(this->fields).systemMessageColor.b;
    uVar5 = FUN_?(&PStack_4);
    color_00.r = 0;
    color_00.g = 0;
    color_00.b = 0;
    color_00.a = 0;
    color_00.rgba = uVar5;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar6 = Styles::Styles_ColorToHex(color_00,(MethodInfo *)0x0);
    pSVar7 = StringLiteral__color___0___1___color_;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_4,(Object *)pSVar6,pOVar1,(MethodInfo *)0x0);
    pOStack_8 = PStack_4._arg0;
    pOStack_9 = PStack_4._arg1;
    pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar7,(ParamsArray *)&pOStack_8,(MethodInfo *)0x0
                        );
    (*(this->klass->vtable).AddLine.methodPtr)(this,pSVar7,(this->klass->vtable).AddLine.method);
  default:
    return;
  case MVGameMsgType__Enum_Chat:
    break;
  case MVGameMsgType__Enum_TeamChat:
    if (cRam_? == '\0') {
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    ,message,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar10 = lRam_?;
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        PStack_4._args = (Object__Array *)&UNK_?;
        pOVar1 = (Object *)FUN_?(lRam_?);
        PStack_4._args = (Object__Array *)&UNK_?;
        FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar10 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
      }
      else {
        pOVar1 = (Object *)0x0;
      }
    }
    else {
      pOVar1 = (Object *)((ulonglong)uStackX_11 << 8);
    }
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      PStack_4._args = (Object__Array *)&UNK_?;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (message,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(pOVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar14 = *(int32_t *)&pOVar1[1].klass;
        if (cRam_? == '\0') {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar15 != (MVGameControllerBase *)0x0) &&
            (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
           (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
          PStack_4._args = (Object__Array *)&UNK_?;
          other = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            (pMVar17,iVar14,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            PStack_4._args = (Object__Array *)&UNK_?;
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar15 != (MVGameControllerBase *)0x0) &&
              (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
             (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
            PStack_4._args = (Object__Array *)&UNK_?;
            pMVar18 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (pMVar17,(MethodInfo *)0x0);
            if (pMVar18 != (MVLocalPlayer *)0x0) {
              PStack_4._args = (Object__Array *)&UNK_?;
              bVar19 = MVPlayer::MVPlayer_IsOnSameTeam((MVPlayer *)pMVar18,other,(MethodInfo *)0x0);
              if (bVar19 != 0) {
                PStack_4._args = (Object__Array *)&UNK_?;
                pSVar7 = ChatControllerBase_FormatTeamChatMessage(this,message,(MethodInfo *)0x0);
                PStack_4._args = (Object__Array *)&UNK_?;
                (*(this->klass->vtable).AddLine.methodPtr)
                          (this,pSVar7,(this->klass->vtable).AddLine.method);
              }
              return;
            }
          }
        }
      }
    }
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  case MVGameMsgType__Enum_SayChat:
    if (cRam_? == '\0') {
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    ,message,0);
      LOCK();
      UNLOCK();
      PStack_4._args = (Object__Array *)&UNK_?;
      FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar10 = lRam_?;
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        PStack_4._args = (Object__Array *)&UNK_?;
        pOVar1 = (Object *)FUN_?(lRam_?);
        PStack_4._args = (Object__Array *)&UNK_?;
        FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar10 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
      }
      else {
        pOVar1 = (Object *)0x0;
      }
    }
    else {
      pOVar1 = (Object *)((ulonglong)uStackX_11 << 8);
    }
    if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      PStack_4._args = (Object__Array *)&UNK_?;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (message,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(pOVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar20 = *(int *)&pOVar1[1].klass;
        if (cRam_? == '\0') {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar15 != (MVGameControllerBase *)0x0) &&
            (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
           (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
          PStack_4._args = (Object__Array *)&UNK_?;
          pMVar18 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar17,(MethodInfo *)0x0);
          if (pMVar18 != (MVLocalPlayer *)0x0) {
            if ((pMVar18->fields)._._ActorNr_k__BackingField == iVar20) {
              PStack_4._args = (Object__Array *)&UNK_?;
              pSVar7 = ChatControllerBase_FormatSayChatMessage(this,message,(MethodInfo *)0x0);
              PStack_4._args = (Object__Array *)&UNK_?;
              (*(this->klass->vtable).AddLine.methodPtr)
                        (this,pSVar7,(this->klass->vtable).AddLine.method);
            }
            if (cRam_? == '\0') {
              PStack_4._args = (Object__Array *)&UNK_?;
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar15 != (MVGameControllerBase *)0x0) &&
                (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
               (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
              PStack_4._args = (Object__Array *)&UNK_?;
              pMVar18 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar17,(MethodInfo *)0x0);
              if (pMVar18 != (MVLocalPlayer *)0x0) {
                if ((pMVar18->fields)._.playerState == 1) {
                  PStack_4._args = (Object__Array *)&UNK_?;
                  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (this_03 == (GameObject *)0x0) goto code_?;
                  PStack_4._args = (Object__Array *)&UNK_?;
                  bVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_activeInHierarchy(this_03,(MethodInfo *)0x0);
                  if ((bVar19 != 0) &&
                     (TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                      OnSayChatMessageRecieved !=
                      (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0)) {
                    pAVar21 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                              OnSayChatMessageRecieved;
                    PStack_4._args = (Object__Array *)&UNK_?;
                    (*(pAVar21->fields)._._.invoke_impl)
                              ((pAVar21->fields)._._.method_code,iVar20,message,
                               (pAVar21->fields)._._.method);
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
code_?:
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  case MVGameMsgType__Enum_Warning:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    ,message,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__color___0___1___color_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStackX_10 = 5;
    pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
    if ((message == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pSVar7 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (message,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pSVar7 == (String *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar6 = (String *)0x0;
    if (pSVar7->klass == pSRam0000000182db2460) {
      pSVar6 = pSVar7;
    }
    if (pSVar6 != (String *)0x0) {
      iVar20 = (pSVar6->fields)._stringLength;
      if (0x600 < iVar20) {
        if (iVar20 + -0x600 < 0) {
          uVar22 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
          this_02 = (ArgumentOutOfRangeException *)func_?(uVar22);
          pSVar7 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
          pSVar6 = (String *)func_?(&StringLiteral_length);
          mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                    (this_02,pSVar6,pSVar7,(MethodInfo *)0x0);
          uVar22 = func_?(&MethodInfo__System__String__Substring_int__int_);
          FUN_?(this_02,uVar22);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pSVar6 = mscorlib.dll::System::String::String_InternalSubString
                            (pSVar6,0,0x600,(MethodInfo *)0x0);
      }
      PStack_4._arg0 = *(Object **)&(this->fields).warningColor;
      PStack_4._arg1 = *(Object **)&(this->fields).warningColor.b;
      uVar5 = FUN_?(&PStack_4);
      color_01.r = 0;
      color_01.g = 0;
      color_01.b = 0;
      color_01.a = 0;
      color_01.rgba = uVar5;
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      arg0 = Styles::Styles_ColorToHex(color_01,(MethodInfo *)0x0);
      pSVar7 = StringLiteral__color___0___1___color_;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_4,(Object *)arg0,(Object *)pSVar6,(MethodInfo *)0x0);
      pOStack_8 = PStack_4._arg0;
      pOStack_9 = PStack_4._arg1;
      pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                          ((IFormatProvider *)0x0,pSVar7,(ParamsArray *)&pOStack_8,
                           (MethodInfo *)0x0);
      (*(this->klass->vtable).AddLine.methodPtr)(this,pSVar7,(this->klass->vtable).AddLine.method);
      return;
    }
    FUN_?(pSVar7);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,message,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0____1______color__colo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_10 = 5;
  pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
  if (message != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (message,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    lVar10 = lRam_?;
    pOVar1 = (Object *)0x0;
    pOVar3 = pOVar1;
    if (pOVar23 != (Object *)0x0) {
      if ((String__Class *)pOVar23->klass == pSRam0000000182db2460) {
        pOVar3 = pOVar23;
      }
      if (pOVar3 == (Object *)0x0) {
        FUN_?(pOVar23);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar1 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar10 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
      }
    }
    else {
      pOVar1 = (Object *)((ulonglong)uStackX_11 << 8);
    }
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (message,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar14 = *(int32_t *)&pOVar1[1].klass;
      fVar24 = (this->fields).chatMessageDefaultNameColor.r;
      fVar25 = (this->fields).chatMessageDefaultNameColor.g;
      fVar26 = (this->fields).chatMessageDefaultNameColor.b;
      fVar27 = (this->fields).chatMessageDefaultNameColor.a;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar15 != (MVGameControllerBase *)0x0) &&
          (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
         (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 != (MVPlayerContainer *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar17->fields).players;
        if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar14,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                              );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar15 != (MVGameControllerBase *)0x0) &&
              (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
             (pMVar28 = (pMVar16->fields).teamManager, pMVar28 != (MVTeamManager *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar29 = (pMVar28->fields).teams;
            if (pDVar29 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
              if (1 < (pDVar29->fields)._count - (pDVar29->fields)._freeCount) {
                if (pOVar1 == (Object *)0x0) goto code_?;
                team = *(MVTeam__Enum *)((longlong)&pOVar1[8].klass + 4);
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pCVar30 = Styles::Styles_GetTeamColor((Color *)auStack_31,team,0,(MethodInfo *)0x0);
                fVar24 = pCVar30->r;
                fVar25 = pCVar30->g;
                fVar26 = pCVar30->b;
                fVar27 = pCVar30->a;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar15 != (MVGameControllerBase *)0x0) &&
                  (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
                 ((pOVar1 != (Object *)0x0 &&
                  (this_01 = (pMVar16->fields)._Friends_k__BackingField,
                  this_01 != (FriendList *)0x0)))) {
                pFVar32 = FriendList::FriendList_GetFriendByProfileID
                                    (this_01,*(int32_t *)&pOVar1[5].monitor,(MethodInfo *)0x0);
                pSVar7 = StringLiteral__color___0____1______color__colo;
                if ((pFVar32 != (Friend *)0x0) && ((pFVar32->fields).status == 2)) {
                  fVar24 = (this->fields).friendNameColor.r;
                  fVar25 = (this->fields).friendNameColor.g;
                  fVar26 = (this->fields).friendNameColor.b;
                  fVar27 = (this->fields).friendNameColor.a;
                }
                args = (Object__Array *)FUN_?(TypeInfo__System__Object);
                auStack_31._4_4_ = fVar25;
                auStack_31._0_4_ = fVar24;
                uStack_33 = (Object *)CONCAT44(fVar27,fVar26);
                uVar5 = FUN_?(auStack_31);
                color_02.r = 0;
                color_02.g = 0;
                color_02.b = 0;
                color_02.a = 0;
                color_02.rgba = uVar5;
                if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pSVar6 = Styles::Styles_ColorToHex(color_02,(MethodInfo *)0x0);
                if (args != (Object__Array *)0x0) {
                  if ((pSVar6 != (String *)0x0) &&
                     (lVar10 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar10 == 0))
                  {
                    uVar22 = FUN_?();
                    FUN_?(uVar22,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  FUN_?(args,0,pSVar6);
                  if (pOVar1[7].klass != (Object__Class *)0x0) {
                    pcVar34 = ((pOVar1[7].klass)->_0).namespaze;
                    if ((pcVar34 != (char *)0x0) &&
                       (lVar10 = FUN_?(pcVar34,(args->klass->_0).element_class), lVar10 == 0)
                       ) {
                      uVar22 = FUN_?();
                      FUN_?(uVar22,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    FUN_?(args,1,pcVar34);
                    auStack_31 = *(undefined1 (*) [8])&(this->fields).chatMessageColor;
                    uStack_33 = *(Object **)&(this->fields).chatMessageColor.b;
                    uVar5 = FUN_?(auStack_31);
                    color.r = 0;
                    color.g = 0;
                    color.b = 0;
                    color.a = 0;
                    color.rgba = uVar5;
                    pSVar6 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
                    if ((pSVar6 != (String *)0x0) &&
                       (lVar10 = FUN_?(pSVar6,(args->klass->_0).element_class), lVar10 == 0
                       )) {
                      uVar22 = FUN_?();
                      FUN_?(uVar22,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    FUN_?(args,2,pSVar6);
                    if ((pOVar3 != (Object *)0x0) &&
                       (lVar10 = FUN_?(pOVar3,(args->klass->_0).element_class), lVar10 == 0
                       )) {
                      uVar22 = FUN_?();
                      FUN_?(uVar22,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    FUN_?(args,3);
                    auStack_31 = (undefined1  [8])0x0;
                    uStack_33 = (Object *)0x0;
                    pOStack_35 = (Object *)0x0;
                    pOStack_36 = (Object__Array *)0x0;
                    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                              ((ParamsArray *)auStack_31,args,(MethodInfo *)0x0);
                    PStack_4._arg0 = (Object *)auStack_31;
                    PStack_4._arg1 = uStack_33;
                    PStack_4._arg2 = pOStack_35;
                    PStack_4._args = pOStack_36;
                    pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                                        ((IFormatProvider *)0x0,pSVar7,&PStack_4,(MethodInfo *)0x0
                                        );
                    (*(this->klass->vtable).AddLine.methodPtr)
                              (this,pSVar7,(this->klass->vtable).AddLine.method);
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Text ReuseLine() */

Text * Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_ReuseLine
                 (ChatControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).lines;
  if (pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) {
    pTVar2 = (Text *)mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                     Queue_1_System_Object__Dequeue
                               ((Queue_1_System_Object_ *)pQVar1,
                                MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Dequeue__
                               );
    pQVar1 = (this->fields).lines;
    if (((pQVar1 != (Queue_1_UnityEngine_UI_Text_ *)0x0) &&
        (mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
         Queue_1_System_Object__Enqueue
                   ((Queue_1_System_Object_ *)pQVar1,(Object *)pTVar2,
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Enqueue_UnityEngine__UI__Text_
                   ), pTVar2 != (Text *)0x0)) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar3,(Transform *)(this->fields)._ContentPanel_k__BackingField,0,
                 (MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          pTVar2 = (Text *)(*pcVar5)();
          return pTVar2;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          pTVar2 = (Text *)(*pcVar5)();
          return pTVar2;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4);
        return pTVar2;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pTVar2 = (Text *)(*pcVar5)();
  return pTVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_Start
               (ChatControllerBase *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._MessageController_k__BackingField;
  if (pSVar1 != (SendMessageControl *)0x0) {
    fVar2 = (this->fields).sayColor.r;
    fVar3 = (this->fields).sayColor.g;
    fVar4 = (this->fields).sayColor.b;
    fVar5 = (this->fields).sayColor.a;
    (pSVar1->fields).sayChatColor.r = fVar2;
    (pSVar1->fields).sayChatColor.g = fVar3;
    (pSVar1->fields).sayChatColor.b = fVar4;
    (pSVar1->fields).sayChatColor.a = fVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).DoStart.methodPtr)(fVar2,(this->klass->vtable).DoStart.method);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateLockedState() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase_UpdateLockedState
               (ChatControllerBase *this,MethodInfo *method)

{
  this_00 = (this->fields)._InputAreaRoot_k__BackingField;
  if ((this_00 != (RectTransform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,(this->fields).chatLocked == 0,(MethodInfo *)0x0);
    this_01 = (this->fields)._EnterChatButton_k__BackingField;
    if ((this_01 != (ConsoleDragAndTapHandler *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      bVar2 = (this->fields).chatLocked == 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,bVar2,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,bVar2);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ChatControllerBase() */

void Assembly-CSharp.dll::ChatControllerBase::ChatControllerBase__ctor
               (ChatControllerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields).warningColor.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (this->fields).warningColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar2 = _UNK_?;
  (this->fields).warningColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields).warningColor.a = (float)uVar2;
  this_00 = (Queue_1_UnityEngine_UI_Text_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::UI::Text>__Queue__);
  bVar4 = iRam_? != 0;
  (this->fields).lines = this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).lines >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = cRam_? == '\0';
  (this->fields).promptRegisterForChat = 1;
  if (bVar4) {
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

