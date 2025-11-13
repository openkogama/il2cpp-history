
/* Void CloseHamburgerMenu() */

void Assembly-CSharp.dll::HamburgerMenuControl::HamburgerMenuControl_CloseHamburgerMenu
               (HamburgerMenuControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_d__5);
  bVar2 = iRam_? != 0;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(HamburgerMenuControl **)(lVar1 + 0x20) = this;
  if (bVar2) {
    uVar3 = (uint)(lVar1 + 0x20U >> 0xc);
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
  if (lVar1 == 0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (HamburgerMenuControl *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,lVar1);
  return;
}


/* IEnumerator CloseHamburgerMenuFunction() */

IEnumerator *
Assembly-CSharp.dll::HamburgerMenuControl::HamburgerMenuControl_CloseHamburgerMenuFunction
          (HamburgerMenuControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_d__5);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void ExitApplication() */

void Assembly-CSharp.dll::HamburgerMenuControl::HamburgerMenuControl_ExitApplication
               (HamburgerMenuControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(0);
  return;
}


/* Void OpenHamburgerMenu() */

void Assembly-CSharp.dll::HamburgerMenuControl::HamburgerMenuControl_OpenHamburgerMenu
               (HamburgerMenuControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Button>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_0__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_1_UnityEngine__Color_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_2__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_3_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_4__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_5_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isHamburgerMenuOpen != 0) {
    return;
  }
  pGVar1 = (this->fields).overlay;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).overlay;
    if ((pGVar1 != (GameObject *)0x0) &&
       (this_00 = (Selectable *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar1,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Button>__
                            ), this_00 != (Selectable *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                (this_00,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).overlay;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar1,
                              UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                             ), pOVar2 != (Object *)0x0)) {
        pOVar3 = pOVar2->klass;
        uVar4._0_2_ = pOVar3[1]._1.interfaces_count;
        uVar4._2_2_ = pOVar3[1]._1.interface_offsets_count;
        uVar4._4_1_ = pOVar3[1]._1.typeHierarchyDepth;
        uVar4._5_1_ = pOVar3[1]._1.genericRecursionDepth;
        uVar4._6_1_ = pOVar3[1]._1.rank;
        uVar4._7_1_ = pOVar3[1]._1.minimumAlignment;
        pfVar5 = (float *)(**(code **)&pOVar3[1]._1.field_count)(&VStack_6,pOVar2,uVar4);
        fVar7 = *pfVar5;
        fVar8 = pfVar5[1];
        fVar9 = pfVar5[2];
        uVar4 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
        FUN_?(uVar4,this,MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_0__);
        uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
        FUN_?(uVar10,this,
                      MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_1_UnityEngine__Color_
                     );
        fVar11 = (this->fields).animationTime;
        if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__DOTween__ApplyTo<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_DG__Tweening__Core__DOGetter<UnityEngine::Color>__DG__Tweening__Core__DOSetter<UnityEngine::Color>__UnityEngine__Color__float__DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__DG__Tweening__DOTween);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_12 = 0x3f000000;
        VStack_6.z = fVar9;
        VStack_6.x = fVar7;
        VStack_6.y = fVar8;
        if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(uVar4,uVar10,&VStack_6,fVar11);
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        iVar14 = (*pcRam_?)();
        if (iVar14 == 3) {
          pDVar15 = (DOGetter_1_UnityEngine_Vector3_ *)
                    FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
          FUN_?(pDVar15,this,MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_2__);
          pDVar16 = (DOSetter_1_UnityEngine_Vector3_ *)
                    FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
          FUN_?(pDVar16,this,
                        MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_3_UnityEngine__Vector3_
                       );
          pGVar1 = (this->fields).sideMenu;
          if ((pGVar1 == (GameObject *)0x0) ||
             (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
             pTVar17 == (Transform *)0x0)) goto DAT_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_6.x = 0.0;
          VStack_6.y = 0.0;
          VStack_6.z = 0.0;
          pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
          if (pvVar18 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(pvVar18,&VStack_6);
          pGVar1 = (this->fields).sideMenu;
          if ((pGVar1 == (GameObject *)0x0) ||
             (pRVar19 = (RectTransform *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar1,
                                   UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                                  ), pRVar19 == (RectTransform *)0x0)) goto DAT_?;
          VVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_sizeDelta(pRVar19,(MethodInfo *)0x0);
          fVar11 = (this->fields).animationTime;
          fStackX_8 = VVar20.x;
          fStackX_8 = VStack_6.x + fStackX_8;
          if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
            FUN_?();
          }
          VStack_6._0_8_ = ZEXT48((uint)fStackX_8);
          VStack_6.z = 0.0;
          DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                    (pDVar15,pDVar16,&VStack_6,fVar11,(MethodInfo *)0x0);
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        iVar14 = (*pcRam_?)();
        if (iVar14 != 1) {
code_?:
          (this->fields).isHamburgerMenuOpen = 1;
          return;
        }
        pDVar15 = (DOGetter_1_UnityEngine_Vector3_ *)
                  FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
        FUN_?(pDVar15,this,MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_4__);
        pDVar16 = (DOSetter_1_UnityEngine_Vector3_ *)
                  FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
        FUN_?(pDVar16,this,
                      MethodInfo__HamburgerMenuControl___OpenHamburgerMenu_b__4_5_UnityEngine__Vector3_
                     );
        pGVar1 = (this->fields).sideMenu;
        if ((pGVar1 != (GameObject *)0x0) &&
           (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar1,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_6.x = 0.0;
          VStack_6.y = 0.0;
          VStack_6.z = 0.0;
          pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
          if (pvVar18 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(pvVar18,&VStack_6);
          pGVar1 = (this->fields).sideMenu;
          if ((pGVar1 != (GameObject *)0x0) &&
             (pRVar19 = (RectTransform *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar1,
                                   UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                                  ), pRVar19 != (RectTransform *)0x0)) {
            VVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_get_sizeDelta(pRVar19,(MethodInfo *)0x0);
            fVar11 = (this->fields).animationTime;
            fStackX_c = VVar20.y;
            fStackX_c = VStack_6.y + fStackX_c;
            if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
              FUN_?();
            }
            VStack_6.z = 0.0;
            VStack_6._0_8_ = (ulonglong)(uint)fStackX_c << 0x20;
            DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                      (pDVar15,pDVar16,&VStack_6,fVar11,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Color <CloseHamburgerMenuFunction>b__5_0() */

Color * Assembly-CSharp.dll::HamburgerMenuControl::
        HamburgerMenuControl__CloseHamburgerMenuFunction_b__5_0
                  (Color *__return_storage_ptr__,HamburgerMenuControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).overlay;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar2 = pOVar1->klass;
      uVar3._0_2_ = pOVar2[1]._1.interfaces_count;
      uVar3._2_2_ = pOVar2[1]._1.interface_offsets_count;
      uVar3._4_1_ = pOVar2[1]._1.typeHierarchyDepth;
      uVar3._5_1_ = pOVar2[1]._1.genericRecursionDepth;
      uVar3._6_1_ = pOVar2[1]._1.rank;
      uVar3._7_1_ = pOVar2[1]._1.minimumAlignment;
      puVar4 = (undefined8 *)(**(code **)&pOVar2[1]._1.field_count)(auStack_5,pOVar1,uVar3);
      uVar3 = *puVar4;
      uVar6 = puVar4[1];
      __return_storage_ptr__->r = (float)(int)uVar3;
      __return_storage_ptr__->g = (float)(int)((ulonglong)uVar3 >> 0x20);
      __return_storage_ptr__->b = (float)(int)uVar6;
      __return_storage_ptr__->a = (float)(int)((ulonglong)uVar6 >> 0x20);
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pCVar8 = (Color *)(*pcVar7)();
  return pCVar8;
}


/* Void <CloseHamburgerMenuFunction>b__5_1(Color) */

void Assembly-CSharp.dll::HamburgerMenuControl::
     HamburgerMenuControl__CloseHamburgerMenuFunction_b__5_1
               (HamburgerMenuControl *this,Color *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).overlay;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                       );
    if (pOVar1 != (Object *)0x0) {
      fStack_2 = x->r;
      fStack_3 = x->g;
      fStack_4 = x->b;
      fStack_5 = x->a;
      (**(code **)&pOVar1->klass[1]._1.naturalAligment)
                (pOVar1,&fStack_2,pOVar1->klass[1].vtable.Equals.methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vector3 <CloseHamburgerMenuFunction>b__5_4() */

Vector3 * Assembly-CSharp.dll::HamburgerMenuControl::
          HamburgerMenuControl__CloseHamburgerMenuFunction_b__5_4
                    (Vector3 *__return_storage_ptr__,HamburgerMenuControl *this,MethodInfo *method)

{
  this_00 = (this->fields).sideMenu;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Void <CloseHamburgerMenuFunction>b__5_5(Vector3) */

void Assembly-CSharp.dll::HamburgerMenuControl::
     HamburgerMenuControl__CloseHamburgerMenuFunction_b__5_5
               (HamburgerMenuControl *this,Vector3 *x,MethodInfo *method)

{
  this_00 = (this->fields).sideMenu;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = x->x;
  uStack_2._4_4_ = x->y;
  fStack_3 = x->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  return;
}


/* Color <OpenHamburgerMenu>b__4_0() */

Color * Assembly-CSharp.dll::HamburgerMenuControl::HamburgerMenuControl__OpenHamburgerMenu_b__4_0
                  (Color *__return_storage_ptr__,HamburgerMenuControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).overlay;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar2 = pOVar1->klass;
      uVar3._0_2_ = pOVar2[1]._1.interfaces_count;
      uVar3._2_2_ = pOVar2[1]._1.interface_offsets_count;
      uVar3._4_1_ = pOVar2[1]._1.typeHierarchyDepth;
      uVar3._5_1_ = pOVar2[1]._1.genericRecursionDepth;
      uVar3._6_1_ = pOVar2[1]._1.rank;
      uVar3._7_1_ = pOVar2[1]._1.minimumAlignment;
      puVar4 = (undefined8 *)(**(code **)&pOVar2[1]._1.field_count)(auStack_5,pOVar1,uVar3);
      uVar3 = *puVar4;
      uVar6 = puVar4[1];
      __return_storage_ptr__->r = (float)(int)uVar3;
      __return_storage_ptr__->g = (float)(int)((ulonglong)uVar3 >> 0x20);
      __return_storage_ptr__->b = (float)(int)uVar6;
      __return_storage_ptr__->a = (float)(int)((ulonglong)uVar6 >> 0x20);
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pCVar8 = (Color *)(*pcVar7)();
  return pCVar8;
}


/* Void <OpenHamburgerMenu>b__4_1(Color) */

void Assembly-CSharp.dll::HamburgerMenuControl::HamburgerMenuControl__OpenHamburgerMenu_b__4_1
               (HamburgerMenuControl *this,Color *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).overlay;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                       );
    if (pOVar1 != (Object *)0x0) {
      fStack_2 = x->r;
      fStack_3 = x->g;
      fStack_4 = x->b;
      fStack_5 = x->a;
      (**(code **)&pOVar1->klass[1]._1.naturalAligment)
                (pOVar1,&fStack_2,pOVar1->klass[1].vtable.Equals.methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* HamburgerMenuControl() */

void Assembly-CSharp.dll::HamburgerMenuControl::HamburgerMenuControl__ctor
               (HamburgerMenuControl *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).animationTime = 0.3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

