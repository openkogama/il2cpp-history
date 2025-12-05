
/* Void DownloadTestAsset(Action`3[UnityEngine.Networking.UnityWebRequest,Single,Int32], Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_DownloadTestAsset
               (Action_3_UnityEngine_Networking_UnityWebRequest_Single_Int32_ *onDownloadFinished,
               int32_t currentStreamingAssetVersion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedAssetBundleRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Test_bignoise_unity3d);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    pOVar1[1].klass = (Object__Class *)onDownloadFinished;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pcVar7 = pcRam_?;
    *(int32_t *)((longlong)&pOVar1[1].monitor + 4) = currentStreamingAssetVersion;
    pcVar8 = pcRam_?;
    if ((pcVar7 == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar8 = pcVar7, pcVar7 == (code *)0x0))
    {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar8;
    uVar10 = (*pcVar7)();
    *(undefined4 *)&pOVar1[1].monitor = uVar10;
    if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar11 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar11,StringLiteral_Test_bignoise_unity3d,(MethodInfo *)0x0);
    args = (Object__Array *)FUN_?(TypeInfo__System__Object,3);
    if (args != (Object__Array *)0x0) {
      if ((pSVar11 != (String *)0x0) &&
         (lVar12 = FUN_?(pSVar11,(args->klass->_0).element_class), lVar12 == 0)) {
        uVar9 = FUN_?();
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FUN_?(args,0,pSVar11);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__version_587818475);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar13 = StringLiteral__version_587818475;
      if ((StringLiteral__version_587818475 != (String *)0x0) &&
         (lVar12 = FUN_?(StringLiteral__version_587818475,(args->klass->_0).element_class),
         lVar12 == 0)) {
        uVar9 = FUN_?();
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FUN_?(args,1,pSVar13);
      auStackX_8[0] = 0x230965eb;
      lVar12 = FUN_?(uRam_?,auStackX_8);
      if ((lVar12 != 0) &&
         (lVar12 = FUN_?(lVar12,(args->klass->_0).element_class), lVar12 == 0)) {
        uVar9 = FUN_?();
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FUN_?(args,2);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                (StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers,args,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,pOVar1,
                 MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,pSVar11,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AsyncWWWManager,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedGetRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
        if (this_01 != (AsyncWebRequest *)0x0) {
          bVar14 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if ((bVar14 <= (this_01->klass->_1).naturalAligment) &&
             ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar14 - 1] ==
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            pAVar15 = this_01->klass;
            bVar14 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if (((pAVar15->_1).naturalAligment < bVar14) ||
               ((pAVar15->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              FUN_?(this_01,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar15,
                            unaff_RBX);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            cVar16 = (*(code *)pAVar15[1]._0.image)
                              (this_01,TypeInfo__AsyncWWWManager->static_fields->cache,
                               pAVar15[1]._0.gc_desc);
            if (cVar16 != '\0') {
              return;
            }
          }
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        this = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (((this_01 != (AsyncWebRequest *)0x0) &&
            (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
           (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                                 (this_01->fields).requestPriority,
                                 MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                ), pOVar1 != (Object *)0x0)) {
          if (pOVar1[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar1[2].klass == *(int *)&((pOVar1[1].klass)->_0).namespaze) {
              pOVar17 = pOVar1[1].klass;
              iVar18 = *(int *)&(pOVar17->_0).namespaze * 2;
              if (iVar18 < *(int *)&(pOVar17->_0).namespaze + 4) {
                iVar18 = *(int *)&(pOVar17->_0).namespaze + 4;
              }
              FUN_?(pOVar1,iVar18,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar1[1].klass != (Object__Class *)0x0) {
              FUN_?(pOVar1[1].klass,(longlong)*(int *)((longlong)&pOVar1[1].monitor + 4),
                            this_01);
              if (pOVar1[1].klass != (Object__Class *)0x0) {
                iVar19 = *(int *)((longlong)&pOVar1[1].monitor + 4) + 1;
                iVar18 = 0;
                if (iVar19 != *(int *)&((pOVar1[1].klass)->_0).namespaze) {
                  iVar18 = iVar19;
                }
                *(int *)((longlong)&pOVar1[1].monitor + 4) = iVar18;
                *(int *)&pOVar1[2].klass = *(int *)&pOVar1[2].klass + 1;
                piVar20 = (int *)((longlong)&pOVar1[2].klass + 4);
                *piVar20 = *piVar20 + 1;
                return;
              }
            }
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnFirstDownloadFinished(UnityWebRequest, Single, Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_OnFirstDownloadFinished
               (UnityWebRequest *result,float startTime,int32_t currentStreamingAssetVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AssetBundleCacheTest__OnSecondDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_executing_command___0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Download_time_1___0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (result == (UnityWebRequest *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(result,(MethodInfo *)0x0);
  if ((pSVar2 != (String *)0x0) && ((pSVar2->fields)._stringLength != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_SetStreamingAssetVersion_has_no_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_SetStreamingAssetVersion_has_no_,(MethodInfo *)0x0);
    pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(result,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_Error_executing_command___0_;
    PStackY_58._arg0 = (Object *)0x0;
    PStackY_58._arg1 = (Object *)0x0;
    PStackY_58._arg2 = (Object *)0x0;
    PStackY_58._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              (&PStackY_58,(Object *)pSVar3,(MethodInfo *)0x0);
    PStackY_38._arg0 = PStackY_58._arg0;
    PStackY_38._arg1 = PStackY_58._arg1;
    PStackY_38._arg2 = PStackY_58._arg2;
    PStackY_38._args = PStackY_58._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStackY_38,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar5 = (float)(*pcRam_?)();
  afStackX_8[0] = fVar5 - startTime;
  pOVar6 = (Object *)FUN_?(uRam_?,afStackX_8);
  pSVar2 = StringLiteral_Download_time_1___0_;
  PStackY_58._arg0 = (Object *)0x0;
  PStackY_58._arg1 = (Object *)0x0;
  PStackY_58._arg2 = (Object *)0x0;
  PStackY_58._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStackY_58,pOVar6,(MethodInfo *)0x0);
  PStackY_38._arg0 = PStackY_58._arg0;
  PStackY_38._arg1 = PStackY_58._arg1;
  PStackY_38._arg2 = PStackY_58._arg2;
  PStackY_38._args = PStackY_58._args;
  pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar2,&PStackY_38,(MethodInfo *)0x0);
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
  pOVar7 = (Object__Class *)
            FUN_?(
                         TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                         );
  mscorlib.dll::System::Action`3[Object,Single,Int32]::Action_3_Object_Single_Int32___ctor
            ((Action_3_Object_Single_Int32_ *)pOVar7,(Object *)0x0,
             MethodInfo__AssetBundleCacheTest__OnSecondDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__CachedAssetBundleRequest);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&
                  MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_Test_bignoise_unity3d);
    LOCK();
    UNLOCK();
    PStackY_58._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStackY_58._args = (Object__Array *)&UNK_?;
  pOVar6 = (Object *)FUN_?(TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
  if (pOVar6 != (Object *)0x0) {
    bVar8 = iRam_? != 0;
    pOVar6[1].klass = pOVar7;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pcVar1 = pcRam_?;
    *(int32_t *)((longlong)&pOVar6[1].monitor + 4) = currentStreamingAssetVersion;
    pcVar13 = pcRam_?;
    if (pcVar1 == (code *)0x0) {
      PStackY_58._args = (Object__Array *)&UNK_?;
      pcVar1 = (code *)FUN_?(&UNK_?);
      pcVar13 = pcVar1;
      if (pcVar1 == (code *)0x0) {
        PStackY_58._args = (Object__Array *)&UNK_?;
        uVar4 = func_?(&UNK_?);
        PStackY_58._args = (Object__Array *)&UNK_?;
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pcRam_? = pcVar13;
    PStackY_58._args = (Object__Array *)&UNK_?;
    uVar14 = (*pcVar1)();
    *(undefined4 *)&pOVar6[1].monitor = uVar14;
    if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
      PStackY_58._args = (Object__Array *)&UNK_?;
      FUN_?();
    }
    PStackY_58._args = (Object__Array *)&UNK_?;
    pSVar2 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    PStackY_58._args = (Object__Array *)&UNK_?;
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar2,StringLiteral_Test_bignoise_unity3d,(MethodInfo *)0x0);
    PStackY_58._args = (Object__Array *)&UNK_?;
    args = (Object__Array *)FUN_?(TypeInfo__System__Object,3);
    if (args != (Object__Array *)0x0) {
      if (pSVar2 != (String *)0x0) {
        PStackY_58._args = (Object__Array *)&UNK_?;
        lVar15 = FUN_?(pSVar2,(args->klass->_0).element_class);
        if (lVar15 == 0) {
          PStackY_58._args = (Object__Array *)&UNK_?;
          uVar4 = FUN_?();
          PStackY_58._args = (Object__Array *)&UNK_?;
          FUN_?(uVar4,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      PStackY_58._args = (Object__Array *)&UNK_?;
      FUN_?(args,0,pSVar2);
      if (cRam_? == '\0') {
        PStackY_58._args = (Object__Array *)&UNK_?;
        FUN_?(&StringLiteral__version_587818475);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar3 = StringLiteral__version_587818475;
      if (StringLiteral__version_587818475 != (String *)0x0) {
        PStackY_58._args = (Object__Array *)&UNK_?;
        lVar15 = FUN_?(StringLiteral__version_587818475,(args->klass->_0).element_class);
        if (lVar15 == 0) {
          PStackY_58._args = (Object__Array *)&UNK_?;
          uVar4 = FUN_?();
          PStackY_58._args = (Object__Array *)&UNK_?;
          FUN_?(uVar4,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      PStackY_58._args = (Object__Array *)&UNK_?;
      FUN_?(args,1,pSVar3);
      afStackX_8[0] = 7.448367e-18;
      PStackY_58._args = (Object__Array *)&UNK_?;
      lVar15 = FUN_?(uRam_?,afStackX_8);
      if (lVar15 != 0) {
        PStackY_58._args = (Object__Array *)&UNK_?;
        lVar15 = FUN_?(lVar15,(args->klass->_0).element_class);
        if (lVar15 == 0) {
          PStackY_58._args = (Object__Array *)&UNK_?;
          uVar4 = FUN_?();
          PStackY_58._args = (Object__Array *)&UNK_?;
          FUN_?(uVar4,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      PStackY_58._args = (Object__Array *)&UNK_?;
      FUN_?(args,2);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        PStackY_58._args = (Object__Array *)&UNK_?;
        FUN_?();
      }
      PStackY_58._args = (Object__Array *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                (StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers,args,(MethodInfo *)0x0);
      PStackY_58._args = (Object__Array *)&UNK_?;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      PStackY_58._args = (Object__Array *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,pOVar6,
                 MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      PStackY_58._args = (Object__Array *)&UNK_?;
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
      PStackY_58._args = (Object__Array *)&UNK_?;
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,pSVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        PStackY_58._args = (Object__Array *)&UNK_?;
        FUN_?();
      }
      if (cRam_? == '\0') {
        PStackY_38._arg1 = (Object *)&UNK_?;
        FUN_?(&TypeInfo__AsyncWWWManager,0);
        LOCK();
        UNLOCK();
        PStackY_38._arg1 = (Object *)&UNK_?;
        FUN_?(&TypeInfo__CachedGetRequest);
        LOCK();
        UNLOCK();
        PStackY_38._arg1 = (Object *)&UNK_?;
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
        LOCK();
        UNLOCK();
        PStackY_38._arg1 = (Object *)&UNK_?;
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        PStackY_38._arg1 = (Object *)&UNK_?;
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
        if (this_01 != (AsyncWebRequest *)0x0) {
          bVar16 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if ((bVar16 <= (this_01->klass->_1).naturalAligment) &&
             ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar16 - 1] ==
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              PStackY_38._arg1 = (Object *)&UNK_?;
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            pAVar17 = this_01->klass;
            bVar16 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if (((pAVar17->_1).naturalAligment < bVar16) ||
               ((pAVar17->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              PStackY_38._arg1 = (Object *)&UNK_?;
              FUN_?(this_01,TypeInfo__CachedGetRequest);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            PStackY_38._arg1 = (Object *)&UNK_?;
            cVar18 = (*(code *)pAVar17[1]._0.image)
                              (this_01,TypeInfo__AsyncWWWManager->static_fields->cache,
                               pAVar17[1]._0.gc_desc);
            if (cVar18 != '\0') {
              return;
            }
          }
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          PStackY_38._arg1 = (Object *)&UNK_?;
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        this = TypeInfo__AsyncWWWManager->static_fields->requests;
        if ((this_01 != (AsyncWebRequest *)0x0) &&
           (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) {
          PStackY_38._arg1 = (Object *)&UNK_?;
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                               (this_01->fields).requestPriority,
                               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                              );
          if (pOVar6 != (Object *)0x0) {
            if (pOVar6[1].klass != (Object__Class *)0x0) {
              if (*(int *)&pOVar6[2].klass == *(int *)&((pOVar6[1].klass)->_0).namespaze) {
                pOVar7 = pOVar6[1].klass;
                iVar19 = *(int *)&(pOVar7->_0).namespaze * 2;
                if (iVar19 < *(int *)&(pOVar7->_0).namespaze + 4) {
                  iVar19 = *(int *)&(pOVar7->_0).namespaze + 4;
                }
                PStackY_38._arg1 = (Object *)&UNK_?;
                FUN_?(pOVar6,iVar19,
                              MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                              ->klass->rgctx_data[5].rgctxDataDummy);
              }
              if (pOVar6[1].klass != (Object__Class *)0x0) {
                PStackY_38._arg1 = (Object *)&UNK_?;
                FUN_?(pOVar6[1].klass,(longlong)*(int *)((longlong)&pOVar6[1].monitor + 4)
                              ,this_01);
                if (pOVar6[1].klass != (Object__Class *)0x0) {
                  iVar20 = *(int *)((longlong)&pOVar6[1].monitor + 4) + 1;
                  iVar19 = 0;
                  if (iVar20 != *(int *)&((pOVar6[1].klass)->_0).namespaze) {
                    iVar19 = iVar20;
                  }
                  *(int *)((longlong)&pOVar6[1].monitor + 4) = iVar19;
                  *(int *)&pOVar6[2].klass = *(int *)&pOVar6[2].klass + 1;
                  piVar21 = (int *)((longlong)&pOVar6[2].klass + 4);
                  *piVar21 = *piVar21 + 1;
                  return;
                }
              }
            }
            PStackY_38._arg1 = (Object *)&UNK_?;
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        PStackY_38._arg1 = (Object *)&UNK_?;
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
  }
  PStackY_58._args = (Object__Array *)&UNK_?;
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSecondDownloadFinished(UnityWebRequest, Single, Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_OnSecondDownloadFinished
               (UnityWebRequest *result,float startTime,int32_t currentStreamingAssetVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_executing_command___0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Download_time_2___0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (result == (UnityWebRequest *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(result,(MethodInfo *)0x0);
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    afStackX_8[0] = (float)(*pcRam_?)();
    afStackX_8[0] = afStackX_8[0] - startTime;
    arg0_00 = (Object *)FUN_?(uRam_?,afStackX_8);
    pSVar2 = StringLiteral_Download_time_2___0_;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,arg0_00,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
  }
  else {
    arg0 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(result,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_Error_executing_command___0_;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              (&PStack_4,(Object *)arg0,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SetStreamingAssetVersion_has_no_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = StringLiteral_SetStreamingAssetVersion_has_no_;
  if (cRam_? == '\0') {
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 == (ILogger_1 *)0x0) {
    PStack_4._args = (Object__Array *)&UNK_?;
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSStack_7 = pSVar2;
  PStack_4._args = (Object__Array *)&UNK_?;
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,2);
  return;
}


/* Void Run(Int32) */

