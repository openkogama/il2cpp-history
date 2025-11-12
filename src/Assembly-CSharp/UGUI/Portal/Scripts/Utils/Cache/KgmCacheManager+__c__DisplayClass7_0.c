
/* Void <DownloadImage>b__0(Sprite) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::Cache::KgmCacheManager+<>c__DisplayClass7_0
     ::KgmCacheManager_c_DisplayClass7_0__DownloadImage_b__0
               (KgmCacheManager_c_DisplayClass7_0 *this,Sprite *sprite1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>__AddOrUpdate_System__String__UnityEngine__Sprite__int__bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pKVar1 = (this->fields).__4__this;
  if ((pKVar1 != (KgmCacheManager *)0x0) &&
     (this_00 = (pKVar1->fields).contentImagesCache,
     this_00 != (MemoryKgmCache_2_System_String_UnityEngine_Sprite_ *)0x0)) {
    MemoryKgmCache`2[System::Object,System::Object]::
    MemoryKgmCache_2_System_Object_System_Object__AddOrUpdate
              ((MemoryKgmCache_2_System_Object_System_Object_ *)this_00,
               (Object *)(this->fields).imageUrl,(Object *)sprite1,(pKVar1->fields).timeoutImages,0,
               MethodInfo__UGUI__Portal__Scripts__Utils__Cache__MemoryKgmCache<System::String,_UnityEngine::Sprite>__AddOrUpdate_System__String__UnityEngine__Sprite__int__bool_
              );
    pAVar2 = (this->fields).onSuccess;
    if (pAVar2 != (Action_1_UnityEngine_Sprite_ *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,sprite1,(pAVar2->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

