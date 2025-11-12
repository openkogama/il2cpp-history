
/* Void <OpenGameInfo>b__0() */

void Assembly-CSharp.dll::PortalControl+<>c__DisplayClass33_0::
     PortalControl_c_DisplayClass33_0__OpenGameInfo_b__0
               (PortalControl_c_DisplayClass33_0 *this,MethodInfo *method)

{
  obj = (this->fields).__4__this;
  gameDto = (this->fields).gameDto;
  if (obj != (PortalControl *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<UGUI::Portal::Scripts::SessionLocatorResponse>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Action<System::String>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__PortalControl__StartGame_UGUI__Portal__Scripts__SessionLocatorResponse_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__PortalControl____c___HandlePlayGame_b__34_0_System__String_);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__PortalControl____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (obj->fields).sessionLocator;
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UGUI::Portal::Scripts::SessionLocatorResponse>)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)obj,
               MethodInfo__PortalControl__StartGame_UGUI__Portal__Scripts__SessionLocatorResponse_,
               (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__PortalControl____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = TypeInfo__PortalControl____c->static_fields->__9__34_0;
    if (this_02 == (Action_1_String_ *)0x0) {
      if (*(int *)&(TypeInfo__PortalControl____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__PortalControl____c->static_fields->__9;
      this_02 = (Action_1_String_ *)FUN_?(TypeInfo__System__Action<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                ((UnityAction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__PortalControl____c___HandlePlayGame_b__34_0_System__String_,
                 (MethodInfo *)0x0);
      TypeInfo__PortalControl____c->static_fields->__9__34_0 = this_02;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__PortalControl____c->static_fields->__9__34_0 >> 0xc);
        puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar3 = *puVar2;
          LOCK();
          uVar4 = *puVar2;
          if (uVar3 == uVar4) {
            *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar3 != uVar4);
      }
    }
    if (this_00 != (SessionLocator *)0x0) {
      pIVar5 = UGUI::Portal::Scripts::SessionLocator::SessionLocator_CreateRequest
                         (this_00,gameDto,
                          (Action_1_UGUI_Portal_Scripts_SessionLocatorResponse_ *)this_01,this_02,
                          (MethodInfo *)0x0);
      if (pIVar5 == (IEnumerator *)0x0) {
        uVar6 = func_?(&TypeInfo__System__NullReferenceException);
        this_03 = (NullReferenceException *)func_?(uVar6);
        pSVar7 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_03,pSVar7,(MethodInfo *)0x0);
        uVar6 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_03,uVar6);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        uVar6 = func_?(&TypeInfo__System__ArgumentException);
        this_04 = (InvalidEnumArgumentException *)func_?(uVar6);
        pSVar7 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_04,pSVar7,(MethodInfo *)0x0);
        uVar6 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_04,uVar6);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
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
      if (obj == (PortalControl *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pvVar10 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar10,pIVar5);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

