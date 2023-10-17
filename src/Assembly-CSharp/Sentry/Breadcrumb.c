
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
  this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
         func_?(TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
  if (this == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_Sentry_Breadcrumb_ *)(*pcVar1)();
    return pLVar2;
  }
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
  UnitySynchronizationContext+WorkRequest]::
  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
            (this,number,
             MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
  if (0 < number) {
    iVar3 = 0;
    iVar4 = ((index - number) + 100) % 100;
    if (breadcrumbs == (Breadcrumb__Array *)0x0) goto code_?;
    do {
      uVar5 = (iVar4 + iVar3) % 100;
      if (breadcrumbs->max_length <= uVar5) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)breadcrumbs->vector[uVar5],
                 MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_
                );
      iVar3 = iVar3 + 1;
      iVar4 = unaff_ESI;
    } while (iVar3 < number);
  }
  return (List_1_Sentry_Breadcrumb_ *)this;
}