void Assembly-CSharp.dll::AssetBundleCacheTest::AssetBundleCacheTest_Run
               (int32_t version,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SetStreamingAssetVersion_has_no_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_SetStreamingAssetVersion_has_no_,(MethodInfo *)0x0);
  pOVar1 = (Object__Class *)
           FUN_?(
                        TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest,_float,_int>
                        );
  mscorlib.dll::System::Action`3[Object,Single,Int32]::Action_3_Object_Single_Int32___ctor
            ((Action_3_Object_Single_Int32_ *)pOVar1,(Object *)0x0,
             MethodInfo__AssetBundleCacheTest__OnFirstDownloadFinished_UnityEngine__Networking__UnityWebRequest__float__int_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedAssetBundleRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamingAsset);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Test_bignoise_unity3d);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = (Object *)FUN_?(TypeInfo__AssetBundleCacheTest____c__DisplayClass4_0);
  if (pOVar2 != (Object *)0x0) {
    bVar3 = iRam_? != 0;
    pOVar2[1].klass = pOVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pcVar8 = pcRam_?;
    *(undefined4 *)((longlong)&pOVar2[1].monitor + 4) = 0x230965eb;
    pcVar9 = pcRam_?;
    if ((pcVar8 == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar9 = pcVar8, pcVar8 == (code *)0x0))
    {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar9;
    uVar11 = (*pcVar8)();
    *(undefined4 *)&pOVar2[1].monitor = uVar11;
    if (*(int *)&(TypeInfo__StreamingAsset->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar12 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar12,StringLiteral_Test_bignoise_unity3d,(MethodInfo *)0x0);
    args = (Object__Array *)FUN_?(TypeInfo__System__Object,3);
    if (args != (Object__Array *)0x0) {
      if ((pSVar12 != (String *)0x0) &&
         (lVar13 = FUN_?(pSVar12,(args->klass->_0).element_class), lVar13 == 0)) {
        uVar10 = FUN_?();
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FUN_?(args,0,pSVar12);
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__version_587818475);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar14 = StringLiteral__version_587818475;
      if ((StringLiteral__version_587818475 != (String *)0x0) &&
         (lVar13 = FUN_?(StringLiteral__version_587818475,(args->klass->_0).element_class),
         lVar13 == 0)) {
        uVar10 = FUN_?();
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FUN_?(args,1,pSVar14);
      auStackX_8[0] = 0x230965eb;
      lVar13 = FUN_?(uRam_?,auStackX_8);
      if ((lVar13 != 0) &&
         (lVar13 = FUN_?(lVar13,(args->klass->_0).element_class), lVar13 == 0)) {
        uVar10 = FUN_?();
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FUN_?(args,2);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                (StringLiteral_Url___0_u000AUrl_appendage___1_u000AVers,args,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,pOVar2,
                 MethodInfo__AssetBundleCacheTest____c__DisplayClass4_0___DownloadTestAsset_b__0_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,pSVar12,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AsyncWWWManager,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedGetRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
        if (this_01 != (AsyncWebRequest *)0x0) {
          bVar15 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if ((bVar15 <= (this_01->klass->_1).naturalAligment) &&
             ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] ==
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            pAVar16 = this_01->klass;
            bVar15 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if (((pAVar16->_1).naturalAligment < bVar15) ||
               ((pAVar16->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              FUN_?(this_01,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar16,
                            unaff_RBX);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            cVar17 = (*(code *)pAVar16[1]._0.image)
                              (this_01,TypeInfo__AsyncWWWManager->static_fields->cache,
                               pAVar16[1]._0.gc_desc);
            if (cVar17 != '\0') {
              return;
            }
          }
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        this = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (((this_01 != (AsyncWebRequest *)0x0) &&
            (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                                 (this_01->fields).requestPriority,
                                 MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                ), pOVar2 != (Object *)0x0)) {
          if (pOVar2[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar2[2].klass == *(int *)&((pOVar2[1].klass)->_0).namespaze) {
              pOVar1 = pOVar2[1].klass;
              iVar18 = *(int *)&(pOVar1->_0).namespaze * 2;
              if (iVar18 < *(int *)&(pOVar1->_0).namespaze + 4) {
                iVar18 = *(int *)&(pOVar1->_0).namespaze + 4;
              }
              FUN_?(pOVar2,iVar18,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar2[1].klass != (Object__Class *)0x0) {
              FUN_?(pOVar2[1].klass,(longlong)*(int *)((longlong)&pOVar2[1].monitor + 4),
                            this_01);
              if (pOVar2[1].klass != (Object__Class *)0x0) {
                iVar19 = *(int *)((longlong)&pOVar2[1].monitor + 4) + 1;
                iVar18 = 0;
                if (iVar19 != *(int *)&((pOVar2[1].klass)->_0).namespaze) {
                  iVar18 = iVar19;
                }
                *(int *)((longlong)&pOVar2[1].monitor + 4) = iVar18;
                *(int *)&pOVar2[2].klass = *(int *)&pOVar2[2].klass + 1;
                piVar20 = (int *)((longlong)&pOVar2[2].klass + 4);
                *piVar20 = *piVar20 + 1;
                return;
              }
            }
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

