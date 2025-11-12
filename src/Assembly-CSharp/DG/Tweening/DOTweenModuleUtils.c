
/* Void Init() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUtils::DOTweenModuleUtils_Init
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<DG::Tweening::Plugins::Options::PathOptions,_DG::Tweening::Tween,_UnityEngine::Quaternion,_UnityEngine::Transform>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUtils);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUtils__Physics__SetOrientationOnPath_DG__Tweening__Plugins__Options__PathOptions__DG__Tweening__Tween__UnityEngine__Quaternion__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__DG__Tweening__DOTweenModuleUtils->static_fields->_initialized == 0) {
    TypeInfo__DG__Tweening__DOTweenModuleUtils->static_fields->_initialized = 1;
    b = (Delegate *)
        FUN_?(
                     TypeInfo__System__Action<DG::Tweening::Plugins::Options::PathOptions,_DG::Tweening::Tween,_UnityEngine::Quaternion,_UnityEngine::Transform>
                     );
    pMVar1 = 
    MethodInfo__DG__Tweening__DOTweenModuleUtils__Physics__SetOrientationOnPath_DG__Tweening__Plugins__Options__PathOptions__DG__Tweening__Tween__UnityEngine__Quaternion__UnityEngine__Transform_
    ;
    bVar2 = iRam_? != 0;
    (b->fields).method_ptr =
         MethodInfo__DG__Tweening__DOTweenModuleUtils__Physics__SetOrientationOnPath_DG__Tweening__Plugins__Options__PathOptions__DG__Tweening__Tween__UnityEngine__Quaternion__UnityEngine__Transform_
         ->virtualMethodPointer;
    (b->fields).method = pMVar1;
    (b->fields).m_target = (Object *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uVar7 = pMVar1->parameters_count;
    (b->fields).method_code = b;
    if ((pMVar1->flags & 0x10) == 0) {
      uVar8 = func_?();
      FUN_?(uVar8,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar7 == 4) {
      pcVar9 = FUN_?;
    }
    else {
      (b->fields).method_code = (b->fields).m_target;
      pcVar9 = (b->fields).method_ptr;
    }
    (b->fields).invoke_impl = pcVar9;
    bVar2 = cRam_? == '\0';
    (b->fields).extra_arg = FUN_?;
    if (bVar2) {
      FUN_?(&
                    TypeInfo__System__Action<DG::Tweening::Plugins::Options::PathOptions,_DG::Tweening::Tween,_UnityEngine::Quaternion,_UnityEngine::Transform>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__DG__Tweening__Core__DOTweenExternalCommand);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    a = TypeInfo__DG__Tweening__Core__DOTweenExternalCommand->static_fields->SetOrientationOnPath;
    do {
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
      pAVar11 = 
      TypeInfo__System__Action<DG::Tweening::Plugins::Options::PathOptions,_DG::Tweening::Tween,_UnityEngine::Quaternion,_UnityEngine::Transform>
      ;
      if (pDVar10 == (Delegate *)0x0) {
        pAVar12 = (Action_4_DG_Tweening_Plugins_Options_PathOptions_DG_Tweening_Tween_UnityEngine_Quaternion_UnityEngine_Transform_
                   *)0x0;
      }
      else {
        pAVar12 = (Action_4_DG_Tweening_Plugins_Options_PathOptions_DG_Tweening_Tween_UnityEngine_Quaternion_UnityEngine_Transform_
                   *)FUN_?(pDVar10,
                                   TypeInfo__System__Action<DG::Tweening::Plugins::Options::PathOptions,_DG::Tweening::Tween,_UnityEngine::Quaternion,_UnityEngine::Transform>
                                  );
        if (pAVar12 ==
            (Action_4_DG_Tweening_Plugins_Options_PathOptions_DG_Tweening_Tween_UnityEngine_Quaternion_UnityEngine_Transform_
             *)0x0) {
          FUN_?(pDVar10,pAVar11);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pDVar13 = TypeInfo__DG__Tweening__Core__DOTweenExternalCommand->static_fields;
      LOCK();
      pAVar14 = pDVar13->SetOrientationOnPath;
      bVar2 = a == pAVar14;
      if (bVar2) {
        pDVar13->SetOrientationOnPath = pAVar12;
        pAVar14 = a;
      }
      UNLOCK();
      pAVar12 = a;
      if (!bVar2) {
        pAVar12 = pAVar14;
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)pDVar13 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar15 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar15 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      bVar2 = pAVar12 != a;
      a = pAVar12;
    } while (bVar2);
  }
  return;
}


/* Void Preserver() */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUtils::DOTweenModuleUtils_Preserver
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__UnityEngine__MonoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Stub);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)FUN_?();
  if (*plVar1 == 0) {
    this = (AppDomain *)FUN_?(uRam_?);
    *plVar1 = (longlong)this;
    if (this == (AppDomain *)0x0) goto code_?;
  }
  else {
    this = (AppDomain *)*plVar1;
  }
  mscorlib.dll::System::AppDomain::AppDomain_GetAssemblies_1(this,(MethodInfo *)0x0);
  pIVar2 = TypeRef__UnityEngine__MonoBehaviour;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar2 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar2,1);
    plVar1 = (longlong *)FUN_?(lVar3 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      if (StringLiteral_Stub != (String *)0x0) {
        (**(code **)(*plVar1 + 0x748))
                  (plVar1,StringLiteral_Stub,0x1c,0,3,0,0,*(undefined8 *)(*plVar1 + 0x750));
        return;
      }
      uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
      this_00 = (ArgumentNullException *)func_?(uVar4);
      paramName = (String *)func_?(&StringLiteral_name);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_00,paramName,(MethodInfo *)0x0);
      uVar4 = func_?(&
                                  MethodInfo__System__Type__GetMethod_System__String__System__Reflection__BindingFlags_
                                 );
      FUN_?(this_00,uVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

