
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheManager::
     KgmCacheManager_Awake(KgmCacheManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pKVar1 = TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields->
           _Instance_k__BackingField;
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
  if (pKVar1 != (KgmCacheManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pKVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar2 = (void *)0x0;
      if (this != (KgmCacheManager *)0x0) {
        pvVar2 = (this->fields)._._._._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
            ((Object_1 *)target,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields->
  _Instance_k__BackingField = this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                   TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields >>
                  0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}


/* Void DownloadImage(String, Action`1[UnityEngine.Sprite], Action`1[String]) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheManager::
     KgmCacheManager_DownloadImage
               (KgmCacheManager *this,String *imageUrl,Action_1_UnityEngine_Sprite_ *onSuccess,
               Action_1_String_ *onError,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Sprite>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__ImageDownloader);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>__TryGet_System__String__UnityEngine__Sprite__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager____c__DisplayClass7_0___DownloadImage_b__0_UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager____c__DisplayClass7_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apOStack_1[0] = (Object *)0x0;
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager____c__DisplayClass7_0
                        );
  if (object != (Object *)0x0) {
    object[1].klass = (Object__Class *)this;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    iVar7 = iRam_?;
    object[1].monitor = (MonitorData *)imageUrl;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
        iVar7 = iRam_?;
      } while (!bVar6);
    }
    object[2].klass = (Object__Class *)onSuccess;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)(object + 2) >> 0xc);
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
    this_00 = (this->fields).contentImagesCache;
    if (this_00 != (MemoryKgmCache_2_System_String_UnityEngine_Sprite_ *)0x0) {
      bVar8 = MemoryKgmCache`2[System::Object,System::Object]::
              MemoryKgmCache_2_System_Object_System_Object__TryGet
                        ((MemoryKgmCache_2_System_Object_System_Object_ *)this_00,
                         (Object *)object[1].monitor,apOStack_1,
                         MethodInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>__TryGet_System__String__UnityEngine__Sprite__
                        );
      if (bVar8 == 0) {
        url = (String *)object[1].monitor;
        this_01 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<UnityEngine::Sprite>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager____c__DisplayClass7_0___DownloadImage_b__0_UnityEngine__Sprite_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UGUI__Portal__Scripts__ImageDownloader->_1).field_0x1c == 0) {
          FUN_?();
        }
        routine = ImageDownloader::ImageDownloader_Get
                            (url,(Action_1_UnityEngine_Sprite_ *)this_01,onError,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      }
      else {
        pOVar9 = object[2].klass;
        if (pOVar9 != (Object__Class *)0x0) {
          uVar10._0_2_ = (pOVar9->_0).byval_arg.attrs;
          uVar10._2_1_ = (pOVar9->_0).byval_arg.type;
          uVar10._3_5_ = *(undefined5 *)&(pOVar9->_0).byval_arg.field_0xb;
          (*(code *)(pOVar9->_0).namespaze)((pOVar9->_0).element_class,apOStack_1[0],uVar10);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* KgmCacheManager() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheManager::
     KgmCacheManager__ctor(KgmCacheManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>__MemoryKgmCache__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).timeoutImages = 0x78;
  pMVar1 = (MemoryKgmCache_2_System_String_UnityEngine_Sprite_ *)
           FUN_?(
                        TypeInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>
                        );
  pMVar2 = 
  MethodInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>__MemoryKgmCache__
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = pMVar2->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(pvVar3);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,pMVar2->klass->rgctx_data[0x14].method);
  bVar4 = iRam_? != 0;
  (pMVar1->fields).cache =
       (Dictionary_2_System_String_UGUI_Portal_Scripts_Utils_Cache_KgmCacheItem_1_UnityEngine_Sprite_
        *)this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&pMVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pRVar9 = (ReaderWriterLockSlim *)FUN_?(TypeInfo__System__Threading__ReaderWriterLockSlim);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Threading__ReaderWriterLockSlim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pRVar9->fields).upgradeLockOwnerId = -1;
  (pRVar9->fields).writeLockOwnerId = -1;
  (pRVar9->fields).fNoWaiters = 1;
  pRVar10 = TypeInfo__System__Threading__ReaderWriterLockSlim->static_fields;
  LOCK();
  lVar6 = pRVar10->s_nextLockID;
  pRVar10->s_nextLockID = pRVar10->s_nextLockID + 1;
  UNLOCK();
  (pRVar9->fields).lockID = lVar6 + 1;
  iVar11 = iRam_?;
  (pMVar1->fields).locker = pRVar9;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(pMVar1->fields).locker >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar4);
  }
  (this->fields).contentImagesCache = pMVar1;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).contentImagesCache >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
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


/* KgmCacheManager get_Instance() */

KgmCacheManager *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheManager::
KgmCacheManager_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields->
         _Instance_k__BackingField;
}


/* Void set_Instance(KgmCacheManager) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheManager::
     KgmCacheManager_set_Instance(KgmCacheManager *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields->
  _Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   TypeInfo__UGUI__Portal__Scripts__Utils__Cache__KgmCacheManager->static_fields >>
                  0xc);
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
  return;
}

