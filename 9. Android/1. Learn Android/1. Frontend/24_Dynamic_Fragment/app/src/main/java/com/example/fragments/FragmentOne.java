package com.example.fragments;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import androidx.fragment.app.Fragment;

public class FragmentOne extends Fragment {

    public FragmentOne() {
        // Required empty public constructor
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        View rootView = inflater.inflate(R.layout.fragment_one, container, false);
        Button buttonToFragmentTwo = rootView.findViewById(R.id.buttonToFragmentTwo);
        buttonToFragmentTwo.setOnClickListener(v -> {
            // Switch to Fragment Two
            getActivity().getSupportFragmentManager().beginTransaction()
                    .replace(R.id.fragment_container, new FragmentTwo())
                    .commit();
        });
        return rootView;
    }
}