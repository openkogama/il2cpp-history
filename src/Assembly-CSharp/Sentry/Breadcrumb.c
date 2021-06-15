
/* List`1[Sentry.Breadcrumb] CombineBreadcrumbs(Breadcrumb[], Int32, Int32) */

List_1_Sentry_Breadcrumb_ *
Assembly-CSharp.dll::Sentry::Breadcrumb::Breadcrumb_CombineBreadcrumbs
          (Breadcrumb__Array *breadcrumbs,int32_t index,int32_t number,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_ThemeAttributes_ThemeAttribute_ *)
         func_?(TypeInfo__System__Collections__Generic__List<Sentry::Breadcrumb>);
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this,number,
             MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__List_int_);
  iVar1 = 0;
  if (0 < number) {
    do {
      if (breadcrumbs == (Breadcrumb__Array *)0x0) {
code_?:
        func_?(0);
code_?:
        uVar2 = func_?(0,0);
        func_?(uVar2);
        pcVar3 = (code *)swi(3);
        pLVar4 = (List_1_Sentry_Breadcrumb_ *)(*pcVar3)();
        return pLVar4;
      }
      uVar5 = (((index - number) + 100) % 100 + iVar1) % 100;
      if (breadcrumbs->max_length <= uVar5) goto code_?;
      if (this == (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)breadcrumbs->vector[uVar5],
                 MethodInfo__System__Collections__Generic__List<Sentry::Breadcrumb>__Add_Sentry__Breadcrumb_
                );
      iVar1 = iVar1 + 1;
    } while (iVar1 < number);
  }
  return (List_1_Sentry_Breadcrumb_ *)this;
}

