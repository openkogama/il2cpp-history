
/* List`1[Sentry.Breadcrumb] CombineBreadcrumbs(Breadcrumb[], Int32, Int32) */

List_1_Sentry_Breadcrumb_ *
Assembly-CSharp.dll::Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
          (Breadcrumb__Array *breadcrumbs,int32_t index,int32_t number,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,number,
             MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
  iVar1 = ((index - number) + 100) % 100;
  if (0 < number) {
    iVar2 = 0;
    if (breadcrumbs == (Breadcrumb__Array *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      pLVar4 = (List_1_Sentry_Breadcrumb_ *)(*pcVar3)();
      return pLVar4;
    }
    do {
      if (breadcrumbs->max_length <= (uint)(iVar1 % 100)) goto code_?;
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)breadcrumbs->vector[iVar1 % 100],
                 MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_
                );
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < number);
  }
  return (List_1_Sentry_Breadcrumb_ *)this;
}

