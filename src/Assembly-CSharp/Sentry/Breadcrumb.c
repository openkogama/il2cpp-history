
/* List`1[Sentry.Breadcrumb] CombineBreadcrumbs(Breadcrumb[], Int32, Int32) */

List_1_Sentry_Breadcrumb_ *
Assembly-CSharp.dll::Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
          (Breadcrumb__Array *breadcrumbs,int32_t index,int32_t number,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
          *)FUN_?(TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
            (this,number,
             MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
  iVar1 = ((index - number) + 100) % 100;
  if (0 < number) {
    iVar2 = iVar1;
    if (breadcrumbs == (Breadcrumb__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pLVar4 = (List_1_Sentry_Breadcrumb_ *)(*pcVar3)();
      return pLVar4;
    }
    do {
      pMVar5 = 
      MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_;
      if ((uint)breadcrumbs->max_length <= (uint)(iVar2 % 100)) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pLVar4 = (List_1_Sentry_Breadcrumb_ *)(*pcVar3)();
        return pLVar4;
      }
      item = breadcrumbs->vector[iVar2 % 100];
      if (this == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)0x0) goto code_?;
      piVar6 = &(this->fields)._version;
      *piVar6 = *piVar6 + 1;
      pRVar7 = (this->fields)._items;
      if (pRVar7 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0)
      goto code_?;
      uVar8 = (this->fields)._size;
      if (uVar8 < (uint)pRVar7->max_length) {
        (this->fields)._size = uVar8 + 1;
        FUN_?(pRVar7,(longlong)(int)uVar8,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this,(Object *)item,
                   pMVar5->klass->rgctx_data[0xe].method);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 - iVar1 < number);
  }
  return (List_1_Sentry_Breadcrumb_ *)this;
}

