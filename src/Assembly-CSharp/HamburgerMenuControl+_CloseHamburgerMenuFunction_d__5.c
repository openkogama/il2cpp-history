
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HamburgerMenuControl+<CloseHamburgerMenuFunction>d__5::
     HamburgerMenuControl_CloseHamburgerMenuFunction_d_5_MoveNext
               (HamburgerMenuControl_CloseHamburgerMenuFunction_d_5 *this,MethodInfo *method)

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
    FUN_?(&MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_0__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_1_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_2__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_3_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_4__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_5_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pHVar2 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if ((pHVar2 == (HamburgerMenuControl *)0x0) ||
         (pGVar3 = (pHVar2->fields).overlay, pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      (pHVar2->fields).isHamburgerMenuOpen = 0;
    }
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pHVar2 != (HamburgerMenuControl *)0x0) {
    if ((pHVar2->fields).isHamburgerMenuOpen == 0) {
      return 0;
    }
    pGVar3 = (pHVar2->fields).overlay;
    if ((pGVar3 != (GameObject *)0x0) &&
       (this_00 = (Selectable *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar3,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Button>__
                            ), this_00 != (Selectable *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                (this_00,0,(MethodInfo *)0x0);
      pGVar3 = (pHVar2->fields).overlay;
      if ((pGVar3 != (GameObject *)0x0) &&
         (pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar3,
                               UnityEngine__UI__Image_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::UI::Image>__
                              ), pOVar4 != (Object *)0x0)) {
        pOVar5 = pOVar4->klass;
        uVar6._0_2_ = pOVar5[1]._1.interfaces_count;
        uVar6._2_2_ = pOVar5[1]._1.interface_offsets_count;
        uVar6._4_1_ = pOVar5[1]._1.typeHierarchyDepth;
        uVar6._5_1_ = pOVar5[1]._1.genericRecursionDepth;
        uVar6._6_1_ = pOVar5[1]._1.rank;
        uVar6._7_1_ = pOVar5[1]._1.minimumAlignment;
        pfVar7 = (float *)(**(code **)&pOVar5[1]._1.field_count)(&VStack_8,pOVar4,uVar6);
        fVar9 = *pfVar7;
        fVar10 = pfVar7[1];
        fVar11 = pfVar7[2];
        uVar6 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Color>);
        FUN_?(uVar6,pHVar2,
                      MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_0__);
        uVar12 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Color>);
        FUN_?(uVar12,pHVar2,
                      MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_1_UnityEngine__Color_
                     );
        fVar13 = (pHVar2->fields).animationTime;
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
        uStack_14 = 0;
        VStack_8.z = fVar11;
        VStack_8.x = fVar9;
        VStack_8.y = fVar10;
        if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(uVar6,uVar12,&VStack_8,fVar13);
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar15 = (code *)swi(3);
          bVar16 = (*pcVar15)();
          return bVar16;
        }
        pcRam_? = pcVar15;
        iVar1 = (*pcRam_?)();
        if (iVar1 == 3) {
          pDVar17 = (DOGetter_1_UnityEngine_Vector3_ *)
                    FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
          FUN_?(pDVar17,pHVar2,
                        MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_2__);
          pDVar18 = (DOSetter_1_UnityEngine_Vector3_ *)
                    FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
          FUN_?(pDVar18,pHVar2,
                        MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_3_UnityEngine__Vector3_
                       );
          pGVar3 = (pHVar2->fields).sideMenu;
          if ((pGVar3 == (GameObject *)0x0) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
             pTVar19 == (Transform *)0x0)) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_8.x = 0.0;
          VStack_8.y = 0.0;
          VStack_8.z = 0.0;
          pvVar20 = (pTVar19->fields)._._.m_CachedPtr;
          if (pvVar20 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar19,(MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            bVar16 = (*pcVar15)();
            return bVar16;
          }
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar15 = (code *)swi(3);
            bVar16 = (*pcVar15)();
            return bVar16;
          }
          pcRam_? = pcVar15;
          (*pcRam_?)(pvVar20,&VStack_8);
          pGVar3 = (pHVar2->fields).sideMenu;
          if ((pGVar3 == (GameObject *)0x0) ||
             (pRVar21 = (RectTransform *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar3,
                                   UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                                  ), pRVar21 == (RectTransform *)0x0)) goto code_?;
          VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_sizeDelta(pRVar21,(MethodInfo *)0x0);
          fVar13 = (pHVar2->fields).animationTime;
          fStackX_8 = VVar22.x;
          fStackX_8 = VStack_8.x - fStackX_8;
          if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
            FUN_?();
          }
          VStack_8.z = 0.0;
          VStack_8._0_8_ = ZEXT48((uint)fStackX_8);
          DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                    (pDVar17,pDVar18,&VStack_8,fVar13,(MethodInfo *)0x0);
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar15 = (code *)swi(3);
          bVar16 = (*pcVar15)();
          return bVar16;
        }
        pcRam_? = pcVar15;
        iVar1 = (*pcRam_?)();
        if (iVar1 != 1) {
code_?:
          fVar13 = (pHVar2->fields).animationTime;
          pOVar4 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
          bVar23 = iRam_? != 0;
          *(float *)&pOVar4[1].klass = fVar13;
          (this->fields).__2__current = pOVar4;
          if (bVar23) {
            uVar24 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
            do {
              uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
              puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
              LOCK();
              bVar23 = uVar26 == *puVar27;
              if (bVar23) {
                *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
          (this->fields).__1__state = 1;
          return 1;
        }
        pDVar17 = (DOGetter_1_UnityEngine_Vector3_ *)
                  FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
        FUN_?(pDVar17,pHVar2,
                      MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_4__);
        pDVar18 = (DOSetter_1_UnityEngine_Vector3_ *)
                  FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
        FUN_?(pDVar18,pHVar2,
                      MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_b__5_5_UnityEngine__Vector3_
                     );
        pGVar3 = (pHVar2->fields).sideMenu;
        if ((pGVar3 != (GameObject *)0x0) &&
           (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar3,(MethodInfo *)0x0), pTVar19 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_8.x = 0.0;
          VStack_8.y = 0.0;
          VStack_8.z = 0.0;
          pvVar20 = (pTVar19->fields)._._.m_CachedPtr;
          if (pvVar20 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar19,(MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            bVar16 = (*pcVar15)();
            return bVar16;
          }
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar15 = (code *)swi(3);
            bVar16 = (*pcVar15)();
            return bVar16;
          }
          pcRam_? = pcVar15;
          (*pcRam_?)(pvVar20,&VStack_8);
          pGVar3 = (pHVar2->fields).sideMenu;
          if ((pGVar3 != (GameObject *)0x0) &&
             (pRVar21 = (RectTransform *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar3,
                                   UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                                  ), pRVar21 != (RectTransform *)0x0)) {
            VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_get_sizeDelta(pRVar21,(MethodInfo *)0x0);
            fVar13 = (pHVar2->fields).animationTime;
            fStackX_c = VVar22.y;
            fStackX_c = VStack_8.y - fStackX_c;
            if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
              FUN_?();
            }
            VStack_8.z = 0.0;
            VStack_8._0_8_ = (ulonglong)(uint)fStackX_c << 0x20;
            DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                      (pDVar17,pDVar18,&VStack_8,fVar13,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::HamburgerMenuControl+<CloseHamburgerMenuFunction>d__5::
     HamburgerMenuControl_CloseHamburgerMenuFunction_d_5_System_Collections_IEnumerator_Reset
               (HamburgerMenuControl_CloseHamburgerMenuFunction_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__HamburgerMenuControl___CloseHamburgerMenuFunction_d__5__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

